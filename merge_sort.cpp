#include <iostream>


using namespace std;
void merge(int data[],int l,int m,int h){
    int i;
    int j;
    int n1 = m-l+1;
    int n2 = h - m;
    int L[n1];
    int R[n1];

    for(i = 0; i<n1; i++){

            L[i] = data[i+l];

    }
    for(j = 0 ; j < n2; j++)
    {
        R[j] = data[j+m+1];
    }

    i = 0;
    j = 0;
    int k = l;
    while(i<n1&&j<n2){


        if(L[i]<=R[j])
        {
            data[k] = L[i];
            i++;
        }
        else
        {
            data[k] = R[j];
            j++;
        }
        k++;



    }
        while(i<n1){

            data[k] = L[i];
            i++;
            k++;
        }
        while(j<n2){
            data[k] = R[j];
            j++;
            k++;
        }


}


void mergeSort(int data[],int l,int h){

    if(l<h){
        int m = l+(h-l)/2;

        mergeSort(data,l,m);
        mergeSort(data,m+1,h);
        merge(data,l,m,h);


    }



}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

/* Driver program to test above functions */
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}



