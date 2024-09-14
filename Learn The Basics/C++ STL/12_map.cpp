#include <bits/stdc++.h>
using namespace std;

void demoOfMap() {
    map<int, int> mpp;

    // map<int, pair<int, int>> mpp;

    // map <pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.insert({2, 4});
    mpp.emplace(3, 1);
    // Assuming you want to add pairs with map<int, int>, you can only add single key-value pairs.
    // For mpp[{2, 3}] = 10;, you would need a different type of map like map<pair<int, int>, int>.

    // Printing elements of the map
    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // Accessing elements
    cout << mpp[1] << endl;  // Should print 2
    cout << mpp[5] << endl;  // Should print 0, as it does not exist

    // Finding an element
    auto it = mpp.find(3);
    if (it != mpp.end()) {
        cout << it->second << endl; // Should print 1
    }

    // Finding an element that does not exist
    it = mpp.find(5);
    if (it == mpp.end()) {
        cout << "Element not found" << endl;
    }

    // syntex:
    // auto it = mpp.lower_bound(2);
    // auto it = mpp.upper_bound(3);

    // erase, swap, size, empty are same as above
}

void demoOfMultiMap(){
    // everything same as map, only it can store multiple keys only mpp[key] can't be used here
}

void demoOfUnOrderedMap(){
    // same as set and unordered_set difference
}

int main() {
    demoOfMap();
    demoOfMultiMap();
    demoOfUnOrderedMap();
    return 0;
}
