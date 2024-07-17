#include<iostream>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    for ( i = 0; i < n; i++){
    char ch = 'A';
        for ( j = 0; j <= i; j++){
            cout << char(ch + i) << " ";
        }
        cout << endl;
    }
}