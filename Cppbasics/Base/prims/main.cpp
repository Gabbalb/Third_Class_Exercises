#include <iostream>

using namespace std;

int main() {

    int a, b,  somma = 0, div=1, divs=0;

    cout << "inserisci il primo numero dell' intervallo" << endl;
    cin >> a;
    cout << "inserisci il secondo numero dell' intervallo" << endl;
    cin >> b;
    while (a <= b)
    {
        divs = 0;
        while ( a > div)
        {
            if (a%div == 0)
            {
                divs= divs+1;
            }
            div = div+1;
        }
        if (divs == 2)
        {
            cout << a << endl;
            somma = somma+1;
        }
        a = a+1;
    }
    cout << somma << endl;




    return 0;
}
