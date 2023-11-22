#include <iostream>
#include <bitset>

using namespace std;


class Foo 
{
    static int myInt;
public:
    Foo() { myInt++; }

    static void getInstances()
    {
        cout << myInt << endl;
    }
};

int Foo::myInt = 0;

int main() 
{
    Foo p1, p2, p3;

    Foo

        
        ::getInstances();
    return 0;
}
