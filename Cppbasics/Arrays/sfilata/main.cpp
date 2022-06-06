#include <iostream>

using namespace std;

int altezza_maggiore (int v[], int n){
    int max = v[1];

    for (int i = 0; i < n; ++i) {
        if (v[i] >= max){
            max = v[i];
        }
    }

    return max;
}


int main() {
    int n;
    const int ABITI_MAX = 1000;
    int abiti[ABITI_MAX];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> abiti[i];
    }


    int max = altezza_maggiore(abiti, n);

    for (int i = 0; i < n; ++i) {
        if (abiti[i] == max){
            cout << i + 1 << endl;
        }
    }

    return 0;
}
