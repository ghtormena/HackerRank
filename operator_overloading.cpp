#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <iostream>
#include <vector>

using namespace std;

class Matrix {
public:
    vector<vector<int>> a;

    // Overload do operador + para somar duas matrizes
    Matrix operator+(const Matrix& other) {
        Matrix result;

        for (int i = 0; i < a.size(); ++i) {
            vector<int> row;
            for (int j = 0; j < a[0].size(); ++j) {
                row.push_back(a[i][j] + other.a[i][j]);
            }
            result.a.push_back(row);
        }

        return result;
    }
};

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
