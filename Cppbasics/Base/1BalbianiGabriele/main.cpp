#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int h, k, somma=0, media, c=0;
    do {
        cout << "inserisci il primo numero" << endl;
        cin >> h;
        cout << "inserisci il secondo numero" << endl;
        cin >> k;
    } while ( h>k || (k-h)<2 || h<0);
    if (h%2 == 0){
        h++;
    } else{
        h += 2;
    }
    while (h<k){
        somma += pow(h,2);
        h += 2;
        c++;
    }
    cout << somma <<endl;
    media = somma/c;
    cout << media <<endl;

    return 0;
}
