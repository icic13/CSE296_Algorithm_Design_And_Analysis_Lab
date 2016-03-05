#include <iostream>
#include <list>
#include <queue>
#include <cstring>
using namespace std;

queue<int> Q;

int color[100];
int dis[100];
int a[100][100];
int bfs(int start,int node){

Q.push(start);
color[start] = 1;
dis[start] = 0;

while(!Q.empty()){
    int m = Q.front();
    Q.pop();

    for(int i = 1; i<= node; i++){
        if(a[m][i]&&!color[i]){

            dis[i] = dis[m] + 1;
            Q.push(i);
            color[i] = true;
        }
    }



}
return 0;

}


struct Graph{

    int u;
    int v;

}graph[100];

int main(){


   int i,j,n;

   while(scanf("%d",&n)==1&&n){
    memset(color,0,sizeof(color));

    memset(dis,-1,sizeof(dis));


    for(i = 1; i<= n ; i++){
            for(j = 1; j<=n; j++)
        cin>>a[i][j]

    }
    bfs(1,n);

    for(i = 1; i<=n ; i++)
        cout<<i<<" "<<dis[i]<<endl;


   }


}
