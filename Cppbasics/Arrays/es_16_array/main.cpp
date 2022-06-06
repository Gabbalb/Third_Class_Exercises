#include <iostream>

using namespace std;

int main() {
    const int MAX_VALORI = 1000;
    int n;
    cin >> n;
    int insieme_n[MAX_VALORI];
    int somma = 0;
    int min = 10000000;
    int max = 0;
    int media;
    for (int i = 0; i < n; ++i) {
        cin >> insieme_n[i];
        somma += insieme_n[i];
        if (insieme_n[i] > max)
            max = insieme_n[i];
        if (insieme_n[i] < min)
            min = insieme_n[i];
        media = somma/n;
    }
    cout << max << " " << min << " " << media << endl;

    return 0;
}
