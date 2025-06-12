#include <iostream>

using namespace std;

class Triangulo {
private:
public: 
   void triangulo(){
    cout << "Eu sou um triangulo" << endl;
   }
};
class TrianguloIsosceles : public Triangulo {
private:
public:
   void trianguloIsosceles(){
    cout << "Eu sou um triangulo isosceles" << endl;
   }
};
int main(){
    TrianguloIsosceles isc;
    isc.triangulo();
    isc.trianguloIsosceles();
    return 0;
}