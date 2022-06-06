#include <iostream>
using namespace std;

string TrimSpace (string s){
    while (s.size() > 0 && s.at(0) == ' '){
        s.erase(0,1);
    }

    if (s.size() == 0){
        return s;
    }
    //toglie spazi finali
    while (s.at(s.size() -1 ) == ' '){
        s.erase(s.size()-1, 1);
    }
    return s;
}


int main() {
    cout << "<" << TrimSpace("     ciao                              ") << ">" << endl;
    return 0;
}
