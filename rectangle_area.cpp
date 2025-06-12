#include <iostream>
using namespace std;

class Retangulo{
private:
    float largura;
    float altura;

public:
    Retangulo(float l, float a) : largura(l), altura(a) {}

    float calcularArea() {
        return largura * altura;
    }
};
int main() {
    float largura, altura;

    cout << "Digite a largura do retângulo: ";
    cin >> largura;
    cout << "Digite a altura do retângulo: ";
    cin >> altura;

    Retangulo retangulo(largura, altura);
    cout << "A área do retângulo é: " << retangulo.calcularArea() << endl;

    return 0;
}        