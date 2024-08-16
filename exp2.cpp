#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
class Employee{
    public:

    int Empnumber;
    string Empname;

    void getdata(){
        int x; string s;
        cout<<"Enter Empnumber: "<<endl;
        cin>>x;
        cout<<"Enter Empname: "<<endl;
        cin>>s;
        Empnumber=x;
        Empname=s;
    }
    void display(){
        cout<<"Enter Empnumber: "<<Empnumber<<endl;
        cout<<"Enter Empname: "<<Empname<<endl;
    }
};

int main(){
    Employee emp[6];
    for(int i=0; i<6; i++){
        emp[i].getdata();
    }
    for(int i=0; i<6; i++){
        emp[i].display();
    }
    return 0;
}