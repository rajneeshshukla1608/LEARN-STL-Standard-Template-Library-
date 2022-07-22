#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m;

    cout << m.size();

    cout << m[15]; //instantly crete the element the size will be zero and the ellement will be zero

    cout << m.size()<<"\n";

    m[10] = 45;
    m[26] = 56;

    map<int, int> freq;

    cout << m[10]<< "\n";
    freq[10]++;
    freq[10]++;
    freq[10]++;
    freq[10]++;
    freq[10]++;

    freq[45]++;
    cout << freq[10]<<" "<<freq[45];
    cout << "\n";

}