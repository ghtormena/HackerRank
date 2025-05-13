#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin>>N;
    vector<int>v;
    int x;
    for(int i=0; i<N; i++){
        cin>>x;
        v.push_back(x);
    } 
    int position_to_remove;
    cin>>position_to_remove;
    v.erase(v.begin()+position_to_remove-1);
    int a;
    int b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    int size = v.size();
    cout<<size<<endl;
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
