#include<iostream>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    char ch = 'A';
    for ( i = n; i >= 0; i--){
        for ( j = 0; j < i; j++){
            cout << char(ch + j) << " ";
        }
        cout << endl;
    }
}