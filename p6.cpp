#include<iostream>
using namespace std;
class Sample{
    int i;
    char c;
    double d;
    public:
        Sample(){
            i=0;
            c='\0';
            d=0.0;
        }
        Sample(int x,char y,double z){
            i=x;
            c=y;
            d=z;
        }
        Sample(Sample &s){
            i=s.i;
            c=s.c;
            d=s.d;
        }
        Sample(int x,double z,char y='c'){
            i=x;
            c=y;
            d=z;
        }
        void print(){
            cout<<"i="<<i<<endl;
            cout<<"c="<<c<<endl;
            cout<<"d="<<d<<endl;
        }
};
int main(){
    Sample s1;
    cout<<"S1: "<<endl;
    s1.print();
    Sample s2(5,'d',8.8);
    cout<<"S2: "<<endl;
    s2.print();
    Sample s3(s2);
    cout<<"S3: "<<endl;
    s3.print();
    Sample s4(4,8.9);
    cout<<"S4: "<<endl;
    s4.print();
    return 0;
}