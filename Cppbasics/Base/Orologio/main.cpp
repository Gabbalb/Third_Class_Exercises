#include <iostream>

using namespace std;

int converti_ore_minuti (int ore, int min)
{
    return ore*60+min;
}

int main() {
    int ora_inizio = 18, minuti_inizio = 59, ora_sveglia = 19, minuti_sveglia = 01;
    int minuti_attuale;
    int minuti_tot_sveglia;
    int minuti_passati;
    minuti_attuale = converti_ore_minuti(ora_inizio, minuti_inizio);
    minuti_tot_sveglia = converti_ore_minuti(ora_sveglia, minuti_sveglia);
    //caso in cui nn sono nello stesso giorno
    if (minuti_attuale < minuti_tot_sveglia)
        minuti_passati = minuti_tot_sveglia - minuti_passati;
    else
        minuti_passati = minuti_tot_sveglia + 24*60 -minuti_attuale;
    cout << "Ore: "<<minuti_passati/60 << " minuti: "<<minuti_passati;
    return 0;
}
