#include <bits/stdc++.h>
using namespace std;
class number{
    int data;
    public:
    void getdata(int x){
        data=x;
        cout<<"Data was updated to "<<data<<endl;
    }
    void showdata(){
        cout<<"Data is "<<data<<endl;
    }
    void cube(){
        cout<<"Cube is "<<data*data*data<<endl;
    }
    void square(){
        cout<<"Sqaure is "<<data*data<<endl;
    }
};

int main(){
    cout<<"Enter number to manipulate "<<endl;
    int x;
    cin>>x;
    number* num=new number;
    num->getdata(x);
    num->cube();
    num->square();
    num->showdata();
}