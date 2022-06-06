#include <iostream>
#include <cmath>
using namespace std;

float delta (float a,float b,float c){
    float delta = b*b - 4*a*c ;
}

bool soluzioni_eq_secondo_grado(float a, float b, float c,
                                float &x1, float &x2){
    float d = delta(a, b, c);
    if (d < 0)
        return false;
    else{
        x1 = (-b - sqrt(d))/(2*a);
        x2 = (-b + sqrt(d))/(2*a);
        return true;
    }
}

int main() {
    float xq = 2, x = 10, n = 1;
    float x1, x2;
    if (soluzioni_eq_secondo_grado(xq, x, n, x1, x2)){
        cout <<
    };

    return 0;
}
