#include <iostream>
#include <cstdlib>
#include <vector> // I vettori sono utilizzati per mettere più valori in una singola variabile

using namespace std;

void temperatura(const double t) {

    const double temperatura = t;

    cout << (temperatura - 32) / 1.8 << " Celsius" << endl;
}

void mom(const int v1, const int v2) {

    double first_v = v2 - v1;
    double second_v = first_v / v1;
    double third_v = second_v * 100;

    cout << third_v << endl;

}

void dogs(const int age) {

    cout << (age - 2) * 4 + 21 << endl;

}

void coinflip() {

    srand(time(NULL)); // Seed the random number generator

    int num = rand() % 2; // Generate a random number between 0 and 1

    if (num > 0.5) {
        cout << "Heads\n";
    }
    else {
        cout << "Tails\n";
    }
}

void vettori_1() {

    vector<string> items = {"Computer", "Telefono", "Ipad", "Smartwatch"};

    for (int i = 0; i < items.size(); i++) {
        cout << items[i] << endl;

    }

}

void vettori_2() {

    vector<int> pizza = {21, 7, 11, 18, 14};
    vector<int> s;
    s.reserve(pizza.size()); // Riserva spazio per il vettore s
    for (int i = 0; i < pizza.size(); i++) {
        s.push_back(pizza[i] * 10); // .append al vettore
    }
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << "€, ";
    }

}

void vettori_3() {

    vector<string> items = {"AAA", "BBB", "CCC", "DDD"};

    // cout << items << endl; // Non funziona perché i vettori non possono essere stampati direttamente

    items.push_back("EEE"); // Aggiunge un elemento alla fine del vettore
    items.pop_back(); // Rimuove l'ultimo elemento del vettore

}

void vettori_4() {

    vector<int> num = {2, 4, 3, 6, 1, 9, 8, 0, 8, 5, 7, 3, 3};
    int pari = 0;
    int dispari = 1;

    for (int i = 0; i < num.size(); i++) {
        if (num[i] % 2 == 0) {
            pari += num[i];
        } else {
            dispari *= num[i];
        }
    }

}

int celsius(const double t) {

    double Acelsius = (t - 32) / 1.8;

    return Acelsius;
}

class Student {
// le classi sono dei blueprint per creare tanti oggetti con le stesse proprietà e funzioni
private:

    int year{};
    int ore_PCTO{};

public:

    string name;

    Student(string name, int year, int ore_PCTO) {
        name = name;
        year = year;
        ore_PCTO = ore_PCTO;
    }

    void display_student_info() {

        // le funzioni dentro le classi sono chiamate metodi
        // METHODS

        if (name.empty()) {
            name = "UNKNOWN";
        }

        if (year <= 0 or year > 5 or year == NULL) {
            year = 1;
        }

        if (ore_PCTO < 0 or ore_PCTO == NULL) {
            ore_PCTO = 0;
        }

        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
        cout << "Ore PCTO: " << ore_PCTO << endl;
    }

};

void puntatori() {

    int eta = 18;
    int* p_eta = &eta; // il simbolo & prende l'indirizzo

    cout << p_eta << endl;
    cout << *p_eta << endl; // l'asterisco prende il valore all'indirizzo

    int* empty_pointer = nullptr; // puntatore vuoto

    int& ref_eta = eta; // riferimento alla variabile eta

}

int main() {

    // temperatura(69);
    // mom(4500, 6000);
    // dogs(18);
    // coinflip();
    // vettori_1();
    // vettori_2();
    // vettori_3();
    // vettori_4();
    // celsius(69);

    // Student mario("Mario Rossi", 3, 120);
    // mario.display_student_info();

    puntatori();

    return 0;

}