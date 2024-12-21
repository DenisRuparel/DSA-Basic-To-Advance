#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printNos(int n) {
        if(n>0){
            cout << n << " ";
            printNos(n-1);
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