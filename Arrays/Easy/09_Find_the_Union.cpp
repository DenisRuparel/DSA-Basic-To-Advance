#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        
        set<int> s;
        for(int i = 0; i < a.size(); i++)
            s.insert(a[i]);
        
        for(int i = 0; i < b.size(); i++) 
            s.insert(b[i]);
        
        vector<int> result(s.begin(), s.end());
        
        return result;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) 
            a.push_back(number);

        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) 
            b.push_back(number);
        

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}