#include <iostream>
#include <cmath>
using namespace std;

int comunismo_merda (int a, int b, int c){
    int mas, minm;
    minm= min(a, min(b,c));
    mas= max( a, max(b,c));

    return (mas - minm);

}

int main() {
    int a, b, c;
    cin >> a>>b>>c;
    cout << comunismo_merda(a, b, c);
    return 0;
}
