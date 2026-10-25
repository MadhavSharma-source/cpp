#include<iostream>
using namespace std;
class Time{
    int hours;
    int minutes;
    public:
        void read(int h,int min){
            hours=h;
            minutes=min;
        }
        void display(){
            cout<<"hours: "<<hours<<endl;
            cout<<"minutes: "<<minutes<<endl;
        }
        void compute(Time t1,Time t2){
            int h=(t1.minutes+t2.minutes)/60;
            minutes=(t1.minutes+t2.minutes)%60;
            hours=t1.hours+t2.hours+h;
        }
};
int main(){
    Time t1,t2,t3;
    t1.read(5,50);
    cout<<"T1:"<<endl;
    t1.display();
    t2.read(6,30);
    cout<<"T2:"<<endl;
    t2.display();
    t3.compute(t1,t2);
    cout<<"T3:"<<endl;
    t3.display();
    return 0;
}