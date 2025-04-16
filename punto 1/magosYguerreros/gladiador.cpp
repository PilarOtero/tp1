#include "gladiador.h"

//Constructor
Gladiador:: Gladiador(const string& nombre_gladiador, int nivel_gladiador, int vida_gladiador, int fuerza_gladiador, bool experiencia_gladiador, pair<unique_ptr<Util>, unique_ptr<Util>> armas_gladiador, const string& habilidad_gladiador, int honor_gladiador, bool escudo_gladiador, int velocidad_gladiador): Guerrero(nombre_gladiador, nivel_gladiador, vida_gladiador, fuerza_gladiador, experiencia_gladiador, move(armas_gladiador), habilidad_gladiador), honor(honor_gladiador), escudo(escudo_gladiador), velocidad(velocidad_gladiador) {}

//Getters
int Gladiador:: getHonor() { return honor; }
bool Gladiador:: getEscudo() { return escudo; }
int Gladiador:: getVelocidad() { return velocidad; }

//Metodos
void Gladiador:: mostrarInfo() {
    cout << "GUERRERO - GLADIADOR" << endl;
    cout << "Nombre -> " << nombre << endl;
    cout << "Nivel -> " << nivel << endl;
    cout << "Vida -> " << vida << endl;
    cout << "Fuerza -> " << fuerza << endl;
    cout << "Habilidad -> " << habilidad << endl;
    cout << "Honor -> " << honor << endl;
    cout << "Escudo -> " << escudo << endl;
    cout << "Velocidad -> " << velocidad << endl;

    if (experiencia == true) {
        cout << "El Gladiador tiene experiencia" << endl;
    }
    else {
        cout << "El Gladiador es inexperto" << endl;
    }
    cout << "------------------------------" << endl;
}

void Gladiador:: usarEscudo() {
    if (escudo == true) {
        cout << nombre << " ha usado su escudo. ESCUDO -> " << escudo << endl;
    }
    else {
        cout << nombre << " no tiene escudo." << endl;
    }
}

