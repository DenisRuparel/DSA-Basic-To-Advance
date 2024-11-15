#include<bits/stdc++.h>
using namespace std;
void prin1To10(int cnt){
    if (cnt == 11)
        return;
    cout << cnt << endl;
    cnt++;
    prin1To10(cnt);
}
int main(){
    prin1To10(1);
}