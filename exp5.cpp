// Kshitij Sinha
// 23/CS/225, A4
// Take the average of five numbers from two classes using a friend function

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

class fun2;
class fun1{
    public:
    double a,b,c;
    fun1(double ,double, double);
    
    void show(){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    friend double avg(double, double,double, double, double);
};

fun1::fun1(double x, double y, double z){
    a=x, b=y, c=z;
}

class fun2{
    
    public:
    double d,e;
    fun2(double , double);
    
    void show(){
        cout<<d<<" "<<e<<endl;
    }
    friend double avg(double, double, double, double, double);
};

fun2::fun2(double x, double y){
    d=x, e=y;
}


double avg(fun1 aa, fun2 bb){
    double ans=aa.a+aa.b+aa.c+bb.d+bb.e;
    ans/=5.0;
    return ans;
}

int main(){
    cout<<"Enter five numbers: "<<endl;
    double q,w,e,r,t;
    cin>>q>>w>>e>>r>>t;
    fun1 aa(q,w,e);
    fun2 bb(e,r);
    cout<<"Average is : "<<avg(aa, bb)<<endl;
}