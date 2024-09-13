#include <bits/stdc++.h>
using namespace std;

void demoOfVectors() {
    // declaration of vector
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100);  // Vector with 5 elements, each initialized to 100

    vector<int> v2(5);  // Vector with 5 elements, each initialized to 0

    vector<int> v3(5, 20);  // Vector with 5 elements, each initialized to 20
    vector<int> v4(v3);  // Copy of v3

    // access the vector elements
    vector<int>::iterator it = v.begin();

    it++;
    if (it != v.end()) {
        cout << *(it) << " ";
    }

    if (it + 2 < v.end()) {
        it += 2;
        cout << *(it) << " ";
    }

    // v.end(), v.rend(), and v.rbegin() can be used when needed but don't need to be assigned to a variable here.

    // printing the vector
    if (!v.empty()) {
        cout << v[0] << " " << v.at(0) << " ";
        cout << v.back() << " ";
    }

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    // printing using auto
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    // printing using auto but with for each loop
    for (auto it : v) {
        cout << it << " ";
    }

    // deletion in a vector for single element
    // {10, 20, 12, 23}
    if (v.size() > 1) {
        v.erase(v.begin() + 1);
    }

    // deletion in a vector for multiple elements
    // {10, 20, 12, 23, 35}
    if (v.size() > 4) {
        v.erase(v.begin() + 2, v.begin() + 4);
    }

    // insert function
    vector<int> v5(2, 100);  // {100, 100}
    v5.insert(v5.begin(), 300);  // {300, 100, 100}
    v5.insert(v5.begin() + 1, 2, 10);  // {300, 10, 10, 100, 100}

    // copy
    vector<int> copy(2, 50);  //    {50, 50}
    v.insert(v5.begin(), copy.begin(), copy.end()); //  {50, 50, 300, 10, 10, 100, 100}

    //  {10, 20}
    // cout << v.size() << endl;  // 2

    //  {10, 20}
    // v.pop_back();   // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    // v1.swap(v2);         //  v1 -> {30, 40}, v2 -> {10, 20}

    v.clear();  //  erases the entire vector
     
    cout << v.empty();
}

int main() {
    demoOfVectors();
    return 0;
}