#include <stdio.h>

int partition(int arr[],int low,int high)
{
  int pivot=arr[high];
  int i=(low-1);
   
  for(int j=low;j<=high;j++)
  {
    if(arr[j]<pivot)
    {
      i++;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  int temp = arr[i+1];
  arr[i+1] = arr[high];
  arr[high] = temp;
  return (i+1);
}
 
void sort(int arr[],int low,int high)
{
  if(low<high)
  {
     
    int pi=partition(arr,low,high);
     
    sort(arr,low,pi-1);
    sort(arr,pi+1,high);
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
    sort(arr, 0, size-1);
    display(arr, size);

    return 0;
}