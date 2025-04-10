#include "lanza.h"

//Constructor
Lanza:: Lanza(const string& nombre, int daño, int duracion, int nivel_de_uso, float peso, int precision_lanza): ArmaCombate(nombre, daño, duracion, nivel_de_uso, peso), precision(precision_lanza) {}

//Getter
int Lanza:: getPrecision() { return precision; }


//Metodos
void Lanza:: mostrarInfo() {
    cout << "- Arma -> LANZA " << endl;
    cout << "- Daño -> " << daño << endl;
    cout << "- Duración -> " << duracion << endl;
    cout << "- Nivel de uso -> " << nivel << endl;
    cout << "- Peso -> " << peso << endl;
    cout << "- Precision ->" << precision << endl;
    cout << "------------------------------" << endl;
}


void Lanza:: usar() {
    cout << "Usando la Lanza" << endl;
}
void Lanza:: reparar(int daño_agregado, int duracion_agregada) {
    cout << "Reparando la Lanza...\n..." << endl;
    daño += daño_agregado;
    duracion += duracion_agregada;
    precision = 100; 

    cout << "La Lanza ha sido reparada!" << endl;
    cout << "NUEVOS VALORES: \n -> DAÑO -> " << daño << "\n -> DURACIÓN (minutos) -> " << duracion << endl;
}