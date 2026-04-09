#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Contatto {
    string nome;
    string cognome;
    long long numero;
};

vector<Contatto> Rubrica = {
    {"Luciana", "Littizzetto", 38743192784LL},
    {"Bob", "Dylan", 18648219743LL},
    {"Umberto", "Sordi", 184790289471LL}
};

void ordinamento_rubbrica() {
    for (int i = 0; i < Rubrica.size() - 1; i++) {
        for (int j = 0; j < Rubrica.size() - i - 1; j++) {
            if (Rubrica[j].cognome > Rubrica[j + 1].cognome) {
                Contatto temp = Rubrica[j];
                Rubrica[j] = Rubrica[j + 1];
                Rubrica[j + 1] = temp;
            }
        }
    }
}


int append_to_rubbrica() {

    string append_to_rubbrica_q;

    cout << "Desideri aggiungere un contatto alla tua Rubrica? [Y] per sì, [N] per no; [S] per stampare la Rubrica: ";
    cin >> append_to_rubbrica_q;

    string nome_new_contact;
    string cognome_new_contact;
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