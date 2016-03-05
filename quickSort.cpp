#include <iostream>
using namespace std;


int partition(int data[],int l,int h){
    int x= data[h];
    int i = l-1;



    for(int j = l ; j<= h-1; j++){



        if(data[j]<=x){
            i++;
            swap(data[i],data[j]);

        }
    }
    swap(data[i+1],data[h]);

    return i+1;



}

void quickSort(int data[],int l, int h){
    if(l<h){



        int p = partition(data,l,h);
        quickSort(data,l,p-1);
        quickSort(data,p+1,h);
    }




}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
