#include <iostream>
using namespace std;
int main()
{
    // Cấp phát tĩnh
    int A[] = {1, 2, 3, 4}; 
    int *p1 = A;

    // Cấp phát động
    int m = 5;
    int *p2 = new int[m];

    for (int i = 0; i < m; i++)
        *(p2 + i) = i + 1;

    return 0;
}
