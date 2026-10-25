#include<iostream>
using namespace std;
class Employee{
    int eno;
    char name[50];
    int salary;
    public:
        void read(){
            cout<<"Enter Employee Number: ";
            cin>>eno;
            cout<<"Enter Employee Name: ";
            cin>>name;
            cout<<"Enter Employee salary: ";
            cin>>salary;
        }
        void print(){
            cout<<"Employee Number: "<<eno<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};
int main(){
    int n;
    cout<<"Enter the total number of Employees: "<<endl;
    cin>>n;
    Employee e[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter Employee "<<i+1<<" details"<<endl;
        e[i].read();
    }
    for(int i=0;i<n;i++){
        cout<<"\n"<<i+1<<" Employee  details"<<endl;
        e[i].print();
    }
    return 0;
}