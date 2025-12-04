/*
Scrivi in c++ un programma che,
acquisita l'età di un individuo, sapendo che
dai 14 anni sì può guidare lo scooter con
cilindrata di 50cc, dai 16 anni la moto fino a 125cc,
dai 18 anni l'auto fino a 95cc e dai 21 qualsiasi auto
o moto senza limitazioni, restituisca l'elenco dei mezzi che
l'individuo può guidare.
*/

#include <iostream>
using namespace std;

int main() {
    int eta;

    cout << "Inserisci la tua età: ";
    cin >> eta;

    cout << "Puoi guidare i seguenti mezzi:\n";

    if (eta >= 14) {
        cout << "- Scooter fino a 50cc\n";
    }
    if (eta >= 16) {
        cout << "- Moto fino a 125cc\n";
    }
    if (eta >= 18) {
        cout << "- Auto fino a 95cc\n";
    }
    if (eta >= 21) {
        cout << "- Qualsiasi auto o moto senza limitazioni\n";
    }

    if (eta < 14) {
        cout << "Nessun mezzo disponibile per la tua età.\n";
    }

    return 0;
}