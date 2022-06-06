#include <iostream>
#include <cmath>
using namespace std;
void debito (int &i1, int &i2, int &i3){

    if (abs(i2) + abs(i3) <= i1) {
        if (i2 < 0) {
            i1 += i2;
            i2 = 0;
        }

        if (i3 < 0) {
            i1 += i3;
            i3 = 0;
        }
        cout << i1 << " " << i2 << " " << i3 << endl;
    }
    else {
        cout << 0 << " " << 0 << " " << 0;
    }
    }

int main() {
    int i1, i2, i3;
    cin >> i1 >> i2 >> i3;
    debito(i1, i2, i3);
    return 0;
}
