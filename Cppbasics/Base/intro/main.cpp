#include <iostream>
#include <cmath>
using namespace std;

int mcd(int x, int y) {
    while (y > 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main() {
    int n, d;
    bool neg;
    int comm;
    cin >> n >> d;

    if (n < 0 && d > 0){
        neg = true;
        n = abs(n);
    }
    else if (d < 0 && n > 0){
        neg = true;
        d = abs(n);
    }
        comm = mcd(n,d);
        n /= comm;
        d /= comm;
    if (d != 1 && d != 0){
    if (neg)
            cout << "-" << n << "/" << d;
    else
            cout << n << "/" << d;
        }
    else{
        if (neg)
            cout <<"-"<< n;
        else
            cout << n;
    }

    return 0;
}
