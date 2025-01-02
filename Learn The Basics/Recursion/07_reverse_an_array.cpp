#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:   
    void reverseArray(vector<int> &arr) {
        vector<int> ans(arr.size());
        for(int i=arr.size()-1; i>=0; i--){
            ans[arr.size()-i-1] = arr[i];
        }
        arr = ans;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}