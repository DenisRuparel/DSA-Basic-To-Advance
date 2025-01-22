#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> temp;
        int maxi = INT_MIN;
        for(int i=arr.size()-1; i>=0; i--){
            if(arr[i] >= maxi)
                temp.push_back(arr[i]);
            maxi = max(maxi,arr[i]);
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
};

int main() {
    int t; 
    cin >> t;
    cin.ignore(); 
    while (t--) {
        vector<int> a;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        vector<int> result = obj.leaders(a);

        if (result.empty()) {
            cout << "[]"; 
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}