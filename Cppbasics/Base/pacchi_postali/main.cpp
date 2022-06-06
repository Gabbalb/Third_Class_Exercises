#include <iostream>

using namespace std;


int main() {
    int h;
    int n_pacchi;
    int altezza_pacchi;
    int n_armadi = 1;
    int h_occupato = 0;
    cin >> h >> n_pacchi;
    for (int i = 0; i < n_pacchi; ++i) {
        cin >> altezza_pacchi;
        if (h_occupato+altezza_pacchi <= h){
            h_occupato += altezza_pacchi;
        }
        else{
            n_armadi++;

        }
    }
    return 0;
}
