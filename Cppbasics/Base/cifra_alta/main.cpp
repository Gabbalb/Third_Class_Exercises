#include <iostream>
using namespace std;

int cifraalta(int i){
    int cifra;
    int max = 0;
    while (i > 0) {
        cifra = i%10;
        if (cifra > max) {
            max = cifra;
        }
        i = i/10;
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    cout << cifraalta(n);
    return 0;
}
