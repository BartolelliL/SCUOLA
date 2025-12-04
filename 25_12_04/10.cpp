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