#include <iostream>

using namespace std;

int main() {
    int n;
    int croce=0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (croce%2 == 0)
                cout << "x";
            else
                cout << "+";
            croce++;
        }
        if (n%2 == 0)
            croce++;

        cout << endl;
    }
    return 0;
}
