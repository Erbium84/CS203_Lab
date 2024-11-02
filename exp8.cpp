#include <bits/stdc++.h>
using namespace std;
float absolute(float a){
    if(a>0) return a;
    return float(a)*float(-1.0);
}

int absolute(int a){
    if(a>0) return a;
    else return a*(-1);
}

int main(){
    cout<<"Enter a float and int\n";
    float f; int i;
    cin>>f>>i;
    cout<<"Float abs: "<<absolute(f)<<endl;
    cout<<"Int abs: "<<absolute(i)<<endl;
}