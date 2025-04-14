#include "hachaDoble.h"

//Constructor
HachaDoble:: HachaDoble(const string& nombre, int daño, int duracion, int nivel_de_uso, float peso): ArmaCombate(nombre, daño, duracion, nivel_de_uso, peso) {}


//Getter
bool HachaDoble:: getAfilada() { return afilada; }

//Metodos
void HachaDoble:: mostrarInfo() {
    cout << "- Arma -> HACHA DOBLE" << endl;
    cout << "- Daño -> " << daño << endl;
    cout << "- Duración -> " << duracion << endl;
    cout << "- Nivel de uso -> " << nivel << endl;
    cout << "- Peso -> " << peso << endl;

    if (afilada == true){
        cout << "El Hacha esta afilada." << endl;
    }
    else {
        cout << "El hacha no esta afilada." << endl;
    }
    cout << "------------------------------" << endl;
}


void HachaDoble:: usar() {
    cout << "Usando el Hacha Doble " << endl;
}

void HachaDoble:: reparar(int daño_agregado, int duracion_agregada) {
    cout << "Reparando el Hacha Doble...\n..." << endl;
    //Actualizo el daño, la duración y defino afilada como true
    daño += daño_agregado;
    duracion += duracion_agregada;
    afilada = true;

    cout << "El Hacha Doble ha sido reparada!" << endl;
    cout << "NUEVOS VALORES: \n -> DAÑO -> " << daño << "\n -> DURACIÓN (minutos) -> " << duracion << endl;
}