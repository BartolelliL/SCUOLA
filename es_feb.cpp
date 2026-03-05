#include <iostream>
using namespace std;

void es20() {
    int a, b, prodotto = 0;
    cin >> a >> b;
    for (int i = 0; i < b; i++)
        prodotto += a;
    cout << prodotto << endl;
}

void es21() {
    int a, b, cont = 0;
    while (true) {
        cin >> a >> b;
        cont++;
        if (a == b) {
            cout << cont << endl;
            break;
        }
        if (b > a) {
            cout << cont << endl;
            break;
        }
    }
}

void es22() {
    int a, b, q = 0;
    cin >> a >> b;
    while (a >= b) {
        a -= b;
        q++;
    }
    cout << q << " " << a << endl;
}

void es23() {
    int x, y, ris = 1;
    cin >> x >> y;
    for (int i = 0; i < y; i++)
        ris *= x;
    cout << ris << endl;
}

void es24() {
    int iscritti, votanti, bianche, nulle;
    cin >> iscritti >> votanti >> bianche >> nulle;
    cout << (float)votanti / iscritti * 100 << endl;
    cout << (float)bianche / votanti * 100 << endl;
    cout << (float)nulle / votanti * 100 << endl;
}

void es25() {
    int stipendio = 10, totale = 0;
    for (int i = 0; i < 22; i++) {
        totale += stipendio;
        stipendio *= 2;
    }
    cout << totale << endl;
}

void es26() {
    int n, somma = 0, d = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        somma += d;
        d += 2;
    }
    cout << somma << endl;
}

void es27() {
    int n, a = 1, b = 1, c;
    cin >> n;
    if (n <= 2) {
        cout << 1 << endl;
        return;
    }
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << b << endl;
}

void es28() {
    int n, a = 3;
    cin >> n;
    for (int i = 1; i <= n; i++)
        a = 2 * a + 1;
    cout << a << endl;
}

void es29() {
    int n;
    float v, max = 0, media = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v;
        media += v;
        if (v > max) max = v;
    }
    media /= n;
    float ea = (max - media) / 2;
    float er = ea / media;
    float ep = er * 100;
    cout << ea << endl << er << endl << ep << endl;
}

void es30() {
    int n, v = 1;
    cin >> n;
    while (v <= n)
        v *= 2;
    cout << v << endl;
}

void es31() {
    int g, sett, v;
    int max = 0, gmax = 0;
    int somma = 0, cnt = 0;
    int sommaDom = 0, dom = 0;

    while (true) {
        cin >> g;
        if (g == 0) break;
        cin >> sett >> v;

        if (v > max) {
            max = v;
            gmax = g;
        }
        somma += v;
        cnt++;
        if (sett == 7) {
            sommaDom += v;
            dom++;
        }
    }

    cout << gmax << endl;
    cout << (float)somma / cnt << endl;
    if (dom > 0)
        cout << (float)sommaDom / dom << endl;
}

void es32() {
    int p, c, d;
    int cont = 2;
    cin >> p >> c;
    d = c - p;
    while (true) {
        cin >> c;
        if (c == 999) break;
        if (c - p != d) {
            cout << "NO" << endl;
            return;
        }
        p = c;
        cont++;
    }
    cout << cont << endl;
}

void es33() {
    int n, m, ab, tot = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        int reg = 0;
        for (int j = 0; j < m; j++) {
            cin >> ab;
            reg += ab;
        }
        cout << reg << endl;
        tot += reg;
    }
    cout << tot << endl;
}

int main() {

    es20();
    es21();
    es22();
    es23();
    es24();
    es25();
    es26();
    es27();
    es28();
    es29();
    es30();
    es31();
    es32();
    es33();

    return 0;

}