#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {

        for(int i=0; i<arr.size(); i++){
            if(arr[i] == k){
                return true;
                break;    
            }
        }
        return false;
    }
};

int main(void) {

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

        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        cout << (ob.searchInSorted(arr, k) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}