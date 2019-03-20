#include<iostream>
using namespace std;
#define INFINITY 999
#define n 5
#define s 0
#define d 3
#define Row 5
#define Colum 5
#define NILL -1
int min_distance(int dist[],int blackened[]);
void printPath(int parent[],int _d);
void DijkstraAlgo(int Graph[][Colum],int _n,int _s,int _d)
{
    int dist[n],parent[n],parent_length[n];
    int blackened[n]={0};
    int u;
    for(int i=0;i<n;i++)
    {
        dist[i]=INFINITY;
    }
    dist[_s]=0;
    parent[_s]=NILL;
    parent_length[_s]=0;

    for(int count=0;count<n-1;count++)
    {
        u=min_distance(dist,blackened);
        if(u==INFINITY)
        {
            break;
        }
        else
        {
            blackened[u]=1;
            for(int v=0;v<n;v++)
            {
                if(!blackened[v]&&dist[u]+Graph[u][v]<dist[v])
                {
                    dist[v]=dist[u]+Graph[u][v];
                    parent[v]=u;
                    parent_length[v]=parent_length[u]+1;
                }
                else
                {
                    if(!blackened[v]&&dist[u]+Graph[u][v]==dist[v]&&parent_length[u]+1<parent_length[v])
                {
                    parent[v]=u;
                    parent_length[v]=parent_length[u]+1;
                }
                }


            }
        }
    }
    if(dist[_d]!=INFINITY)
    {
        printPath(parent,_d);
    }
    else
    {
        cout<<"There is no path from "<<_s<<" to "<<_d;
    }

}
void printPath(int parent[],int _d)
{
    if(parent[_d]==NILL)
    {
        cout<<_d;
        return;
    }
    printPath(parent,parent[_d]);
    cout<<"->"<<_d;
}
int min_distance(int dist[],int blackened[])
{
    int min_index,min_value=INFINITY;
    for(int  v=0;v<n;v++)
    {
        if(!blackened[v]&&dist[v]<min_value)
        {
            min_value=dist[v];
            min_index=v;
        }
    }
    return min_value==INFINITY? INFINITY:min_index;
}
int main()
{
    int Graph[n][n]={{0,1,INFINITY,INFINITY,10},
                        {1,0,4,INFINITY,INFINITY},
                        {INFINITY,4,0,7,INFINITY},
                        {INFINITY,INFINITY,7,0,2},
                        {10,INFINITY,INFINITY,2,0}
                    };
    DijkstraAlgo(Graph,n,s,d);

    return 0;
}
