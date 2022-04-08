//kandane algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int max=nums[0], sum=nums[0];

        for ( int i=1; i<nums.size(); i++)    //or for( auto it : nums)
                                              // INT_MIN is a const the least value for a int type
        {
            //cout<<"count #"<<i<<endl;
            if(sum<0)
            {
                sum=0;
            }
            sum = sum + nums[i];


            if(sum>max)
            {

                max=sum;
            }

        }
        return max;

    }
};
