#include<iostream>
using namespace std;
int main(){
    int n, i, j;
    char ch = 'A';
    cin >> n;
    for ( i = 0; i <= n; i++){
        for ( j = 0; j < i; j++){
            cout << char(ch + j);
        }
        cout << endl;
    }
}