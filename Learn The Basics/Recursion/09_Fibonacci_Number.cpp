#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        int f=0, f1=1, f2=0;
        for(int i=1; i<=n; i++){
            f=f1;
            f1=f2;
            f2=f+f1;
        } 
        return f2;
    }
};