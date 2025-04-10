#include "hachaSimple.h"

//Constructor
HachaSimple::HachaSimple(const string& nombre, int daño, int duracion, int nivel_de_uso, float peso, bool hachaS_afilada): ArmaCombate(nombre, daño, duracion, nivel_de_uso, peso), afilada(hachaS_afilada) {}

//Getter
bool HachaSimple::getAfilada() { return afilada; }

//Metodos
void HachaSimple:: mostrarInfo() {
    cout << "- Arma -> HACHA SIMPLE " << endl;
    cout << "- Daño -> " << daño << endl;
    cout << "- Duración -> " << duracion << endl;
    cout << "- Nivel de uso -> " << nivel << endl;
    cout << "- Peso -> " << peso << endl;
    cout << "------------------------------" << endl;
}


void HachaSimple:: usar() {
    cout << "Usando el Hacha Simple" << endl;
}

void HachaSimple:: reparar(int daño_agregado, int duracion_agregada) {
    cout << "Reparando el Hacha Simple...\n..." << endl;
    daño += daño_agregado;
    duracion += duracion_agregada;
    afilada = true;

    cout << "El Hacha Simple ha sido reparada!" << endl;
    cout << "NUEVOS VALORES: \n -> DAÑO -> " << daño << "\n -> DURACIÓN (minutos) -> " << duracion << endl;
}