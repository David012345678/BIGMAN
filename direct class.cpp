/#include<iostream>
using namespace std;
class A {
public:
    void funcA() { std::cout << "Function A\n"; }
};

class B : public A {
public:
    void funcB() { std::cout << "Function B\n"; }
};

int main() {
    B b;
    b.funcA(); // Directly calling function from base class A
    b.funcB();
    return 0;
}
