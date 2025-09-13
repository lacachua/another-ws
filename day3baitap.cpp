#include <bits/stdc++.h>
using namespace std;

void nhap(double **a, int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> *(*(a+i) + j);  
}

void xuat(double **a, int r, int c) {
    cout << "Ma tran:\n";
   /// cout.setf(ios::fixed); cout << setprecision(2);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << *(*(a+i) + j);  
        cout << endl;
    }
}

void minMaxHang(double **a, int r, int c) {
    cout << "\nMin/Max tung hang:\n";
    for (int i = 0; i < r; i++) {
        double mn = *(*(a+i) + 0), mx = *(*(a+i) + 0);
        for (int j = 0; j < c; j++) {
            double val = *(*(a+i) + j);
            mn = min(mn, val);
            mx = max(mx, val);
        }
        cout << "Hang " << i << ": min = " << mn << ", max = " << mx << '\n';
    }
}

int main() {
    int r, c;
    cin >> r >> c;

    double **a = new double*[r];
    //for (int i = 0; i < r; i++)
    //   a[i] = new double[c];

    nhap(a, r, c);
    xuat(a, r, c);
    minMaxHang(a, r, c);

    //for (int i = 0; i < r; i++) delete[] a[i];
    //delete[] a;

    return 0;
}
