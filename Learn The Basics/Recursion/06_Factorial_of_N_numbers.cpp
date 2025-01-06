#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void factorial(long long fact, long long i, long long n, vector<long long>& ans) {
        if (fact > n) 
            return;  

        ans.push_back(fact);  
        factorial(fact * (i + 1), i + 1, n, ans); 
    }

    vector<long long> factorialNumbers(long long n) {
        vector<long long> ans;
        factorial(1, 1, n, ans); 
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}