#include <iostream>
using namespace std;

int main() {
    string frase;
    int n;
    cin >> n;

    getline(cin, frase);

    for (int i = 0; i < frase.size(); ++i) {
        if (frase.find(t)){
            frase.erase(i, 1);
            i--;
        }
    }

    cout << frase;

    return 0;
}
