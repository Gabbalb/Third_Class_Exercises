#include <iostream>

using namespace std;
int main() {
    int a, b = 51, diff;
    cout << "inserisci un numero" << endl;
    cin >> a;
    diff= a-b;
    if (a > b)
        diff= diff*3;
    cout << abs(diff) << endl;

    return 0;
}
