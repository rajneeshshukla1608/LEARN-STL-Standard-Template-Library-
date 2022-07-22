#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<int> E;
    vector<int> O;
    for (int i = 0; i < n; i++)
    {
        if(v[i] % 2 == 0){
            E.push_back(v[i]);
        } else {
            O.push_back(v[i]);
        }
    }
    
    sort(E.begin(), E.end());
    sort(O.begin(), O.end());

    for (int i = 0; i < E.size(); i++)
    {
        cout<<"Even are: "<<E[i]<<"\n";
    }

    for (int i = 0; i < O.size(); i++)
    {
        cout<<"Odd are: "<<O[i]<<"\n";
    }
    return 0;
    
}