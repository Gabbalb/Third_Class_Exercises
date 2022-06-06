#include <iostream>

using namespace std;

int main() {
    float altezza;
    int rimbalzi = 0;
    cout << "inserisci l'altezza iniziale in cm" << endl;
    cin >> altezza;
    while (altezza >= 1){
       rimbalzi += 1;
       altezza *= 0.8;

   }
   cout << "i rimbalzi fatti sono: " << rimbalzi <<endl;
    return 0;
}
