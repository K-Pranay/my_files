#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
  int t;
  t=*a;
  *a=*b;
  *b=t;
}

int partition(int *arr,int low,int high)
{
  int pivot=arr[high];
  int i=(low-1);
  for (int j=low ; j<=high-1 ; j++)    //missed '=' made my day
  {
    if (arr[j] < pivot)
    {
      i++;
      swap(&arr[i],&arr[j]);
    }
  }
  swap(&arr[i+1],&arr[high]);

  return (i+1);
}

void quickSort(int *arr,int low,int high)
{
  if (low<high)
  {

    int pi=partition(arr,low,high);

    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
  }


}

void display(int *arr,int size)
{
  for (int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
  int arr[100],size;
  cout<<"enter number of values"<<endl;
  cin>>size;
  cout<<"enter "<<size<<" values"<<endl;
  for (int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  quickSort(arr,0,size-1);
  cout<<"sorted array is :";
  display(arr,size);
  return 0;
}
