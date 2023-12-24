#include <stdio.h>

void sort(int* arr, int size)
{
    for(int i=0; i < size-1; i++)
    {
        int smallest = i;
        for(int j=i+1; j < size; j++)
        {
            if(arr[smallest] > arr[j])
                smallest = j;
        }
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;

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