#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    return false; 
}

void demoOfSorting() {
    vector<int, int> v;

    int arr[5], n;  // e.x. {1, 5, 4, 2, 3}
    sort(arr, arr + n); // first arg is for 1st ele. or 2nd for array + size of the array
    
    sort(v.begin(), v.end()); // for vector

    sort(arr + 2, arr + 4); // for sort specific portion of array

    sort(arr, arr + n, greater<int>()); // for sorting in decending order

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    
    // sort it according to 2nd element if 2nd element is same, then sort
    // it according to 1st element but in descending

    sort(a, a+n, comp);

    // {{4, 1}, {2, 1}, {1, 2}}

    int num =  7;
    int cnt = __builtin_popcount(num);
    
    long long ll =  16514387316731;
    int cnt = __builtin_popcountll(ll);

    string s = "123";
    sort(s.begin(), s.end());
    do{
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    
    int max = *max_element(arr, arr + n);
}

int main() {
    demoOfSorting();
    return 0;
}