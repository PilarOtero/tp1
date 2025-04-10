#include "mercenario.h"

//Constructor
Mercenario:: Mercenario(const string& nombre_mercenario, int nivel_mercenario, int vida_mercenario, int fuerza_mercenario, bool experiencia_mercenario, pair<shared_ptr<Util>, shared_ptr<Util>> armas_mercenario, const string& habilidad_mercenario, int precision_mercenario): Guerrero(nombre_mercenario, nivel_mercenario, vida_mercenario, fuerza_mercenario, experiencia_mercenario, armas_mercenario, habilidad_mercenario), precision(precision_mercenario) {}

//Getters
int Mercenario:: getPrecision() { return precision; }

//Metodos
void Mercenario:: mostrarInfo() {
    cout << "GUERRERO - MERCENARIO" << endl;
    cout << "Nombre -> " << nombre << endl;
    cout << "Nivel -> " << nivel << endl;
    cout << "Vida -> " << vida << endl;
    cout << "Fuerza -> " << fuerza << endl;
    cout << "Habilidad -> " << habilidad << endl;
    cout << "Precision -> " << precision << endl;

    if (experiencia == true) {
        cout << "El Mercenario tiene experiencia" << endl;
    }
    else {
        cout << "El Mercenario es inexperto" << endl;
    }
    cout << "------------------------------" << endl;
}

void Mercenario:: usarPrecision() {
    cout << nombre << " ha usado su precision. PRECISION -> " << precision << endl;
}

void Mercenario:: aumentarPrecision(int aumento) {
    precision += aumento;
    cout << nombre << " ha aumentado su precision. NUEVA PRECISION -> " << precision << endl;
}