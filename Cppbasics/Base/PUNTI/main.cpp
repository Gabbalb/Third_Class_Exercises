#include <iostream>
#include <cmath>

using namespace std;
double distanza (double xf1, double xf2, double yf1, double yf2){

    double d =sqrt(pow(xf1-xf2,2) + pow(yf1-yf2,2));
    return d;
}

int main(){
    int x1, x2, x3, y1, y2, y3, perimetro;
    cin >> x1;
    cin >> x2;
    cin >> x3;
    cin >> y1;
    cin >> y2;
    cin >> y3;
    perimetro = distanza(x1, x2, y1, y2) + distanza(x1, x3, y1, y3) + distanza(x2, x3, y2, y3);
    cout << perimetro;
    return 0;
}
