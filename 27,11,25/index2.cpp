/*

*/
#include <iostream>
using namespace std;

int calcola_prezzo_residence(int numero_settimane, bool lenzuola) {

    const int quota_fissa = 100;
    const int soggiorno_settimanale = 600;
    const int soggiorno_due_settimane = 1100;
    const int costo_lenzuola_settimanale = 20;

    return quota_fissa + (numero_settimane == 1 ? soggiorno_settimanale : soggiorno_due_settimane) + (lenzuola ? costo_lenzuola_settimanale * numero_settimane : 0);

}

int main() {

    int numero_settimane;
    bool lenzuola;

    cout << "Inserire il numero di settimane che si desidera soggiornare: ";
    cin >> numero_settimane;
    if (!numero_settimane == 1 or !numero_settimane == 2) {
        cerr << "Errore: il numero di settimane deve essere 1 o 2." << endl;
        return 1;
    }

    cout << "Si desidera il servizio di lenzuola? (1 per si, 0 per no): ";
    cin >> lenzuola;

    int prezzo_totale = calcola_prezzo_residence(numero_settimane, lenzuola);

    cout << "Il prezzo totale del soggiorno e': " << prezzo_totale << " euro." << endl;

    return 0;

}