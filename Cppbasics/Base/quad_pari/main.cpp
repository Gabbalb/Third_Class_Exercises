#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, exp;
    cout << "inserisci un numero:" <<endl;
    cin >> n;
    n--;
    while (n>1) {
        if (n % 2 != 0) {
            exp = pow(n, 2);
            cout << exp << endl;
        }
        n--;
    }

    return 0;
}
