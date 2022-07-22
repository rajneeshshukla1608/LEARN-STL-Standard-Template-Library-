#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(10);
    s.insert(15);
    cout << s.size() << "\n";
    cout << s.count(10) << "\n";
    cout << s.count(34) << "\n";
    cout << s.count(15) << "\n";

    s.erase(10);

    cout << s.count(10) << "\n";
    s.insert(10);
    cout << s.count(10) << "\n";
    //Random access is not allowed in the set
    s.clear(); // erase all the elements 
}