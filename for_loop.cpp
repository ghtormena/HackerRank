#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    int b; 
    cin>>a>>b;
    for (int n=a; n<=b; n++){
        if (n>9 && n%2==0){
            cout<<"even"<<endl;
        }
        else if(n>9 && n%2!=0){
            cout<<"odd"<<endl;
        }
        else if (n==9){
            cout<<"nine"<<endl;
        }
        else if (n==8){
            cout<<"eight"<<endl;
        }
        else if (n==7){
            cout<<"seven"<<endl;}
            
        else if (n==6){
            cout<<"six"<<endl;}
        else if (n==5){
            cout<<"five"<<endl;}
        else if (n==4){
            cout<<"four"<<endl;}
        else if (n==3){
            cout<<"three"<<endl;}
        else if (n==2){
            cout<<"two"<<endl;}
        else if (n==1){
            cout<<"one"<<endl;}    
        }
    return 0;
}