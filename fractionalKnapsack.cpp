#include <iostream>
#include <algorithm>

using namespace std;
struct material{
int wt,rt;

}mat[100];


bool comp(material a , material b){

if(a.rt<b.rt) return false;

return true;
}



int main(){

    int n,sz;

    while(cin>>n){




        for(int i = 0; i<n ; i++)
            cin>>mat[i].wt>>mat[i].rt;
        cin>>sz;


        sort(&mat[0],&mat[n],comp);

        int ans = 0;

        for(int i = 0; i<n ;i++){

            if(!sz) break;

            if(mat[i].wt>=sz){

                ans+=sz*mat[i].rt;
                break;
            }
            else{

                ans+=mat[i].wt*mat[i].rt;
                sz-=mat[i].wt;

            }

        }
        cout<<ans<<endl;
    }



}
