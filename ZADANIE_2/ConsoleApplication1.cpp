
#include <iostream>

using namespace std;

int main() 
{
    Matrix matrix(10, 10);
    matrix.rand();
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << matrix.getValue(i, j) << " ";
        }
        cout << std::endl;
    }
    matrix.insertValue(0, 0, -3);
    cout << matrix.getValue(0, 0) << std::endl;
    cout << "Error state: " << matrix.fail() << std::endl;
    matrix.insertValue(-9, -123, 23);
    cout << "Error state: " << matrix.fail() << std::endl;
    matrix.resetFail();
    cout << "Error state: " << matrix.fail() << std::endl;

    return 0;
}
