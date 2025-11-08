//intervals = [[1,3],[2,6],[8,10],[15,18]]
//[[1,6],[8,10],[15,18]]
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    // Step 1: Sort intervals by start time
    sort(intervals.begin(), intervals.end());
    
    vector<vector<int>> merged;
    
    for(int i = 0;i<len;++i)
        {
            if(res.empty() || res.back()[1] < intervals[i][0])
            {
                res.push_back({intervals[i]});
            }
            else{
                res.back()[1] = max(res.back()[1], intervals[i][1]);
            }
        }
        
    return merged;
}

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> result = merge(intervals);
    
    for (auto it : result) {
        cout << "[" << it[0] << "," << it[1] << "] ";
    }
    return 0;
}

