#include<iostream>

using namespace std;

class Complex {
    public:
        int a, b;
    
        void input(string s) {
            int v1 = 0, i = 0;
            while (s[i] != '+') {
                v1 = v1 * 10 + (s[i] - '0');
                i++;
            }
            i += 2;
            int v2 = 0;
            while (i < s.length()) {
                v2 = v2 * 10 + (s[i] - '0');
                i++;
            }
            a = v1;
            b = v2;
        }
    
        Complex operator+(const Complex& other) {
            Complex res;
            res.a = this->a + other.a;
            res.b = this->b + other.b;
            return res;
        }
    
        friend ostream& operator<<(ostream& os, const Complex& c) {
            os << c.a << "+i" << c.b;
            return os;
        }
    };
    
    int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
