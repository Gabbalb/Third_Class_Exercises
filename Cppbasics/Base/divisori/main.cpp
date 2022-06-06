#include <iostream>

using namespace std;

int getndiv(int n){
    int div = 2, ndiv = 2;
    while( div < n/2 ) {
        ndiv = 2;
        if (n%div == 0){
            ndiv++;
        }
        div++;
    }
    return ndiv;
}

int main() {
    int n, d;
    cin >> n;
    d = getndiv(n);
    cout << d << endl;
    cout << getndiv(d) << endl;
    return 0;
}
