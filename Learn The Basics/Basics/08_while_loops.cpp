#include<iostream>
using namespace std;
int main(){
    int sum=0, i=1;
    while (i<=100){
        sum=sum+i;
        i++;
    }
    
    cout<<"Sum of first 100 natural numbers is "<<sum;
}