#include <iostream>
using namespace std;
int arr[20];


int fibonacci(int n)
{

    if(n==0||n==1) return 1;

    else if(arr[n]==0)
        arr[n] = fibonacci(n-1)+fibonacci(n-2);

    return arr[n];

}

int main()
{
    int number;
    cout<<"Enter a number: "<<endl;

    cin>>number;

    cout<<fibonacci(number)<<endl;




}
