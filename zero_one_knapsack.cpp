#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

struct material{
    int wt;
    int rt;

}mat[100];
int dp[100][100];

int main(){


    int n;
    cin>>n;

    for(int i = 0; i<n ; i++)
        cin>>mat[i].wt>>mat[i].rt;


    memset(dp,0,sizeof(dp));


    int sz;
    cin>>sz;

    for(int i = 1; i<= n; i++ )
    for(int j = 1; j<=sz; j++){



        if(j<mat[i].wt)
            dp[i][j] = dp[i-1][j];

        else
            dp[i][j] =max( dp[i-1][j],mat[i].rt + dp[i-1][j-mat[i].wt] );
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=sz; j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }

}

