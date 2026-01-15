#include <iostream>
#include <string>

using namespace std;

string es1() {

    int voto;

    cout << "Inserisci il voto: ";
    cin >> voto;

    if (voto <= 49) {
        return "Insufficiente";
    } else if (voto >= 50 && voto <= 69) {
        return "Sufficiente";
    } else if (voto >= 70 && voto <= 89) {
        return "Buono";
    } else if (voto >= 90 && voto <= 100) {
        return "Ottimo";
    } else {
        return "Voto non valido";
    }

}

string es2() {

    int soldi_disponibili_del_utente, prodotto_scelto;

    cout << "Selezionare uno dei seguenti prodotti:\nAcqua 1€\nPatatine2€\nCioccolata3€\nPer selezionare un prodotto, inserire il suo prezzo: ";
    cin >> prodotto_scelto;

    cout << "Quanti soldi inserisci? ";
    cin >> soldi_disponibili_del_utente;

    if (soldi_disponibili_del_utente == prodotto_scelto) {
        return "Ecco il tuo prodotto!";
    } else if (soldi_disponibili_del_utente < prodotto_scelto) {
        return "Soldi insufficienti";
    } else if (soldi_disponibili_del_utente > prodotto_scelto) {
        int resto = soldi_disponibili_del_utente - prodotto_scelto;
        return "Ecco il tuo prodotto e il resto di " + to_string(resto) + "€";
    } else {
        return "Errore nella selezione del prodotto";
        // questa condizione "else" è stata aggiunta non perchè necessaria, ma per errore di compilazione
    }

}

int es3() {

    int somma_totale, numero;

    do {
        cout << "Inserisci un numero (0 per terminare): ";
        cin >> numero;
        somma_totale += numero;
    } while (numero != 0);

    return somma_totale;

}

string es4() {

    int vettore_temperature[5] = {0};
    int somma_temperature = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Inserisci la temperatura del giorno " << (i + 1) << ": ";
        cin >> vettore_temperature[i];
        somma_temperature += vettore_temperature[i];
    }

    for (int i = 0; i < 5; i++) {

        if (vettore_temperature[i] > 0) {
            if (vettore_temperature[i] > 30) {
                cout << "La temperatura del giorno " << (i + 1) << " è: " << vettore_temperature[i] << "°C. Le condizioni metereologiche indicano caldo torrido." << endl;
            } else {
                cout << "La temperatura del giorno " << (i + 1) << " è: " << vettore_temperature[i] << "°C. Le condizioni metereologiche indicano caldo normale." << endl;
            }
        } else {
            if (vettore_temperature[i] < -10) {
                cout << "La temperatura del giorno " << (i + 1) << " è: " << vettore_temperature[i] << "°C. Le condizioni metereologiche indicano gelo polare." << endl;
            } else {
                cout << "La temperatura del giorno " << (i + 1) << " è: " << vettore_temperature[i] << "°C. Le condizioni metereologiche indicano freddo." << endl;
            }
        }
        
    }

    return "La media totale delle temperature è di " + to_string(somma_temperature / 5) + "°C.";

}

int main() {

    cout << es1() << endl;
    cout << es2() << endl;
    cout << es3() << " è la somma totale." << endl;
    cout << es4() << endl;

    system("pause");
    return 0;
}