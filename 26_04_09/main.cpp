#include <iostream>
#include <cstring>
const int MAX_CONTATTI = 100;

using namespace std;

struct Contatto {
    char nome[50];
    char cognome[50];
    long long numero;
};

Contatto Rubrica[MAX_CONTATTI] = {
    {"Luciana", "Littizzetto", 38743192784LL},
    {"Bob", "Dylan", 18648219743LL},
    {"Umberto", "Sordi", 184790289471LL}
};
int contatti_attualmente_inseriti = 3;

void ordinamento_rubbrica() {
    for (int i = 0; i < contatti_attualmente_inseriti - 1; i++) {
        for (int j = 0; j < contatti_attualmente_inseriti - i - 1; j++) {
            if (strcmp(Rubrica[j].cognome, Rubrica[j + 1].cognome) > 0) {
                Contatto temp = Rubrica[j];
                Rubrica[j] = Rubrica[j + 1];
                Rubrica[j + 1] = temp;
            }
        }
    }
}


int append_to_rubbrica() {

    char *append_to_rubbrica_q;

    cout << "Desideri aggiungere un contatto alla tua Rubrica? [Y] per sì, [N] per no; [S] per stampare la Rubrica: ";
    cin >> append_to_rubbrica_q;

    char nome_new_contact[50];
    char cognome_new_contact[50];
    long long num_new_contact;

    if (append_to_rubbrica_q != "Y" and append_to_rubbrica_q != "N" and append_to_rubbrica_q != "S") {
        cout << "Risposta non valida";
        return 1;
    } else if (append_to_rubbrica_q == "Y") {
        cout << "Specifichi il nome del nuovo Contatto: ";
        cin >> nome_new_contact;
        cout << "Specifichi il cognome del nuovo Contatto: ";
        cin >> cognome_new_contact;
        cout << "Specifichi il numero del nuovo Contatto: ";
        cin >> num_new_contact;

        Rubrica.push_back({nome_new_contact, cognome_new_contact, num_new_contact});
        ordinamento_rubbrica();
        append_to_rubbrica();

    } else if (append_to_rubbrica_q == "N") {
        cout << "Uscita dalla rubrica.";
        return 0;
    } else if (append_to_rubbrica_q == "S") {
        cout << "Rubrica:\n";
        for (int i = 0; i < Rubrica.size(); i++) {
            cout << i + 1 << ". " << Rubrica[i].cognome << " " << Rubrica[i].nome << " - Tel: " << Rubrica[i].numero << "\n";
        }

        append_to_rubbrica();

    }

    return 0;

}

int main() {

    ordinamento_rubbrica();
    cout << "Benvenuto nella Rubbrica\n";
    append_to_rubbrica();

    return 0;
}