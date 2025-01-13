#include <bits/stdc++.h>
using namespace std;

class MyStack {
  private:
    int arr[1000];
    int top;

  public:
    MyStack() { top = -1; }

    int pop();
    void push(int);
};

void MyStack ::push(int x) {
    if(top >= 999)
        cout << -1;
    top++;
    arr[top] = x;
}

int MyStack ::pop() {
    if(top < 0)
        return -1;
    int x = arr[top];
    top--;
    return x;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 
    while (T--) {
        MyStack *sq = new MyStack();
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        int n = nums.size();
        int i = 0;
        while (i < n) {
            int QueryType = nums[i++];
            if (QueryType == 1) {
                int a = nums[i++];
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << "\n~\n";
        delete sq;
    }
    return 0;
}