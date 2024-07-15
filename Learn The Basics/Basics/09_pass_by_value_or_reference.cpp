#include<iostream>
using namespace std;

// Pass By Value:
void doSomething(int n){
    cout << n << endl;
    n += 5;
    cout << n << endl;
    n += 5;
    cout << n << endl;
}

// Pass by Reference:
void doSomething2(string &str){
    str[0] = 'N';
    cout << str << endl;
}

int main(){
    int n;
    string str;

    cout << "Enter Number: ";
    cin >> n;    
    
    cout << "Enter String: ";
    cin >> str;
    
    cout << "Pass By Value: ";
    doSomething(n);
    
    cout << "Pass By Reference: ";
    doSomething2(str);
    cout << str << endl;
}