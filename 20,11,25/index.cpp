#include <iostream>

using namespace std;

int main() {

    int km;
    double costo_per_km = 0.21;
    double totale;

    cout << "Inserisci i kilometri da percorrere: ";
    cin >> km;
    totale = km * costo_per_km;
    cout << "Il totale da pagare e': " << totale << " euro.\n";

    return 0;
    
}