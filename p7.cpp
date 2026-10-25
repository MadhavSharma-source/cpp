#include<iostream>
#include<string.h>
using namespace std;
class String{
    int length;
    char *name;
    public:
        String() {} 
        String(const char s[]){//use const if there is an error else use char s[]
            length=strlen(s);
            name=new char[length+1];
            strcpy(name,s);
        }
        void join(String s1,String s2){
            length=s1.length+s2.length;
            name=new char[length+1];
            strcpy(name,s1.name);
            strcat(name,s2.name);
        }
        void display(){
            cout<<"name: "<<name<<endl;
        }
};
int main(){
    String s1("Wel");
    cout<<"S1: "<<endl;
    s1.display();
    String s2("fare");
    cout<<"S2: "<<endl;
    s2.display();
    String s3;
    s3.join(s1,s2);
    cout<<"S3: "<<endl;
    s3.display();
    String s4("come");
    cout<<"S4: "<<endl;
    s4.display();
    String s5; 
    s5.join(s1,s4);
    cout<<"S5: "<<endl;
    s5.display();
    String s6("done");
    cout<<"S6: "<<endl;
    s6.display();
    String s7;
    s7.join(s1,s6);
    cout<<"S7: "<<endl;
    s7.display();
    return 0;
}