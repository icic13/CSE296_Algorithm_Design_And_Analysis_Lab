#include <iostream>
using namespace std;

void insertion_sort(int data[],int n){
    int key,i,j;


    for(int i = 1; i<n ;i++){
            key = data[i];

            j = i-1;

            while(j>=0&&data[j]>key){

                data[j+1] = data[j];
                j--;
            }

            data[j+1] = key;


    }



}

int main(){

    int n;
    cout<<"How many numbers: "<<endl;
    cin>>n;
    int data[n];
    for(int i = 0; i<n ; i++)
        cin>>data[i];


    insertion_sort(data,n);

    for(int i = 0; i<n ;i++)
        cout<<data[i]<<" ";
    cout<<endl;

    return 0;
}

