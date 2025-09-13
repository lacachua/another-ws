#include<iostream>
using namespace std;
void nhap (double **p, int r, int c){
    cout << "Nhập ma trận" <<"\n";
     for (int i = 0; i < r; i++)
    {
        *(p+i) = new double[c];
        for (int j = 0; j < c; j++){
            cout << "p[" << i << "].[" << j << "] = ";
            cin >>  *(*(p+i)+j);
        }
    }
}
void xuat (double **p, int r, int c){
    cout << "ma trận đã nhập là:" << "\n";
     for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
        {
        cout << *(*(p+i)+j)<< " ";
        }
        cout << endl;
    }
  
}

void minmax (double **p, int r, int c){
    cout << "min max từng hàng" << endl;
    for (int i = 0; i < r; i++){
        double mn = *(*(p+i) + 0), mx = *(*(p+i) + 0);
        for (int j = 0; j < c; j++) {
            double val = *(*(p+i) + j);
            mn = min(mn, val);
            mx = max(mx, val);
        }
        cout << "Hang " << i << ": min = " << mn << ", max = " << mx << '\n';
    }
}

int main(){
    int r, c;
    cout << "r = ";
    cin >> r;
    cout << "c = ";
    cin >> c;
    //int A[r][c];
    double **p = new double*[r];
    nhap (p, r, c);
    xuat (p, r, c);
    minmax(p, r, c);
    system("pause");
    return 0;
}