#include <iostream>

using namespace std;

struct cladire {
    unsigned char numar;
    char* culoare;
    float inaltime;
    int nr_etaje;
    bool deschisa;
};


void afisareCladire(cladire a) {
    cout << a.numar << " " << a.culoare << " " << a.inaltime << " " << a.nr_etaje << " " << a.deschisa;
}


void main() {
    std::cout << "hello word!" << std::endl; //new line 
    cladire c;
    cout << sizeof(c);
    c.inaltime = 30.4;
    c.deschisa = true;
    c.nr_etaje = 10;
    c.culoare = new char[strlen("Maro") + 1];
    c.numar = 'A';
    strcpy_s(c.culoare, strlen("Maro") + 1, "Maro");

    afisareCladire(c);
    delete[]c.culoare; //memory leak

}