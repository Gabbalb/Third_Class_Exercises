#include <iostream>
using namespace std;

int main() {
    int m, n;
    do {
        cout <<"inserisci il primo numero"<<endl;
        cin >> n;
        cout <<"inserisci il secondo numero"<<endl;
        cin >> m;
    } while (n>m);
    n++;
    while (n<m) {
        if (n%2 == 0)
            cout << n <<endl;
    n++;
    }

    return 0;
}
