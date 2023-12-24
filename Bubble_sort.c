#include <stdio.h>

void sort(int* arr, int size)
{
    for(int i=size; i >0; i--)
        for(int j=0; j < i-1; j++)
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

void display(int* arr, int size)
{
    for(int i=0; i < size; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {5,3,6,13,7,1,8,23,6,4,76,9};
    int size = 12;
    display(arr, size);
    sort(arr, size);
    display(arr, size);

    return 0;
}