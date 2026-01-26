#include <iostream>

using namespace std;

int binarioToDecimale(const string& binario) {
    int decimale = 0;
    int potenza = 1;

    for (int i = binario.length() - 1; i >= 0; --i) {
        if (binario[i] == '1') {
            decimale += potenza;
        }
        potenza *= 2;
    }

    return decimale;
}

int main() {
    string binario;

    cout << "Inserisci un numero binario (massimo 8 bit): ";
    cin >> binario;

    if (binario.length() > 8) {
        cerr << "Errore: Il numero binario deve essere di massimo 8 bit." << endl;
        return 1;
    }

    int decimale = binarioToDecimale(binario);
    cout << "Il numero decimale corrispondente è: " << decimale << endl;

    return 0;
}