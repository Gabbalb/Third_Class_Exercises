#include <iostream>
#include <cmath>

using namespace std;

float pendl (float p){
    float lung = pow(p/6.2832, 2) * 9.8;
    return lung;
}

int main() {
    int periodo;
    cout << "inserisci periodo:" << endl;
    cin >> periodo;
    cout << pendl (periodo) << " m";
    return 0;
}
