#include<iostream>
#include <limits>

using namespace std;

int Arraycost[100][100];
int firstvertex;
int secondvertex;
int keepcheck;
int number;
int edges;
int price;
int visit;
int visited[100];
int list;
int vertexnum;
int keepcount;
int keepvisit;


bool checkArray(int indexNo1, int indexNo2,int s)
{
    int array[100];
    int number=1;
    array[0]=indexNo1;
        for(int z=1;z<=s;z++)
        {
            for(int x=0;x<number;x++)
            {
                if(Arraycost[array[x]][z]==-1)
                {
                    int found=0;
                    for(int v=0;v<number;v++)
                    {
                        if(z==v)
                        {
                            found=1;
                        }
                    }
                    if(found==0)
                    {
                        array[number]=z;
                        number++;
                        z=0;
                    }
                }
            }
        }
    int flag=0;
    for(int x=0;x<number;x++)
    {

        if(Arraycost[indexNo2][array[x]]==-1)
        {

            flag=1;
        }
    }

    if(flag==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void start(int arr[][100])
{
    for(int z=0;z<100;z++)
    {
        for(int y=0;y<100;y++)
        {
            arr[z][y]=31999;
        }
    }

}
int main()
{
    int edgeArray[100][100];
    int backupArray[100][100];
    int option;
    int created=0;
    do
    {


        while(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Error"<<endl;
        cout<<"\nEnter choice: ";
        cin>>option;

        }

               start(edgeArray);
                start(Arraycost);
                start(backupArray);
                created=1;

                cout<<"Please Enter the number of vertices: ";
                cin >> number;

                 while(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Error"<<endl;
        cout<<"Please Enter the number of vertices: ";
                cin >> number;

        }


                while(number<0)
                {
                cout<<"Error"<<endl;
                cout<<"Please Enter the number of vertices: ";
                cin >> number;
                }

                cout <<"Please Enter the number of edges: ";
                cin >>edges;

                   while(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Error"<<endl;
             cout <<"Please Enter the number of edges: ";
                cin >>edges;



        }

                while(edges<0)
                {
                cout<<"Error"<<endl;
                cout <<"Please Enter the number of edges: ";
                cin >>edges;

                }

                cout<<" \n===================\n";
                for(int k=1;k<=edges;k++)
                {
                    cout<<"\nEdge" <<k<<"\n*************"<<endl;
                    cout<<"Enter Vertex 1: ";
                    cin>>firstvertex;


                   while(cin.fail())
                  {
                    cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(),'\n');
                  cout<<"Error"<<endl;
                  cout<<"Enter Vertex 1: ";
                  cin>>firstvertex;
                   }

                    while(firstvertex>number)
                    {
                       cout<<"Error"<<endl;
                        cout<<"Enter Vertex 1: ";
                        cin>>firstvertex;
                    }

                    while(firstvertex<=0)
                    {
                        cout<<"Error"<<endl;
                        cout<<"Enter Vertex 1: ";
                        cin>>firstvertex;
                    }

                    cout<<"Enter Vertex 2: ";
                    cin>>secondvertex;

                     while(cin.fail())
                  {
                    cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(),'\n');
                  cout<<"Error"<<endl;
                 cout<<"Enter Vertex 2: ";
                    cin>>secondvertex;
                   }

                    while(secondvertex>number)
                    {
                        cout<<"Error"<<endl;
                        cout<<"Enter Vertex 2: ";
                        cin>>secondvertex;
                    }

                    while(secondvertex<=0)
                    {
                        cout<<"Error"<<endl;
                        cout<<"Enter Vertex 2: ";
                        cin>>secondvertex;
                    }

                    while(Arraycost[firstvertex][secondvertex]!=31999&&Arraycost[secondvertex][firstvertex]!=31999)
                    {
                        cout<<"Do not overwrite the cost of this edge!"<<endl;
                        cout<<"Enter Vertex 1: ";
                        cin>>firstvertex;


                         while(cin.fail())
                      {
                             cin.clear();
                          cin.ignore(numeric_limits<streamsize>::max(),'\n');
                         cout<<"Error"<<endl;
                         cout<<"Enter Vertex 1: ";
                        cin>>firstvertex;
                      }


                        while(firstvertex>number)
                        {
                            cout<<"Error"<<endl;
                            cout<<"Enter Vertex 1: ";
                            cin>>firstvertex;
                        }

                         while(firstvertex<=0)
                        {
                            cout<<"Error"<<endl;
                            cout<<"Enter Vertex 1: ";
                            cin>>firstvertex;
                        }

                        cout<<"Enter Vertex 2: ";
                        cin>>secondvertex;

                         while(cin.fail())
                      {
                             cin.clear();
                          cin.ignore(numeric_limits<streamsize>::max(),'\n');
                         cout<<"Error"<<endl;
                        cout<<"Enter Vertex 2: ";
                        cin>>secondvertex;
                      }




                        while(secondvertex>number)
                        {
                           cout<<"Error"<<endl;
                            cout<<"Vertex 2: ";
                            cin>>secondvertex;
                        }

                        while(secondvertex<=0)
                        {
                            cout<<"Error"<<endl;
                            cout<<"Vertex 2: ";
                            cin>>secondvertex;
                        }

                    }
                    cout<<"Please Enter the Cost: ";
                    cin>>price;

                    while(cin.fail())
                      {
                             cin.clear();
                          cin.ignore(numeric_limits<streamsize>::max(),'\n');
                         cout<<"Error"<<endl;
                        cout<<"Please Enter the Cost: ";
                           cin>>price;
                      }


                    while(price<=0)
                    {
                        cout<<"Error"<<endl;
                        cout<<"Please Enter the Cost: ";
                        cin>>price;
                    }

                     while(price>100)
                    {
                        cout<<"Error"<<endl;
                        cout<<"Please Enter the Cost: ";
                        cin>>price;
                    }

                    Arraycost[firstvertex][secondvertex]=price;
                    Arraycost[secondvertex][firstvertex]=price;
                    cout<<endl;
                    cout<<"    "<<price<<endl;
                    cout<<firstvertex<<"-------"<<secondvertex<<endl;
                    cout<<endl;
                }
                int counting;
                for(int i=1;i<=number;i++)
                {
                    counting=0;
                    for(int j=1;j<=number;j++)
                    {
                        if(Arraycost[i][j]!=0&&Arraycost[i][j]!=31999)
                        {
                            counting++;
                        }
                    }

                    if(counting==0)
                    {
                        cout<<"No edge that can reach to vertex "<<i<<endl;
                        cout<<"Vertex "<<i<< " has been removed! "<<endl;
                        number=number-1;
                    }
                }
                for(int i=1;i<=number;i++)
                {
                    for(int j=1;j<=number;j++)
                    {
                        if(Arraycost[i][j]==0)
                            Arraycost[i][j]=31999;
                    }
                }
                cout<<"\n*******************";
                cout<<"\nThe graph";
                cout<<"\n*******************"<<endl;
                cout<<"X is used to represent Infinity"<<endl;
                for(int i=1;i<=number;i++)
                {
                    cout<<"\t"<<i;
                }
                cout<<endl;
                for(int i=1;i<=number;i++)
                {
                    cout<<i;
                    for(int j=1;j<=number;j++)
                    {
                        if(Arraycost[i][j]!=31999)
                        {
                            cout<<"\t"<<Arraycost[i][j];
                        }
                        else if(i==j)
                        {
                            cout<<"\t0";
                        }
                        else
                        {
                            cout<<"\tX";
                        }
                    }
                    cout<<endl;
                }
                for(int i=1;i<=number;i++)
                {
                    for(int j=1;j<=number;j++)
                    {
                        backupArray[i][j]=Arraycost[i][j];
                    }
                }

                cout<<"*******************";
                cout<<"\n The graph";
                cout<<"\n*******************"<<endl;
                cout<<"X is used to represent Infinity"<<endl;
                for(int i=1;i<=100;i++)
                {
                    visited[i]=0;
                }
                if(created==1)
                {

                    for(int i=1;i<=number;i++)
                    {
                        for(int j=1;j<=number;j++)
                        {
                            Arraycost[i][j]=backupArray[i][j];
                        }
                    }
                    for(int i=1;i<=number;i++)
                    {
                        cout<<"\t"<<i;
                    }
                    cout<<endl;
                     for(int i=1;i<=number;i++)
                    {
                        cout<<i;
                        for(int j=1;j<=number;j++)
                        {
                            if(Arraycost[i][j]!=31999)
                            {
                                cout<<"\t"<<Arraycost[i][j];
                            }
                            else if(i==j)
                            {
                                cout<<"\t0";
                            }
                            else
                            {
                                cout<<"\tX";
                            }
                        }
                        cout<<endl;
                    }

                        int weight=0;
                        int check1;
                        int check2;
                        visit=1;
                        while(visit<number)
                        {
                            vertexnum=31999;
                            for(int i=1;i<=number;i++)
                            {
                                for(int j=1;j<=number;j++)
                                {


                                    if(Arraycost[i][j]!=31999 && Arraycost[i][j]<vertexnum  && Arraycost[i][j]!=-1 )
                                    {
                                        if(checkArray(i,j,number)==true)
                                        {

                                            int count=0;
                                            for(int p=1;p<=number;p++)
                                            {
                                                if(visited[p]==i || visited[p]==j)
                                                count++;
                                            }
                                            if(count >= 2)
                                            {
                                                for(int p=1;p<=number;p++)
                                                {
                                                    if(Arraycost[i][p]!=31999 && p!=j)
                                                    check1=p;
                                                }
                                                for(int p=1;p<=number;p++)
                                                {
                                                    if(Arraycost[j][p]!=31999 && p!=i)
                                                    check2=p;
                                                }
                                                if(Arraycost[check1][check2]==-1)
                                                continue;
                                            }
                                            list=i;
                                            keepcheck=j;
                                            vertexnum=Arraycost[i][j];
                                        }
                                    }
                                }
                            }
                            cout<<endl;
                            cout <<"edge " <<list <<"--------"<<keepcheck<<"\tweight: "<<Arraycost[list][keepcheck];
                            cout<<endl;
                            weight=weight+Arraycost[list][keepcheck];
                            edgeArray[list][keepcheck]=Arraycost[list][keepcheck];
                            edgeArray[keepcheck][list]=Arraycost[keepcheck][list];
                            Arraycost[list][keepcheck]=-1;
                            Arraycost[keepcheck][list]=-1;
                            visit++;
                            int count=0;
                            keepcount=0;
                            for(int i=1;i<=number;i++)
                            {
                            if(visited[i]==list)
                            count++;
                            if(visited[i]==keepcheck)
                            keepcount++;
                            }
                            if(count==0)
                            visited[++keepvisit]=list;
                            if(keepcount==0)
                            visited[++keepvisit]=keepcheck;
                        }
                        cout<<endl;
                        cout<<"=================================="<<endl;
                        cout<<"\nMinimum Spanning tree"<<endl;
                        cout<<"\n================================"<<endl;
                         cout<<"X is used to represent Infinity"<<endl;
                        for(int i=1;i<=number;i++)
                        {
                            cout<<"\t"<<i;
                        }
                        cout<<endl;
                        for(int i=1;i<=number;i++)
                        {
                            cout<<i;
                            for(int j=1;j<=number;j++)
                            {
                                if(Arraycost[i][j]==-1)
                                {
                                    cout<<"\t"<<edgeArray[i][j];
                                }
                                else if(i==j)
                                {
                                    cout<<"\t0";
                                }
                                else
                                {
                                    cout<<"\tX";
                                }
                            }
                            cout<<endl;
                        }
                        cout<<"The Total cost: "<<weight<<endl;
                    }


                cout<<"GoodBye! "<<endl;
                break;

    }while(option!=4);
    return 0;
}
