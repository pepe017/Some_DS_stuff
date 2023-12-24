#include<stdio.h>

//Requires sorted array

int Binary_search(int* arr, int size, int element)
{
    int lb = 0; 
    int ub = size-1;
    while(lb < ub)
    {
        int mid = (lb + ub)/2;
        if(arr[mid] == element)
            return mid;
        else if(arr[mid] > element)
            ub = mid-1;
        else
            lb = mid+1;
    }

    return -1; // returns the index
}

int main()
{
    int arr[] = {1,2,3,4,5,6,9};
    int size = 7;
    int element = 8;
    printf("index of %d = %d\n", element, Binary_search(arr, size, element));

    return 0;
}