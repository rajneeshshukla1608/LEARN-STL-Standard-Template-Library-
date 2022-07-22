// C++ STL which is an standard tenmplate library 

/*
It contains of 4 things -
1. STL Algorithms
2. STL Functions
3. STL Iteartors
4. STL Containers
*/

#include<bits/stdc++.h>
using namespace std;

//**********STL Iteartors, STL Containers***********
void implementpairs() {  // Pairs are treated as datatype and it lies in the utility libraries;
    pair<int, int> p1 = {1, 2};
    cout <<  p.second << p.first;

    pair<int, int> p2;
    cin >> p2;
    cout << p2.first << p2.second;

    pair<int, pair<int, int>> p3 = {1,{3, 2}}; // to store 3 values like {1,{3, 2}};
    cout << p3.second.second << p3.first << p3.second.first; // so so forth

    pair<int, int> arr[2] = {{1, 3}, {2, 3}};    // array with the pairs this is going to work as  [0] - {1, 3}
                              //                                              [1] - {2, 3}
    cout << arr[0].second << arr[0].first; // etc;
    cout << arr[1].second << arr[1].first; // etc;

}


void implementVectors() { // vectors are the containers and it has multiple functions it also stores the values in the contiguous manner

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // as same as pussh_back();

    vector<int> v(5, 100); // [100, 100, 100, 100, 100]

    vector<int> v(5) // create 5 empty empty sapces in vector

    vector<int> v2(v) // this will copy the vector v in the v2 as same as

    //iterator in vector
    vector<int> :: iterator it = v.begin(); // this will create a iterator and place it begin remember this will point to the address of the beginning element no to the element index
    it++;
    cout << *(it) << " "; // this will go to the address of the it and prin it

    it = it + 2; // increses its iterator by 2
    cout << *(it) << " ";

    vector<int> :: iterator it = v.end();  // poin to the end
    vector<int> :: iterator it = v.rend();   // point it to the end and then reverse it
    vector<int> :: iterator it = v.rbegin();  // returns a reverse iterator which points to the last element 

     cout << v[0] << " " << v.at(0); // both  are the same things

    cout << v.back() << " "; // this will print the one element from back

    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for(auto it : v) {   // one of the method to print the element from the vector
        cout << it << " ";
    }

    v.erase(v.begin() + 1); // erase element from beginning + 1 not the beginning element;

    //{10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4) //{10, 20, 35} [start, end]

    //Insert function in vector
    vector<int> v5(2, 100); // {100, 100}
    v5.insert(v.begin(), 300); //{300, 100, 100}

    vector<int> v10(2, 50) ; // {50, 50}
    v.insert(v.begin(), v5.begin(), v5.end());

    cout << v.size();

    v.pop_back(); // pop the element from the end;

    //v1 = {10, 20} 
    //v2 = {30, 40} 
    v1.swap(v2); // v1-> {30, 40}, v2->{10, 20}

    v.clear(); //erases the wholedata
    cout << v.empty();

}

void explainList() {
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(3); // {2, 4}

    ls.push_front(5); // {5, 2, 4};
    ls.emplace_front(); //{2, 4}

    //rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

}

void explainDeque() {
    deque<int,int> dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3) // {3, 4, 1, 2}

    dq.pop_back();
    dq.pop_front();

    dq.back();

    dq.front();

    //rest function same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap

}

void explainStack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    st.emplace(5);
    cout << st.top();
    st.pop();

    cout << st.top();

    cout << st.size();

    cout << st.empty(); //it return sboolean

    stack<int> st1, st2;
    st1.swap(st2); 

}


void explainQueue() {
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1, 2}
    q.emplace(4)

    q.back() += 5;

    cout << q.back(); //returns the element at rear

    cout << q.front();

    q.pop();  //this will delete the element from the queue so on so forth

    cout << q.front(); //return the element at frony

}


void explainPriorityQueue() {
    priority_queue<int> pq;

    pq.push(5); //{5}
    pq.push(2); //{5, 2}
    pq.push(8); //{8,5,2} because priority queue gives priority to the higheset number
    pq.emplace(10); //{10, 8,5,2}

    cout << pq.top(); //prints 10

    pq.pop(); //{8, 5, 2}
    cout << pq.top(); //prints 8

    // size, sap, empty , functions are same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq2; // this will give the priority order from the least to heighest
    pq2.push(5);  //{5} 
    pq2.push(5);  //{2, 5} 
    pq2.push(5);  //{2, 5, 8}
    pq2.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); //prints 2 becase lleast is on top

}

// the set container store the values in the {sorted} and {unique}

void explainSet()  {
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); //{1, 2}
    st.insert(2); //{1,2} this will not store the 2 again because 2 has already there and the value should be uniquie and sorted
    st.insert(4); ///{1, 2, 4}
    st.insert(3); //{1, 2, 3, 4}

    //functionality of insert in vector can be used also that increases the efficiency

    // begin() , end(), rbegin(), rend(), size(), empty(), swap(), are same as the above

    //{1, 2, 3, 4}
    auto it = st.find(3);

    //{1, 2, 3, 4, 5}
    auto it = st.find(6);

    //{1, 4, 5}
    st.erase(5) // this will erase 5 and will take thr logarithimic time

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it); // it always takes the constant time to don the operation

    //lower_bound() and upper_bound() function works in the same way as in vector it does

    //this is the syntax
    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);

}

void explain multiSet() { // the multiset always obeys sorted not unique
//everything as same as set
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); //all 1's erased

    int cnt = ms.count(1);

    //only a single one is erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1) + 2);

    // rest all the functions are same as set

}

void explainUnorderedSet() { //it store the unique element not sorted time complexity O(1)
    unordered_set<int> us;
    /* lower_bound and upper_bound function
       does not works, rest all functions are same
       as above, it does't store in any particular order it has better complexity
       than set in most cases, excepet some when collison happens
    */
}


void ExplainMap() { // it is kind of the key value pairs {key, value} with unique keys in sorted order

    map<int, int> mp;

    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int> mppp;

    mp[1] = 3;

    mp.emplace({3, 1});

    mp.insert({2, 4});

    mpp[{2, 3}] = 10;

    for(auto it : mp){
        cout << it.first << it.second << endl;
    }

    cout << mp[1];
    cout << mp[5];

    auto it = mp.find(3);
    cout << *(it).second;

    auto it = mppp.find(5);

    // this is the below syntax for the lower bound and upper bound
    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    // simlilarly erase, swap , size, empty, are same as here


}


void ExplainMultimap() {
    //everything same as map in this you can store duplicate keys in sorted order
    //only mpp[keys] can not use her
}

void ExplainUnorderedMap() {
    //it is not sorted and it has uniqui keys
    //and everthing is as same
}


//**********Algorithms**********

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) {
        return true; 
    } else if (p1.second == p2.second) {
        if(p1.first > p2.second) return true;
    }
    return false;
}


void ExplainAlgorithms() {
    vector<int> v = {1, 6, 3};
    sort(a, a + n); // n = size of the array or vectors a = starting index and a + n means starting index + size of the array
    sort(v.begin(), v.end()); //this function is used to sort the vectors

    sort(a, a + n, greater<int>) // it sorts the array in the descending order 

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    //sort it according to the second element
    // if second element is same, than sort
    //if according to first element in descending

    sort(a, a + n, comp); //here comp stands for the comparator 

    //{4, 1}, {2, 1}, {1, 2}

    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 175684375684;
    int cnt = __builtin_popcount();

    string s = "124";
    do{
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int max = *max_element(a, a + n);


}

int main() {
    
    return 0;
}