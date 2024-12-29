#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // int max=0, max2=-1;
        // for(int i=0; i<arr.size(); i++){
        //     if(arr[i] > max)
        //         max=arr[i];
        // }
        // for(int i=0; i<arr.size(); i++){
        //     if(arr[i] > max2 && arr[i] != max)
        //         max2=arr[i];
        // }
        // return max2;
        
        int max=arr[0], max2=-1;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] > max){
                max2=max;
                max=arr[i];
            }
            else if(arr[i] > max2 && arr[i] != max)
                max2=arr[i];
        }
        return max2;
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
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}