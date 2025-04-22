#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> matriz(n);

    for (int i = 0; i < n; i++) {
        int tam;
        cin >> tam;
        matriz[i].resize(tam);

        for (int j = 0; j < tam; j++) {
            int valor;
            cin >> valor;
            matriz[i][j] = valor;
        }
    }

    for (int i = 0; i < q; i++) {
        int gaveta, pos;
        cin >> gaveta >> pos;
        cout << matriz[gaveta][pos] << endl;
    }

    return 0;
}