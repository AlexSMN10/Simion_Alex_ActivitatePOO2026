#include <iostream>

using namespace std;

class Prajitura {
public:
	char* denumire;
	float pret;
	int nrIngrediente;
	string* ingrediente;
	int cantitate;
	bool dePost;
	Prajitura() {
		this->denumire = new char[strlen("Tiramisu") + 1];
		strcpy_s(denumire, strlen("Tiramisu") + 1, "Tiramisu");
		this->pret = 34;
		this->nrIngrediente = 3;
		this->ingrediente = new string[this->nrIngrediente];
		this->ingrediente[0] = "Mascarpone";
		this->ingrediente[1] = "Cafea";
		this->ingrediente[2] = "Piscoturi";
		this->cantitate = 500;
		this->dePost = false;
	}
	Prajitura(char* denumire, float pret) {
		this->denumire = new char[strlen(denumire) + 1];
		strcpy_s(this->denumire, strlen(denumire) + 1, denumire);
		this->pret = pret;
		this->nrIngrediente = 3;
		this->ingrediente = new string[this->nrIngrediente];
		this->ingrediente[0] = "Mascarpone";
		this->ingrediente[1] = "Cafea";
		this->ingrediente[2] = "Piscoturi";
		this->cantitate = 500;
		this->dePost = false;
	}
	void afisare() {
		cout << "Denumire: " << this->denumire << endl;
		cout << "Pret: " << this->pret << endl;
		cout << "Numarul ingredientelor: " << this->nrIngrediente << endl;
		cout << "Ingredientele: ";
		for (int i = 0;i < this->nrIngrediente;i++) {
			cout << ingrediente[i] << ", ";
		}
		cout << endl;
		cout << "Cantitatea: " << this->cantitate << endl;
		cout << "De post: " << (this->dePost ? "DA" : "NU") << endl;
	}
	float pretPeGram() {
		if (this->cantitate == 0) {
			return 0;
		}
		else {
			return this->pret / this->cantitate;
		}
	}
	void modificaDenumire(const char* denumire) {
		delete this->denumire;
		this->denumire = new char[strlen(denumire) + 1];
		strcpy_s(this->denumire, strlen(denumire) + 1, denumire);

	}
};

void main() {
	Prajitura p;
	Prajitura* prajituri;
	prajituri = new Prajitura[3];
	prajituri[1].pret = 15;
	prajituri[2].cantitate = 800;
	prajituri[0].modificaDenumire("Amandina");
	prajituri[1].modificaDenumire("Tort");
	p.afisare();
	cout << "Pret per gram: " << p.pretPeGram() << endl;
	for (int i = 0;i < 3;i++) {
		cout << prajituri[i].denumire << " " << prajituri[i].pretPeGram() << endl;
	}

}