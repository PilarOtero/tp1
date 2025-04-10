#include "caballero.h"

//Constructor
Caballero:: Caballero(const string& nombre_caballero, int nivel_caballero, int vida_caballero, int fuerza_caballero, bool experiencia_caballero, pair<shared_ptr<Util>, shared_ptr<Util>> armas_caballero, const string& habilidad_caballero, const string& armaSecreta_caballero, const string& tipoDeCaballero_caballero): Guerrero(nombre_caballero, nivel_caballero, vida_caballero, fuerza_caballero, experiencia_caballero, armas_caballero, habilidad_caballero), armaSecreta(armaSecreta_caballero), tipoDeCaballero(tipoDeCaballero_caballero) {}

//Getters
string Caballero:: getArmaSecreta() { return armaSecreta; }
string Caballero:: getTipoDeCaballero() { return tipoDeCaballero; }

//Metodos
void Caballero:: mostrarInfo() {
    cout << "GUERRERO - CABALLERO" << endl;
    cout << "Nombre -> " << nombre << endl;
    cout << "Nivel -> " << nivel << endl;
    cout << "Vida -> " << vida << endl;
    cout << "Fuerza -> " << fuerza << endl;
    cout << "Habilidad -> " << habilidad << endl;
    cout << "Arma Secreta -> " << armaSecreta << endl;
    cout << "Tipo de Caballero -> " << tipoDeCaballero << endl;

    if (experiencia == true) {
        cout << "El Caballero tiene experiencia" << endl;
    }
    else {
        cout << "El Caballero es inexperto" << endl;
    }
    cout << "------------------------------" << endl;
}

void Caballero:: usarFuerzaSecreta() {
    fuerza += 100;
    cout << nombre << " ha usado su arma secreta. FUERZA -> " << fuerza << endl;
}