#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct Contatto {
    string nome;
    string cognome;
    int eta;
};

void aggiungiContatto(vector<Contatto>& rubrica) {
    Contatto nuovoContatto;
    cout << "Inserisci il nome: ";
    cin >> nuovoContatto.nome;
    cout << "Inserisci il cognome: ";
    cin >> nuovoContatto.cognome;
    cout << "Inserisci l'età: ";
    cin >> nuovoContatto.eta;
    rubrica.push_back(nuovoContatto);
    cout << "Contatto aggiunto con successo!" << endl;
}

void stampaRubrica(const vector<Contatto>& rubrica) {
    if (rubrica.empty()) {
        cout << "La rubrica è vuota." << endl;
        return;
    }
    cout << "Contatti salvati:" << endl;
    for (const auto& contatto : rubrica) {
        cout << "Nome: " << contatto.nome << ", Cognome: " << contatto.cognome << ", Età: " << contatto.eta << endl;
    }
}

int main() {
    vector<Contatto> rubrica;
    int scelta;

    do {
        cout << "\nMenu:\n";
        cout << "1. Aggiungi un nuovo contatto\n";
        cout << "2. Stampa i contatti salvati\n";
        cout << "3. Esci\n";
        cout << "Scegli un'opzione: ";
        cin >> scelta;

        switch (scelta) {
            case 1:
                aggiungiContatto(rubrica);
                break;
            case 2:
                stampaRubrica(rubrica);
                break;
            case 3:
                cout << "Uscita dal programma." << endl;
                break;
            default:
                cout << "Opzione non valida. Riprova." << endl;
        }
    } while (scelta != 3);

    return 0;
}
