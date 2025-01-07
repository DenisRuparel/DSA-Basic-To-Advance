#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int pairWithMaxSum(vector<int> &arr) {
    
        int maxSum = INT_MIN;
        for (int i = 1; i < arr.size(); i++) 
            maxSum = max(maxSum, arr[i] + arr[i - 1]);
        return maxSum;
    }
};

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.pairWithMaxSum(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}