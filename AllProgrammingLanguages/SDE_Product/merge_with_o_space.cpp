//https://www.geeksforgeeks.org/efficiently-merging-two-sorted-arrays-with-o1-extra-space/
//faster method available that is gap method
#include<bits/stdc++.h>
using namespace std;

//User function template for C++
class Solution
{
public:

    void swap(int &x,int &y)
    {
        int temp;
        temp=y;
        y=x;
        x=temp;
    }
	void merge(int arr1[], int arr2[], int n, int m)
	{
	    // code here
	    for(int i=0;i<n;i++)
	    {
	        if(arr1[i]>arr2[0])
	            {
	                swap(arr1[i],arr2[0]);
	                // now check placing in arr2;
	                for(int j=1;j<m;j++)
	                {
	                    if(arr2[j-1]>arr2[j])
	                    {
	                        swap(arr2[j-1],arr2[j]);

	                    }
	                    else
	                        break;
	                }
	            }
	    }
	}
};

// { Driver Code Starts.
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int n, m, i;
		cin>>n>>m;
		int arr1[n], arr2[m];
		for (i = 0; i < n; i++)
		{
			cin >> arr1[i];
		}
		for (i = 0; i < m; i++)
		{
			cin >> arr2[i];
		}
		Solution ob;
		ob.merge (arr1, arr2, n, m) ;
		for (i = 0; i < n; i++)
		cout << arr1[i] << " ";

		for (i = 0; i < m; i++)
		{
			cout << arr2[i] <<" ";
		}
		cout << "\n";
	}
	return 0;
}
