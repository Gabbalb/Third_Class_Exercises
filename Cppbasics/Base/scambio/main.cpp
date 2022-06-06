#include <iostream>

using namespace std;

int somma (int &a, int b)
{
    int c = a + b;
    a++;
    return c;
}

void scambio(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 7, b = 12;
    cout << somma( a, b)<< endl;
    cout << a << " " << b << endl;
    scambio(a, b);
    cout << a << " " << b << endl;
    return 0;
}
