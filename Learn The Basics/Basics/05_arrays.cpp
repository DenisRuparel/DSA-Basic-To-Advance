#include<iostream>
using namespace std;
int main(){
    int arr[10], i,j,n;
    cout << "Enter Number Of Elements: ";
    cin >> n;
    cout << "Enter Elements: ";
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}