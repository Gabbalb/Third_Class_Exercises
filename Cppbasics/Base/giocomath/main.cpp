#include <iostream>
using namespace std;

int collatz(int n){
    int cont=0;
    while (n != 1){

        cout << n << " --> ";
        if (n%2==0)
            n /= 2;
        else
            n= n*3+1;
        cont++;
    }
    return cont + 1;
}

int main() {
    int a = 7, b = 22;
    for (int i = a; i <= b; ++i) {
        cout << "sequenza ( "<< i << " ): ";
        collatz(i);
        cout << "1" << endl;
    }
    return 0;
}
/*
 * 46
 * 23
 * 70
 * 35
 * 106
 * 53
 * 160
 * 80
 * 40
 * 20
 * 10
 * 5
 * 16
 * 8
 * 4
 * 2
 * 1
 */