// Kshitij Sinha
// 23/CS/225, A4
// Create a banking system using constructors and destructors and a show function

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
class bank{
    int amount=0, interest=0;
    public:
    bank(int, int);
    void show(){
        cout<<"Amount is "<<amount<<" and interest is "<<interest<<endl;
    }
    ~bank(){
        cout<<"Account destructed"<<endl;
    }
};

bank::bank(int a, int b){
    amount=a;
    interest=b;
}

int main(){
    int a,b;
    cout<<"Enter amount and interest: "<<endl;
    cin>>a>>b;
    bank s(a,b);
    s.show();
    
}