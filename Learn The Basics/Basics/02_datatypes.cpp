#include<iostream>
using namespace std;
int main(){
    int num;
    char ch;
    float f;
    double d;
    long l;
    
    string str;

    cout << "Enter Your Datatype: ";
    cin >> str;

    if (str == "integer")
        cout << sizeof(int);
    else if(str == "character")
        cout << sizeof(char);
    else if(str == "float")
        cout << sizeof(float);
    else if(str == "double")
        cout << sizeof(double);
    else if(str == "long")
        cout << sizeof(long);
}