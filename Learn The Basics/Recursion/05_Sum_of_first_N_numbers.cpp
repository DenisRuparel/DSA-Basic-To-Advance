#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int sumOfSeries(int n) {
        int cube = n*n*n;
        if(n < 1)
            return 0;
        return cube += sumOfSeries(n-1);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";

        cout << "~"
             << "\n";
    }
}