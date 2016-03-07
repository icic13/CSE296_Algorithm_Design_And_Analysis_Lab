#include <iostream>

using namespace std;

void selectionSort(int data[],int n){

    for(int i = 0; i<n ;i++){


        int minIndex = i;
        for(int j = i+1; j<n; j++)
            if(data[j]<data[minIndex])
            minIndex = j;
        swap(data[minIndex],data[i]);
    }

}

int main(){
    int n;
    cin>>n;
    int data[n];

    for(int i = 0; i<n ;i++)
        cin>>data[i];

    selectionSort(data,n);

    for(int i = 0; i<n ;i++)
        cout<<data[i]<<" ";
    cout<<endl;

}
