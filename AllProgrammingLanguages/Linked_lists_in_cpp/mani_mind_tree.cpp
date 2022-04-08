#include <iostream>
using namespace std;


int* bubblesort(int arr[], int size)
{
  int *r = new int[size];
  for (int j = 0; j < size - 1; ++j)
  {
   for (int i = 0; i < size - j - 1; ++i)
   {


     if (arr[i] > arr[i + 1])
     {

       // swap if greater is at the rear position
       int temp = arr[i];
       arr[i] = arr[i + 1];
       arr[i + 1] = temp;
     }
   }
 }
  return r;
}
int main()
{
  int arr[100];
  arr = bubblesort({2,3,4,5,1,6}, 6);
  for(int i=0; i<6;i++)
  {
    cout<<arr[i]<<endl;
  }

  return 0;
}
