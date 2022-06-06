#include <iostream>

using namespace std;

bool Isdoppia (string s){
    for (int i = 1 ; i < s.size() -1 ; ++i) {
        if (s.at(i) == s.at(i+1)){
            return true;
        }
    }
    return false;
}

string Doppie (string s){
    string doppie;
    for (int i = 1 ; i < s.size() -1 ; ++i) {
        if (s.at(i) == s.at(i+1)){
            doppie += s.at(i);
            doppie += " ";
            i++;
        }
    }
    return doppie;
}





int main() {
    string s;
    cin >> s;
    if (Isdoppia(s)){
        cout << "le doppie sono: " << Doppie(s) << endl;
    }
    else {
         cout << "Non ha doppie" << endl;
    }
    return 0;
}
