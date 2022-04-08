#include<stdio.h>

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int *arr,int low,int high)
{
  int pivot = arr[high];    // pivot
  int i = (low - 1);        // Index of smaller element

  for (int j = low; j <= high- 1; j++)
  {
      // If current element is smaller than the pivot
      if (arr[j] < pivot)
      {
          i++;    // increment index of smaller element
          swap(&arr[i], &arr[j]);
      }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}


void quickSort(int *arr,int low,int high)        //arr[] can also be used...
{
  if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void display(int *arr,int size)          //https://beginnersbook.com/2014/01/c-passing-array-to-function-example/
{
  for (int i=0;i<size;i++)              //len(arr[]) and ++i can be used
  {
    printf(" %d ",arr[i]);
  }
}


int main()
{
  int size;
  printf("enter size of array");
  scanf("%d",&size);
  printf("enter %d numbers\n",size);
  int arr[10];
  for (int i=0;i<size;i++)               //https://www.geeksforgeeks.org/return-local-array-c-function/
  {                                      //if you are intrested in making this a function
    scanf("%d",&arr[i]);
  }
  //display(arr,size);
                                         //printf("%d\n",arr[20]); this doesnot give array index out of bounce exception
  quickSort(arr,0,size-1);


  printf("Sorted array is :");
  display(arr,size);
  return 0;
}
