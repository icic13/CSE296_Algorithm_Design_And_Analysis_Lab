#include <iostream>
using namespace std;

void countingSort(int a[],int b[],int n,int range)
{


    int c[range+1];

    for(int i = 0 ; i<=range; i++)
        c[i] = 0;

    for(int i = 0; i<n; i++)
        c[a[i]]++;

    for(int i = 1; i<=range ; i++)
        c[i] = c[i-1] +c[i];

    for(int i = 0; i<n; i++)
    {

        b[c[a[i]]-1] = a[i];
        c[a[i]]--;
    }


}

int maxElement(int data[],int n){

    int max = -99999;

    for(int i = 0; i<n; i++)
        if(data[i]>max)
            max = data[i];

    return max;

}
int main()
{

    int n;
    cout<<"How many numbers: "<<endl;
    cin>>n;
    int data[n];
    for(int i = 0; i<n ; i++)
        cin>>data[i];

    int result[n];
    int maximumElement = maxElement(data,n);
    countingSort(data,result,n,maximumElement);

    for(int i = 0; i<n ; i++)
        cout<<result[i]<<" ";
    cout<<endl;

    return 0;
}


