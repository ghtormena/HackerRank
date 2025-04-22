#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin>>a;
    cin>>b;
    int len_a = a.size();
    int len_b = b.size();
    cout<<len_a<<" "<<len_b<<endl;
    cout<<a+b<<endl;
    char fl_a = a[0];
    char fl_b = b[0];
    a[0]=fl_b;
    b[0]=fl_a;
    cout<<a<<" "<<b<<endl;
    return 0;
}