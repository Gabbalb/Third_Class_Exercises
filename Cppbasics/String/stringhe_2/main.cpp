#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 1; i < (s.size() - 1) ; ++i) {
        if (s.at(i) == s.at(i-1)){
            cout << s.at(i) << " ";
        }
        if ( s.at(i) == s.at(i+1)){
            cout << s.at(i) << " ";
            i++;
        }
    }
    return 0;
}
