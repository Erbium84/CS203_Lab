#include <bits/stdc++.h>
using namespace std;
class employee{
    protected:
    int salary;
};

class faculty: public employee{
    protected:
    string course;
    public:
    faculty(){
        cout<<"Enter salary for new faculty: ";
        int x;
        cin>>x;
        cout<<"Enter course by faculty: ";
        string s;
        cin>>s;
        salary=x;
        course=s;
    }

    void show(){
        cout<<"Salary and course of faculty are: ";
        cout<<salary<<" "<<course<<endl;
    }
};

class staff: public employee{
    protected:
    string dept;
    public:
    staff(){
        cout<<"Enter salary for new staff: ";
        int x;
        cin>>x;
        cout<<"Enter dept of staff: ";
        string s;
        cin>>s;
        salary=x;
        dept=s;
    }

    void show(){
        cout<<"Salary and dept of staff are: ";
        cout<<salary<<" "<<dept<<endl;
    }
};

int main(){
    faculty f1;
    f1.show();
    staff s1;
    s1.show();
}