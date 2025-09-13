#include <iostream>
using namespace std;
int& Func() {
    static int var_x = 10;
    return var_x;
}
int main() {
    cout << Func();
    system("pause");
    return 0;
}
