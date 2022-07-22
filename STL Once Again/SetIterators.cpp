#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(23);
    s.insert(78);
    s.insert(67);
    s.insert(45);

    cout << *s.begin() << "\n";

    s.erase(s.begin()); // erase the smallest element into the set;


    auto it = s.begin(); 
    cout << *it;

    s.insert(-1);
//  it++, it--, ++it, --it -> these are all valid and work in O(logN) time;
    // Note -> it(it + 5) or it +=2 etc are invalid to advance multiples steps to do it++ multiple times
    

}