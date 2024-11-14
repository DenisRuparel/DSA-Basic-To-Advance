#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int dup = n, sum = 0, numDigits = to_string(n).length();
	while(n > 0){
		int ld = n % 10;
		sum += pow(ld, numDigits);
		n = n / 10;
	}
	if (sum == dup)
        cout << "true" << endl;
    else    
        cout << "false" << endl;
}