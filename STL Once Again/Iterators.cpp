#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {10, 15 ,12, 5, 20};
    // vector<int>::iterator it = v.begin();
    // OR
    auto it = v.begin();
    cout << *it;
    it++;
    cout << *it;
    it--;
    cout << *it;
    // cout << *it(it + 3);
    // As normally we do
    int a[5] = {10, 15, 12, 5, 20};
    int *p = a;
    cout << *p;
    p++;
    cout << *p;

    // cout << *p(p + 3);

}