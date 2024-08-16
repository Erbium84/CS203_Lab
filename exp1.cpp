// Kshitij Sinha
// 23/CS/225, A4
// Aim: Write a C++ Program to print your personal details; name, surname (single char), total marks, gender(M/F), result(P/F) by taking input from the user
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
class info{
    public:
        string name;
        char surname;
        int marks;
        char gender;
        char result;
    info(){
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter surname"<<endl;
        cin>>surname;
        cout<<"Enter marks"<<endl;
        cin>>marks;
        cout<<"Enter gender"<<endl;
        cin>>gender;
        cout<<"Name and surname: "<<name<<" "<<surname<<endl;
        if(marks>33) result='P';
        else result='F';
        cout<<"result: "<<result<<endl;
    }
};
int main(){
    info s1;
}
