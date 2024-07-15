#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter Your Numbers: ";
    cin >> num1 >> num2;
    if (num1 > num2)
        cout << "num1 is Greater";
    else    
        cout << "num2 is Greater";
}