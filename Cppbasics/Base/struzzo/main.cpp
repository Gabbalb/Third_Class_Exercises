#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int mossa = 0;
   int x=0,y=0;
   float spost;
   char direzione;
    while (mossa >= 0){
        cout << "inserisci la lunghezza" <<endl;
        cin >> mossa;
        cout << "inserisici la direzione" <<endl;
        cin >> direzione;
        switch (direzione) {
            case 'N':
                y += mossa;
                break;
            case 'S':
                y -= mossa;
                break;
            case 'E':
                x += mossa;
                break;
            case 'W':
                x -= mossa;
                break;
        }
    }
    spost = sqrt(pow(x,2) + pow(x,2));
    cout << "lo struzzo si è allontanato di: " << spost <<endl;

    return 0;
}
