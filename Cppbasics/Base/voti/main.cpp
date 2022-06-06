#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    float media;
    cout << "inserici il primo voto"<<endl;
    cin >> a;
    cout << "inserici il secondo voto"<<endl;
    cin >> b;
    cout << "inserici il terzo voto"<<endl;
    cin >> c;
    media = (a+b+c)/3;
    media = round(media);
    cout << media <<endl;

    return 0;
}
