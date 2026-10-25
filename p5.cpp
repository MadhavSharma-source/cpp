#include<iostream>
using namespace std;
class COMPLEX{
    private:
        int real;
        int imag;
    public:
        void read();
        void print();
        friend COMPLEX ADD(int a,COMPLEX c2);
        friend COMPLEX ADD(COMPLEX c1,COMPLEX c2);
};
void COMPLEX::read(){
    cin>>real;
    cin>>imag;
}
void COMPLEX::print(){
    cout<<real<<"+"<<imag<<"i"<<endl;
}
COMPLEX ADD(int a,COMPLEX c2){
    COMPLEX temp;
    temp.real=a+c2.real;
    temp.imag=c2.imag;
    return temp;
}
COMPLEX ADD(COMPLEX c1,COMPLEX c2){
    COMPLEX temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}
int main(){
    COMPLEX c1,c2,c3,c4;
    int a;
    cout<<"Enter the first complex number: ";
    c1.read();
    cout<<"Enter the second complex number: ";
    c2.read();
    cout<<"Enter the number a: ";
    cin>>a;
    cout<<"1st complex number: ";
    c1.print();
    cout<<"2nd complex number: ";
    c2.print();
    c3=ADD(a,c2);
    cout<<"ADD(a,c2): ";
    c3.print();
    c4=ADD(c1,c2);
    cout<<"ADD(c1,c2): ";
    c4.print();
    return 0;
}