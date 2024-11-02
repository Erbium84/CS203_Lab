#include <iostream>
using namespace std;

class MyClass {
private:
    int a,b,c;

public:
    MyClass(int x, int y, int z) : a(x), b(y), c(z) {}

    void operator!() {
        a = -a;
        b = -b;
        c = -c;
    }

    void display() const {
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    }
};

int main() {
    int a,b,c;
    cout<<"Enter three numbers to put in object to manipulate: "<<endl;
    cin>>a>>b>>c;
    MyClass obj(a, b, c);

    cout << "Original values:\n";
    obj.display();

    !obj;

    cout << "Values after using ! operator:\n";
    obj.display();

    return 0;
}
