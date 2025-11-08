/*
https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150
26. Remove Duplicates from Sorted Array

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

*/

#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1; // length of unique elements
}

int main()
{
    vector<int> nums = {1, 2, 2, 3, 4, 4, 5};
    vector<int> result = removeDuplicates(nums);

    for(int i =0;i<result;++i)
    {
        cout<<nums[i]<<" ";
    }

    return 0;
}


