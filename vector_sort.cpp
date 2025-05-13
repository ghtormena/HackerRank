#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin>>size;
    vector<int>v;
    int x;
    for(int i=0; i<size; i++){
        cin>>x;
        v.push_back(x);
    }   
    sort(v.begin(), v.end());
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
