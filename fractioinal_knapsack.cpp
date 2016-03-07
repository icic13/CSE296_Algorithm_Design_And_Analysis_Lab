#include <iostream>
#include <cstring>
using namespace std;

struct material
{
    int weight;
    int rate;

} mat[100];


// one 2D array named dp
int dp[100][100];
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
        cin>>mat[i].weight>>mat[i].rate;

    //now make all array element zero using memset
    memset(dp,0,sizeof(dp));

    int sz;
    cin>>sz;
    for(int i = 0; i<=n; i++)
    {


        for(int j  = 0; j<=sz; j++)
        {


            if(mat[i].weight>j)
                dp[i][j] = dp[i-1][j];

            else
                dp[i][j] =max(dp[i-1][j],mat[i].rate+dp[i-1][j-mat[i].weight]);
        }
    }
    for(int i = 0; i<=n; i++)
    {
        for(int j = 0 ; j<=sz; j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }



}
