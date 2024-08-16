// Kshitij Sinha
// 23/CS/225, A4
// Swap two numbers, first by using value and then reference. Make a switch statement for the same
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void swap_value(int a, int b){
    cout<<"Original nums:"<<a<<" "<<b<<endl;
    int c=a;
    a=b;
    b=c;
    cout<<"Swapped nums:"<<a<<" "<<b<<endl;
}
void swap_reference(int *a, int*b){
    cout<<"Original nums:"<<*a<<" "<<*b<<endl;
    int c=*a;
    *a=*b;
    *b=c;
    cout<<"Swapped nums:"<<*a<<" "<<*b<<endl;
}
int main(){
    int x,y;
    cout<<"Input nums: ";
    cin>>x>>y;
    cout<<endl;
    int a;
    cout<<"Press 1 for swap by value and 2 for swap by reference"<<endl;
    cin>>a;
    switch(a){
        case 1:
            swap_value(x,y);
            break;
        case 2:
            swap_reference(&x, &y);
            break;
    }
}