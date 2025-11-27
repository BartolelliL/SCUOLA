#include <iostream>

using namespace std;

float calcola_prezzo_totale(float tariffa_biglietto, float peso_bagaglio) {

    float costo_totale = tariffa_biglietto;

    if (peso_bagaglio > 20) {
        float peso_extra = peso_bagaglio - 20;
        float costo_extra = peso_extra * (0.02 * tariffa_biglietto);
        costo_totale += costo_extra;
    }

    return costo_totale;
}

int main() {
    
    float tariffa_biglietto;
    float peso_bagaglio;

    cout << "Inserisci la tariffa del biglietto aereo: ";
    cin >> tariffa_biglietto;

    cout << "Inserisci il peso del bagaglio in chilogrammi: ";
    cin >> peso_bagaglio;

    float prezzo_totale = calcola_prezzo_totale(tariffa_biglietto, peso_bagaglio);

    cout << "Il prezzo totale del biglietto e': " << prezzo_totale << " euro." << endl;

    return 0;
}