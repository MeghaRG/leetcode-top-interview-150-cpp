/*
https://leetcode.com/problems/summary-ranges/description/?envType=study-plan-v2&envId=top-interview-150
228. Summary Ranges

*/

#include <bits/stdc++.h>
using namespace std;
 
 vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result ;
        if (nums.empty()) return result; 
        int len = nums.size();
        int start = nums[0];
        for(int i =0; i<len; ++i)
        {
            if(i == len-1 || nums[i]+1 != nums[i+1])
            {
                if(start == nums[i])
                {
                    result.push_back(to_string(start));
                }
                else{
                    result.push_back(to_string(start)+"->"+to_string(nums[i]));
                }
                if(i+1<len)
                {
                    start = nums[i+1];
                }
            }
        }
        return result;
    }

    int main() {
    vector<int> nums = {0,1,2,4,5,7};
    vector<string> res = summaryRanges(nums);
    for (string s : res) cout << s << " ";
}