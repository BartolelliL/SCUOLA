#include <iostream>
#include <string>

using namespace std;

int ottaleADecimale(string numero) {
    int risultato = 0;

    for(int i = 0; i < numero.length(); i++) {
        int cifra = numero[i] - '0';
        risultato = risultato * 8 + cifra;
    }

    return risultato;
}

int esadecimaleADecimale(string numero) {
    int risultato = 0;

    for(int i = 0; i < numero.length(); i++) {
        char carattere = numero[i];
        int valore;

        if(carattere >= '0' && carattere <= '9')
            valore = carattere - '0';
        else if(carattere >= 'A' && carattere <= 'F')
            valore = carattere - 'A' + 10;
        else if(carattere >= 'a' && carattere <= 'f')
            valore = carattere - 'a' + 10;
        else
            valore = 0;

        risultato = risultato * 16 + valore;
    }

    return risultato;
}

int main() {
    // il numero è da inserire
    string num;

    ottaleADecimale(num);
    esadecimaleADecimale(num);

    return 0;
}