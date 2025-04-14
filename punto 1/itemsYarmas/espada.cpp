#include "espada.h"

//Constructor
Espada:: Espada(const string& nombre, int daño, int duracion, int nivel_de_uso, float peso, bool espada_cortante, int filo_espada): ArmaCombate(nombre, daño, duracion, nivel_de_uso, peso), cortante(espada_cortante), filo(filo_espada) {}

//Getters
bool Espada:: getCortante() { return cortante; }
int Espada:: getFilo() { return filo; }

//Metodos
void Espada:: mostrarInfo() {
    cout << "- Arma -> ESPADA "<< endl;
    cout << "- Daño -> " << daño << endl;
    cout << "- Duración -> " << duracion << endl;
    cout << "- Nivel de uso -> " << nivel << endl;
    cout << "- Peso -> " << peso << endl;
    cout << "- Filo -> " << filo << endl;
    
    cout << "------------------------------" << endl;
}


void Espada:: usar() {
    cout << "Usando la Espada... "<< endl;
    filo -= 10;
}


//Metodo virtual puro heredado
void Espada:: reparar(int daño_agregado, int duracion_agregada) {
    cout << "Reparando la Espada..." << endl;
    //Actualizo el daño, la duración, y el filo y defino cortante como true
    daño += daño_agregado;
    filo += 10;
    cortante = true;
    duracion += duracion_agregada;
    cout << "NUEVOS VALORES: \n -> DAÑO -> " << daño << "\n -> DURACION (minutos) -> " << duracion << endl;
}

void Espada:: desafilar(){
    cout << "Se ha desafilado la espada por completo..." << endl;
    cortante = false;
}




