#include <iostream>
#include <algorithm>
using namespace std;

struct material
{
    int weight;
    int price;
} mat[100];


bool comp(material a,material b)
{

  return a.price>b.price;
}
int main()
{

    int n,sz;
    while(cin>>n)
    {

        for(int i = 0; i<n  ; i++)
            cin>>mat[i].weight>>mat[i].price;

        cin>>sz;

        sort(&mat[0],&mat[n],comp);



        int ans = 0;




        for(int i = 0; i<n ; i++)
        {



            if(!sz) break;


            if(mat[i].weight>=sz)
            {


                ans+=sz*mat[i].price;
                break;
            }

            else
            {
                ans+=mat[i].weight*mat[i].price;

                sz-=mat[i].weight;



            }

        }

        cout<<ans<<endl;
    }

    return 0;
}

