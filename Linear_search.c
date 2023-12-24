#include<stdio.h>

int linear_search(int* arr, int size, int element)
{
    int pos = -1;
    for(int i=0; i < size; i++)
        if(arr[i] == element)
            pos = i;
    return pos; // returns the index
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;
    int element = 6;
    printf("index of %d = %d\n", element, linear_search(arr, size, element));

    return 0;
}