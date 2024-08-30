#include<iostream>
using namespace std;
int main(){
    int n, temp=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n-i; j++) {
            cout << "*";
        }
        for (int j = 0; j < temp; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n-i; j++) {
            cout << "*";
        }
        temp += 2;
        cout << endl;
    }
    temp = 2*n-2;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 0; j < temp; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        temp -= 2;
        cout << endl;
    }
}