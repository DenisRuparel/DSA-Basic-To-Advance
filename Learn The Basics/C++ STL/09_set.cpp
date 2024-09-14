#include <bits/stdc++.h>
using namespace std;

void demoOfSet() {
    // it stores unique data

    set<int> s;
    s.insert(1);    // {1}
    s.emplace(2);   // {1, 2}
    s.insert(2);    // {1, 2}
    s.insert(3);    // {1, 2, 4}
    s.insert(4);    // {1, 2, 3, 4}

    // Functionality of insert in vector can be use also, that only increases efficiency
    // begin(), end(), rbegin(), rend(), size(), empty() & swap() are same as those of above

    // e.x. {1, 2, 3, 4, 5}
    auto it = s.find(3);
    
    // e.x. {1, 2, 3, 4, 5}
    auto it1 = s.find(6);

    // e.x. {1, 4, 5}
    s.erase(5);     //erases 5 takes logarithmic time

    int cnt = s.count(1);

    auto it2 = s.find(3);
    s.erase(it2);       // it takes constant time

    // e.x. {1, 2, 3, 4, 5}
    auto it3 = s.find(2);    
    auto it4 = s.find(4);    
    s.erase(it3, it4);  // after erase {1, 4, 5} {first, last}

    // lower_bound() and upper_bound() function works in the same way in vector it does

    // syntex:
    // auto it5 = s.lower_bound(2);
    // auto it6 = s.upper_bound(3);
}

int main() {
    demoOfSet();
    return 0;
}