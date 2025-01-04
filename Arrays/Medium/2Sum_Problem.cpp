#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int num : nums)
            cout << num << " ";
    }
};