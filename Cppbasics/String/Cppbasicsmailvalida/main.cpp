#include <iostream>

using namespace std;

int posAt (string email){
    int pos = -1;
    for (int i = 0;  i < email.size() ; ++i) {
        pos = i;
        char t = email.at(i);
        if (email.at(i) == '@'){
            break;
        }
    }
    if ((pos == (email.size() -1)) || (pos == 0)){
        return -1;
    }
    //più di una chiocciola
    for (int i = 0; i < email.size(); ++i) {
        if ((email.at(i) == email.at(pos)) && (i != pos)){
            pos = -1;
        }
    }
    return pos;
}

bool IsPointValid (string email, int posat){
    int pos;
    for (int i = 0; i < email.size() ; ++i) {
        pos = i;
        if (email.at(i) == '.'){
            break;
        }
    }

    if (pos == posat - 1 || pos == posat + 1){
        return false;
    }

    if ((pos < (email.size() - 3))|| (pos > (email.size() - 4 ))){
        return false;
    }

    if (pos < posat){
        return false;
    }
    return true;
}

bool IsEmailValid (string email){
    int posat;
    if (posAt(email) > 0){
        posat = posAt(email);
    } else
        return false;
    if (!IsPointValid(email, posat)){
        return false;
    }
    return true;
}


int main() {
    string email;
    cin >> email;
    if (IsEmailValid(email)){
        cout << "valido";
    }
    else{
        cout << "non valido";
    }
    return 0;
}
