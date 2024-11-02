#include <bits/stdc++.h>
using namespace std;
#define sum(a, b) cout<<"sum is: "<<a+b<<endl
#define prod(a, b) cout<<"prod is: "<<a*b<<endl
#define diff(a, b) cout<<"Diff is: "<<a-b<<endl
#define quotient(a, b) cout<<"Quotient is: "<<a/b<<endl

inline void all_inline(int a, int b){
    cout<<"Sum is: "<<a+b<<endl;
    cout<<"Prod is: "<<a*b<<endl;
    cout<<"Diff is: "<<a-b<<endl;
    cout<<"Quotient is: "<<a/b<<endl;
    a=a+b;
}

void all_reference(int &a, int &b){
    cout<<"Sum is: "<<a+b<<endl;
    cout<<"Prod is: "<<a*b<<endl;
    cout<<"Diff is: "<<a-b<<endl;
    cout<<"Quotient is: "<<a/b<<endl;
    cout<<"Modifying a<- a+b"<<endl;
    a=a+b;
}

int main(){
    cout<<"enter two numbers: "<<endl;
    int x,y;
    cin>>x>>y;
    cout<<"Using macros"<<endl;
    sum(x,y);
    prod(x,y);
    diff(x,y);
    quotient(x,y);
    cout<<"Using inline function"<<endl;
    all_inline(x,y);
    cout<<"Value of a in main: "<<x<<endl;
    cout<<"Using reference: "<<endl;
    all_reference(x,y);
    cout<<"Value of a in main: "<<x<<endl;
}