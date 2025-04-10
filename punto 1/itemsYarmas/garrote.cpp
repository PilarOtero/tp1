#include "garrote.h"

//Constructor
Garrote:: Garrote(const string& nombre, int daño, int duracion, int nivel_de_uso, float peso, bool destructora): ArmaCombate(nombre, daño, duracion, nivel_de_uso, peso), destruye_armas(destructora) {}


//Getter
bool Garrote:: getDestruyeArmas() { return destruye_armas; }

//Metodos
void Garrote:: mostrarInfo() {
    cout << "- Arma -> GARROTE " << endl;
    cout << "- Daño -> " << daño << endl;
    cout << "- Duración -> " << duracion << endl;
    cout << "- Nivel de uso -> " << nivel << endl;
    cout << "- Peso -> " << peso << endl;
    
    if (destruye_armas == true){
        cout << "El Garrote puede destruir el arma del contrincante." << endl;
    }
    else{
        cout << "No destruye el arma del contrincante." << endl;
    }
    
    cout << "------------------------------" << endl;
}


void Garrote:: usar() {
    cout << "Usando el Garrote " << endl;
}

void Garrote:: reparar(int daño_agregado, int duracion_agregada) {
    cout << "Reparando el Garrote...\n..." << endl;
    daño += daño_agregado;
    duracion += duracion_agregada;
    destruye_armas = true;

    cout << "El Garrote ha sido reparado!" << endl;
    cout << "NUEVOS VALORES: \n -> DAÑO -> " << daño << "\n -> DURACIÓN (minutos) -> " << duracion << endl;
}