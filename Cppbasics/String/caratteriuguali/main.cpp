#include <iostream>
using namespace std;

string cancellalettera (string s){
    for (int i = 0; i < s.size(); ++i) {
        for (int j = i+1; j < s.size(); ++j) {
            if (s.at(i) == s.at(j)){
                s.erase(s.at(j));
                j--;
            }
        }
    }
    cout << s;
}


int caratteriRipetuti (string prima, string seconda){
    int contatore = 0;
    string usate;
    for (int i = 0; i < prima.size(); ++i) {
        for (int j = 0; j < seconda.size(); ++j) {
            if (prima.at(i) == seconda.at(j)){
                contatore++;
            }
        }
    }

    return contatore;
}


int main() {
    string uno = "nonno";
    string due = "nonna";
    cout << caratteriRipetuti(uno, due);
    cancellalettera(uno);
    return 0;
}
