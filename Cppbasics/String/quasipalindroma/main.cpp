#include <iostream>
using namespace std;

string scambio (string parola, int i, int j){
    char flag;
    flag = parola.at(i);
    parola.at(i) = parola.at(j);
    parola.at(j) = flag;
    return parola;
}

bool palidroma (string parola) {
    int size = parola.size();

    for (int i = 0; i < size/2; ++i) {
        if (parola.at(i) != parola.at( (abs(size - i - 1)))){
            return false;
        }
    }
    return true;
}

bool quasipalindroma (string parola) {
    int size = parola.size();
    string scambiata;

    for (int i = 0; i < size/2; ++i) {
        for (int j = 0; j < size/2; ++j) {
            if ()
        }
    }
    return true;
}

int main() {
    string parola;
    cin >> parola;
    if (palidroma(parola))
        cout << "palindroma" << endl;
    else
        cout << "non è palindroma" << endl;
    return 0;
}
