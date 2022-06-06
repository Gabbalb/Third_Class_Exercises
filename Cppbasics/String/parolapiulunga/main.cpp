#include <iostream>

using namespace std;

string Longer (string s){
    string lunga = "";
    string temporanea = "";
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i) == ' '){
            if(temporanea.size() > lunga.size()){
                lunga = temporanea;
            }
            temporanea= "";
        } else{
            temporanea += s.at(i);
        }
    }
    return lunga;
}

int main() {
    cout << Longer("il perimetro vale 2 pigreco il raggio") << endl;
    return 0;
}
