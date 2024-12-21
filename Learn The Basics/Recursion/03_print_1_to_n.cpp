#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printNos(int n) {
        if(n>=1){
            printNos(n-1);
            cout << n << " ";
        }
        return;
    }
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        Solution ob;
        ob.printNos(N);
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}