/*
https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150
88. Merge Sorted Array

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

*/
#include <bits/stdc++.h>
using namespace std;

// Brute force: copy nums2 into nums1 and sort
void mergeBrute(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for (int i = 0; i < n; i++) {
        nums1[m + i] = nums2[i];  // copy nums2 into nums1
    }
    sort(nums1.begin(), nums1.end()); // sort everything here i can use bubble sort if interviewr ask to not use sort algo
}

// Optimized: two-pointer from the end (in-place)
void mergeOptimized(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int p1 = m - 1;       // last valid element of nums1
    int p2 = n - 1;       // last element of nums2
    int p = m + n - 1;    // last index of nums1

    while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] > nums2[p2]) {
            nums1[p] = nums1[p1];
            p1--;
        } else {
            nums1[p] = nums2[p2];
            p2--;
        }
        p--;
    }

    // if nums2 has leftover elements
    while (p2 >= 0) {
        nums1[p] = nums2[p2];
        p2--;
        p--;
    }
}

int main() {
    // Example input
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;

    cout << "Original nums1: ";
    for (int x : nums1) cout << x << " ";
    cout << "\n";

    // Brute force
    vector<int> nums1_brute = nums1; // copy for brute version
    mergeBrute(nums1_brute, m, nums2, n);
    cout << "After Brute Merge: ";
    for (int x : nums1_brute) cout << x << " ";
    cout << "\n";

    // Optimized
    vector<int> nums1_opt = nums1; // copy for optimized version
    mergeOptimized(nums1_opt, m, nums2, n);
    cout << "After Optimized Merge: ";
    for (int x : nums1_opt) cout << x << " ";
    cout << "\n";

    return 0;
}
