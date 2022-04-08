// sort for given array inputs are only 0,1,2
class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        //1st method using sort function directly
        //2nd method count number of 0's 1's and remaining 2's
        //then insert elements using for loop

        // the best method is using Dutch National Flag Algorithm

        int high,mid, low;
        mid=0;
        low=0;
        high=nums.size()-1;

        while(mid<=high)
        {

            if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;

            }
        }

    }
};
