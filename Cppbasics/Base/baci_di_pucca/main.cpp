#include <iostream>
using namespace std;

int main() {
    int days;
    int kiss;
    int prekiss = 0;
    int happy = 0;
    int sad = 0;
    int normal = 0;
    cin >> days;
    for (int i = 0; i < days; ++i) {
      cin >> kiss;
        if (i >= 1) {
            if (kiss <= prekiss - 10) {
                sad++;
            } else if (kiss >= prekiss + 10) {
                happy++;
            } else
                normal++;
        }
        prekiss = kiss;
    }
    cout << happy << " " << sad;
    return 0;
}
