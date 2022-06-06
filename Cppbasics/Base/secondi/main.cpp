#include <iostream>
#include <cmath>

using namespace std;
/**
 *
 * @param h ore
 * @param m minuti
 * @param s secondi
 * @return
 */

int GetSecond(int h, int m, int s){
    h *= 3600;
    m *= 60;
    s += m+h;
    return s;
}
int main() {
    int h1, m1, s1, h2, m2, s2;
    cout << " inserisci il primo tempo secondo formato HH MM SS" << endl;
    cin >> h1;
    cin >> m1;
    cin >> s1;

    cout << " inserisci il primo tempo secondo formato HH MM SS" << endl;
    cin >> h2;
    cin >> m2;
    cin >> s2;

    if (GetSecond(h1, m1, s1) > GetSecond(h2,m2,s2)) cout << h1 << ":" << m1 << ":" << s1 << " è maggiore di " << h2 << ":" << m2 << ":" << s2 <<endl;

    else cout << h2 << ":" << m2 << ":" << s2 << " è maggiore di " << h1 << ":" << m1 << ":" << s1 <<endl;
    return 0;
}
