/*
#include <iostream>
using namespace std;
int main()
{

	int x = 10, y = 20;
	int *p1, *p2;
	p1 = &x;
	p2 = &y;
	cout << "x = " << x <<endl;
	cout << "y = " << y <<endl;
	cout <<"*p1 = " << *p1 <<endl;
	cout << "*p2 = "<<*p2 <<endl;
	*p1 = 50;
	*p2 = 90;
    cout << "x = " << x <<endl;
	cout << "y = " << y <<endl;
	cout <<"*p1 = " << *p1 <<endl ;
	cout << "*p2 = "<<*p2 <<endl;
	*p1 = *p2;
	cout << "x = " << x <<endl;
	cout << "y = " << y <<endl;
	cout <<"*p1 = " << *p1 <<endl ;
	cout << "*p2 = "<<*p2 <<endl;



	return 0;
}

#include <iostream>
using namespace std;

void Show(char *str)
{
    cout << str;
}

int main()
{
    const char *str = "DUT";
    //Show(str); // compile error
    Show(const_cast<char*>(str));
    return 0;
}
//mảng
#include <iostream>
using namespace std;
int main(){
	int A[4]={1, 3, 4, 5};
	int *p = A;
	//p <-> A <-> &A[0]
	cout << p <<" "<< A << " " << &A[0] <<endl;
	//p + i <-> A <-> &A[i]
	cout << "p + 1 = " << p + 1 
         << ", A + 1 = " << A + 1 
         << ", &A[1] = " << &A[1] << endl;

    cout << "*(p + 1) = " << *(p + 1) 
         << ", *(A + 1) = " << *(A + 1) 
         << ", A[1] = " << A[1] << endl;
}
//MẢNG 2 CHIỀU
#include <iostream>
using namespace std;

int main(){
	int A[2][3] = {1, 3, 5, 2, 4, 6};
	//A <-> A[0][0]
	cout << A << "," << &A[0][0] <<endl;
	//*(A+i) <-> &A[i][0] <-> i = 1
	cout << *(A + 1) <<","<< &A[1][0] << endl;
	//*(A+i)+j <-> &A[i][j] -> i=1, j=1 - địa chỉ của ô
	cout << *(A+1)+1 <<" , "<< &A[1][1] <<endl;
	//*(*(A+i)+j) <-> A[i][j] - giá trị của ô
	cout << *(*(A+1)+1) <<" , "<< A[1][1] <<endl;
}

#include <iostream>
using namespace std;
int Sum(int x, int y){
    return x+y;
}
void SX(int *p, int n){
 for (int i = 0; i < n-1; i++){
    for (int j = i+1; j<n; j++) {
        if (*(p+i) > *(p+j)){
            int t = *(p+i);
            *(p+i) = *(p+j);
            *(p+j) = t;
        }
    }
 }
}
int main(){
    //int (*p)(int, int);
   // p = Sum;
   int A[4];
   for (int i =0; i<4; i++)
   {
    cout << "A["<<i<<"] = ";
    cin >> A[i];
   }
   SX(A, 4);
   for (int i =0; i<4; i++)
   {
    cout << "A["<<i<<"] = " << A[i]<<endl;
   }
    return 0;
}
*/
#include <iostream>
using namespace std;

bool TD(int a, int b) {
    return a > b;
}

bool GD(int a, int b) {
    return a < b;
}

void SX(int *p, int n, bool (*cmp)(int, int)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // if (*(p + i) > *(p + j))
            // if (TD(*(p + i), *(p + j)))
            // if (*(p + i) < *(p + j))
            // if (GD(*(p + i), *(p + j)))
            if (cmp(*(p + i), *(p + j))) {
                int t = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = t;
            }
        }
    }
}
int main(){
    //int (*p)(int, int);
   // p = Sum;
   int A[4];
   for (int i =0; i<4; i++)
   {
    cout << "A["<<i<<"] = ";

    cin >> A[i];
   }
   SX(A, 4, TD);
   for (int i =0; i<4; i++)
   {
    cout << "A["<<i<<"] = " << A[i]<<endl;
   }
   system("pause");
    return 0;
}