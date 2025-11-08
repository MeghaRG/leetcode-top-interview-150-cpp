//https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150
//88. Merge Sorted Array
//Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
//Output: [1,2,2,3,5,6]

#include<bits/stdc++.h>
int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
    int k =0;
    for(int i =0;i<len;++i)
    {
        if(nums[i]!=val)
        {
            nums[k] = nums[i];
            ++k;
        }
    }
        return k;
    }


int main() {
    vector<int> nums = {3,2,2,3};
        int val =3;
        int k = removeElement(nums,val);
        cout<<k<<endl;
        for(int i =0;i<k;++i)
        {
            cout<<nums[i]<<" ";
        }

    return 0;
}