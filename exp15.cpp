#include <bits/stdc++.h>
using namespace std;
class employee{
    static int sum;
    static int index;
    int salary;
    public:
    employee(){
        cout<<"Enter salary of employee "<<index<<endl;
        int x;
        cin>>x;
        sum+=x;
        index+=1;
    }
    int getsum(){
        return sum;
    }
};
int employee::sum=0;
int employee::index=1;

int main(){
    employee e[10];
    cout<<"Sum is: "<<e[0].getsum()<<endl;
}