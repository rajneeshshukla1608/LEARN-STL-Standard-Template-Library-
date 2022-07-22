#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    cout << v.size() << "\n"; // this will print the size of the vector;

    v.push_back(2); // Insert the element from the last
    v.push_back(3);
    v.push_back(4);

    cout << v[0] << " " << v[1] << " "<< v[2] << "\n";

    v.pop_back(); // This will pop the element from the last;

    cout << v.size() << "\n"; 

    cout << v[0] << " " << v[1] << "\n";

    v.cler(a);

    cout<<v.size();
    vector<int> v(50); // vector of size 50
    vector<int> v(10, 2); // this will put 2 of 10 times and the size will be 10;
    vector<char> v(10, 'j'); // can also store charcter

    

}