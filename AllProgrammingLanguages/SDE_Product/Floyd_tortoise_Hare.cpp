//4th most effiecient for this case
// Floyd's Tortoise and Hare (cycle Detection)
// draw those diagrams to get clarity

class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int slow = nums[0];
        int fast =nums[0];
        while(true)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
            if (slow==fast)
                break;    //from given constraint they will definitely break
        }
        slow=nums[0];
        while(slow !=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return fast;
    }
};


//3  using unordered_set it is better than a set here
// like hash set

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums)
//     {
//         unordered_set<int> seen;
//         seen.insert(nums[0]);
//         for (int i=1; i< nums.size(); i++)
//         {
//             if(seen.find(nums[i]) == seen.end())
//                 seen.insert(nums[i]);
//             else
//                 return nums[i];

//         }
//         return -1;
//     }
// };


//2 even worst than 1st method it is bruet

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//        for(int i=0; i< nums.size();i++)
//        {
//            for(int j=i+1; j<nums.size(); j++)
//            {
//                if(nums[i]==nums[j])
//                    return nums[i];
//            }
//        }
//     return -1;
//     }
// };


//1

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i =1; i< nums.size(); i++)
//         {
//             if(nums[i]==nums[i-1])
//                 return nums[i];
//         }
//         return -1;

//         //time complexity O(n logn)

//     }
// };
