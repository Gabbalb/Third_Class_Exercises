#include <iostream>


using namespace std;

bool IsMAC (string adress){
    if (adress.size() != 12){
        return false;
    }
    for (int i = 0; i < adress.size(); ++i) {
        adress.at(i) = tolower(adress.at(i));
    }
    for (int i = 0; i < adress.size(); ++i) {
        if (adress.at(i) >= '0' && adress.at(i) <= 9 || adress.at(i) >= 'a' || adress.at(i) <='f') {
            return true;
        }
        else
            return false;
    }
}


int main() {
    string adress;
    cin >> adress;
    if (IsMAC(adress)){
        cout << "valido" << endl;
    } else
        cout << "non valido" << endl;
    return 0;
}
