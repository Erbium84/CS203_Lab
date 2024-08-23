// Kshitij Sinha
// 23/CS/225, A4
// Create a student class; ask the user for name and marks, create friend function to show average, get_data() and display() in class


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'


class student{
    public:
    int m1,m2,m3;
    string name;
    void get_data(){
        cout<<"Enter Name: "<<endl;
        string s;
        cin>>s;
        name=s;
        int a,b,c;
        cout<<"Enter marks: "<<endl;
        cin>>a>>b>>c;
        m1=a;
        m2=b;
        m3=c;
    }
    void display(){
        cout<<"Name is: "<<endl;
        cout<<name<<endl;
        cout<<"Marks are: "<<endl;
        cout<<m1<<" "<<m2<<" "<<m3;
    }
    friend void avg(student);
};

void avg(student s){
    int avg=s.m1+s.m2+s.m3;
    avg/=3;
    cout<<"Average is: "<<avg<<endl;
}
int main(){
    student s;
    s.get_data();
    avg(s);
    s.display();
}