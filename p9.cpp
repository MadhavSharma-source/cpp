#include<iostream>
using namespace std;
class Complex{
    int real;
    float imag;

    public:
        void read(int r,float f){
            real=r;
            imag=f;
        }
        void display(){
            cout<<real<<"+i"<<imag<<endl;
        }
        Complex operator +(Complex c){
            Complex temp;
            temp.real=real+c.real;
            temp.imag=imag+c.imag;
            return temp;
        }
        Complex operator -(Complex c){
            Complex temp;
            temp.real=real-c.real;
            temp.imag=imag-c.imag;
            return temp;
        }
};
int main(){
    Complex c1,c2,c3,c4;
    c1.read(1,1.4);
    c2.read(3,3.2);
    cout<<"c1: ";
    c1.display();
    cout<<"c2: ";
    c2.display();
    c3=c1+c2;
    c4=c1-c2;
    cout<<"c3: ";
    c3.display();
    cout<<"c4: ";
    c4.display();
    return 0;
}