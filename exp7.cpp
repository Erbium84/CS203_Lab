// Kshitij Sinha
// 23/CS/225, A4
// Implement inline functions for addition, subtraction, multiplication, and division

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
class func{
    public:
    inline int mul(int a, int b){
        return a*b;
    }
    inline int divd(int a, int b){
        if(b==0){
            return -1;
        }
        return a/b;
    }
    inline int sub(int a, int b){
        return a-b;
    }
    inline int add(int a, int b){
        return a+b;
    }
};
int main(){
    func s;
    cout<<"Enter Numbers: "<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"Add: "<<s.add(a,b)<<endl;
    cout<<"Sub: "<<s.sub(a,b)<<endl;
    cout<<"Mul: "<<s.mul(a,b)<<endl;
    cout<<"Div: "<<s.divd(a,b)<<endl;
}