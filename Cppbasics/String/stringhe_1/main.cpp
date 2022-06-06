#include <iostream>


using namespace std;

int main() {
    string s;
    cin >> s;
    int dim = s.size();
    char lettera;
    char letteraPiuRep;
    int contatore = 0;
    int max = -1;
    for (int i = 0; i < dim; ++i) {
        lettera = s.at(i);
        for (int j = 0; j < dim; ++j) {
            if (s.at(j) == lettera){
                contatore++;
                if (contatore > max){
                    max = contatore;
                    letteraPiuRep = lettera;
                }
            }
        }
        contatore = 0;
    }
    cout << letteraPiuRep << " " << max << endl;
    return 0;
}
