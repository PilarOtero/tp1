#include "paladin.h"

//Constructor
Paladin:: Paladin(const string& nombre_paladin, int nivel_paladin, int vida_paladin, int fuerza_paladin, bool experiencia_paladin, pair<shared_ptr<Util>, shared_ptr<Util>> armas_paladin, const string& habilidad_paladin, int comodines_paladin): Guerrero(nombre_paladin, nivel_paladin, vida_paladin, fuerza_paladin, experiencia_paladin, armas_paladin, habilidad_paladin), comodines(comodines_paladin) {}

//Getters
int Paladin:: getComodines() { return comodines; }

//Metodos
void Paladin:: mostrarInfo() {
    cout << "GUERRERO - PALADIN" << endl;
    cout << "Nombre -> " << nombre << endl;
    cout << "Nivel -> " << nivel << endl;
    cout << "Vida -> " << vida << endl;
    cout << "Fuerza -> " << fuerza << endl;
    cout << "Habilidad -> " << habilidad << endl;
    cout << "Comodines -> " << comodines << endl;

    if (experiencia == true) {
        cout << "El Paladin tiene experiencia" << endl;
    }
    else {
        cout << "El Paladin es inexperto" << endl;
    }
    cout << "------------------------------" << endl;
}

void Paladin:: usarComodin() {
    fuerza += 100;
    comodines --;

    cout << nombre << " ha usado un comodin. COMODINES RESTANTES -> " << comodines << endl;
}