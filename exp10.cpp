#include<bits/stdc++.h>
using namespace std;
class person{
    protected:
    int id;
    string name;
    public:

    void show(){
        cout<<"Id is :"<<id<<" name is : "<<name<<endl;
    }
    
};

class admin: virtual public person{
    public:
    void update(){
        int idd;
        string namee;
        cout<<"Enter updated id and name: "<<endl;
        cout<<"Enter id: ";
        cin>>idd;
        cout<<"Enter name :";
        cin>>namee;
        id=idd;
        name=namee;
        show();
    }
};

class account: virtual public person{
    public:
    void create(){
        int idd;
        string namee;
        cout<<"Enter new id and name: "<<endl;
        cout<<"Enter id: ";
        cin>>idd;
        cout<<"Enter name :";
        cin>>namee;
        id=idd;
        name=namee;

        show();
        
    }
};

class master: public account, public admin{
    public:
    master(){
        create();
        update();
    }
};

int main(){
    master m1;
}