#include <bits/stdc++.h>
using namespace std;
template <typename T> class ppair{
    protected:
    T x,y;
    public:
    ppair(T a, T b){
        x=a;
        y=b;
        cout<<"First Number is: "<<a<<endl;
        cout<<"Second number is: "<<b<<endl;
    }

    T get_max(){
        return (x>y?x:y);
    }
};

int main(){
    cout<<"Enter two numbers: "<<endl;
    int a,b;
    cin>>a>>b;
    ppair p1(a,b);
    cout<<"Max is: "<<p1.get_max()<<endl;

    cout<<"Enter two strings: "<<endl;
    string c,d;
    cin>>c>>d;
    ppair p2(c,d);
    cout<<"Max is: "<<p2.get_max()<<endl;
}