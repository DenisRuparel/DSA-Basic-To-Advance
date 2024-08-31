#include<bits/stdc++.h>
using namespace std;

void demoOfVectors(){

    // declaration of vector

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v(5, 100);

    vector<int> v(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);


    // access the vector elements

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it += 2;
    cout << *(it) << " ";

    v.end();

    v.rend();

    v.rbegin();

    // vector<int>::iterator it = v.end();
    
    // vector<int>::iterator it = v.rend();

    // vector<int>::iterator it = v.rbegin();


    // printing the vector

    cout << v[0] << " " << v.at(0);

    cout << v.back() << " ";

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *(it) << " ";
        
    // printing using auto

    for(auto it = v.begin(); it != v.end(); it++)
        cout << *(it) << " ";
        
    // printing using auto but with for each loop 

    for(auto it : v)
        cout << it << " ";

    // deletion in a vector for single element

    // {10, 20, 12, 23}
    v.erase(v.begin() + 1);
    
    // deletion in a vector for multiple element

    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4);

    // insert function


}