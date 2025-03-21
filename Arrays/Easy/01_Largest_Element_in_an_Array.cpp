#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        int max=0;
        for(int i=0; i<arr.size(); i++){
            if(max < arr[i])
                max = arr[i];
        }
        return max;
    }
};

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) 
            arr.push_back(num);

        Solution ob;
        cout << ob.largest(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}