#include <iostream>

using namespace std;

int scontrino() {

    int fotocopie_in_bianco_e_nero;
    int fotocopie_a_colori;
    int rilegatura;

    float costo_totale;
    float costo_fotocopie_in_bianco_e_nero = 0.10;
    float costo_fotocopie_a_colori = 0.80;
    float costo_rilegatura = 1.30;

    cout << "Salve, quante fotocopie in bianco e nero vuole stampare? ";
    cin >> fotocopie_in_bianco_e_nero;

    cout << "Quante fotocopie a colori vuole stampare? ";
    cin >> fotocopie_a_colori;

    cout << "Vuole la rilegatura? (1 per si, 0 per no) ";
    cin >> rilegatura;

    costo_totale = (fotocopie_in_bianco_e_nero * costo_fotocopie_in_bianco_e_nero) + (fotocopie_a_colori * costo_fotocopie_a_colori);

    if (rilegatura == 1) {
        costo_totale += costo_rilegatura;
    }

    return costo_totale;
}

int main() {

    float costo_totale = scontrino();

    cout << "Il costo totale delle fotocopie e': " << costo_totale << " euro." << endl;

    return 0;

}