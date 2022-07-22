#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {5, 4, 1, 2};
    sort(arr, arr + 3); //This will sort only 3 elements fro the begining
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i];
    }
    //The method to sort the vector;

    vector<int> v = {5, 4, 1, 2};
    sort(v.begin(), v.end());
    for (int i = 0; i < 4; i++)
    {
        cout<<"\n"<<v[i];
    }
    //Similarly as above we can sort the strings also;


    return 0;
}