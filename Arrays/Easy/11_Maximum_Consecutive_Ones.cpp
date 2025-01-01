#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum=0, counter=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                counter++;
                maximum = max(maximum, counter);
            }
            else{
                counter=0;
            }
        }
        return maximum;
    }
};