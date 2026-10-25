#include<iostream>
using namespace std;
class Student{
    protected: 
        char name[30];
        int age;
        int usn;
    public:
        void getStudent(){
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Age: ";
            cin>>age;
            cout<<"Enter USN: ";
            cin>>usn;
        }
};
class Medical:public Student{
    int year;
    public:
        void getMedical(){
            cout<<"Enter year: ";
            cin>>year;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"USN: "<<usn<<endl;
            cout<<"Year: "<<year<<endl;
        }
};    
class Engineering:public Student{
    char branch[30];
    public:
        void getEngineering(){
            cout<<"Enter Branch: ";
            cin>>branch;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"USN: "<<usn<<endl;
            cout<<"Branch: "<<branch<<endl;
        }
};
int main(){
    Medical m1;
    cout<<"Enter Medicla student details"<<endl;
    m1.getStudent();
    m1.getMedical();
    cout<<"\nMedical student details:"<<endl;
    m1.display();

    Engineering e1;
    cout<<"\nEnter Engineering student details"<<endl;
    e1.getStudent();
    e1.getEngineering();
    cout<<"\nEngineering student details:"<<endl;
    e1.display();
    return 0;
}