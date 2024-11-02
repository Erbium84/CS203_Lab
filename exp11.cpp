#include <bits/stdc++.h>
using namespace std;
class pntr_obj{
    protected:
        int roll_no;
        string name;
    public:
    void set_data(){
        int x;
        string y;
        cout<<"Enter the roll number : ";
        cin>>x;
        cout<<"Enter the name: ";
        cin>>y;
        this->roll_no=x;
        this->name=y;
    }
    void print(){
        cout<<"The roll number is: "<<this->roll_no;
        cout<<endl;
        cout<<"The name is : "<<this->name;
        cout<<endl;
    }
    pntr_obj(){
        set_data();
        print();
    }
};

int main(){
    pntr_obj p1, p2, p3;
}