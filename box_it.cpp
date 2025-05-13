#include <iostream>
using namespace std;

class Box{
    private:
        int l;
        int b;
        int h;
    public:
        Box(int lenght = 0, int breadth = 0, int height = 0){
            l = lenght;
            b = breadth;
            h = height;
        }
        
        int getLenght(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return l*b*h;
        }
        bool operator<(Box& B){
            if (l<B.l) return true;
            if (b<B.l && l==B.l) return true;
            if (h<B.h && b==B.b && l==B.l) return true;
            return false;
        };
         friend ostream& operator<<(ostream& out, Box& B);
};

ostream& operator<<(ostream& out, Box& B){
    out<<B.l<<" "<<B.b<<" "<<B.h;
    return out;
}