#include <iostream>

using namespace std;

string cancellalettere (string s, char lettera){
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i) == lettera){
            s.at(i) = '-';
        }
    }
    return s;
}


int main() {
    string pamela;
    string manuel;
    int caratteriuguali = 0;
    cin >> pamela >> manuel;
    for (int i = 0; i < pamela.size(); ++i) {
        for (int j = 0; j < manuel.size(); ++j) {
            if (pamela.at(i) == manuel.at(j)){
                caratteriuguali++;
                manuel = cancellalettere(manuel, pamela.at(i));
            }
        }
    }

    cout << caratteriuguali;

    return 0;
}
