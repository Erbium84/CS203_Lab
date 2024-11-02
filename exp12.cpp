#include <bits/stdc++.h>
using namespace std;
class c_polygon{
    public:
    virtual void area()=0;
};

class c_triangle{
    int a,b,c;
    public:
    void area(){
        float s=(a+b+c)/2;
        double area=sqrtl(s*(s-a)*(s-b)*(s-c));
        cout<<"Area is: "<<area<<endl;
    }
    c_triangle(){
        cout<<"Enter sides 1, 2, and 3"<<endl;
        int x,y,z;
        cin>>x>>y>>x;
        a=x;
        b=y;
        c=z;
    }
};