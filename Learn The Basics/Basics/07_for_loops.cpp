#include<iostream>
using namespace std;
int main(){
    int sum=0, i;
    for(i=1; i<=100; i++){
        sum = sum + i;
    }
    cout<<"Sum of first 100 natural numbers is "<<sum;
}