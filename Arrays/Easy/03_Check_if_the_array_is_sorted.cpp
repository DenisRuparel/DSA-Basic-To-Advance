#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int flag = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] < nums[i-1])
                flag++;
        }
        if(nums[nums.size()-1] > nums[0])
            flag++;
        return flag <= 1;
    }
};