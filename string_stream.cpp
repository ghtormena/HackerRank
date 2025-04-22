#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> integers;
    stringstream ss(str);
    int num;
    char c;
    int i=0;
    while(ss>>num){//retorna falso se nao tiver nada
        integers.push_back(num);
        i++;
        ss>>c;
    }
    return integers;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}