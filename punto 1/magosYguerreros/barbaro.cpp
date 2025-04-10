#include "barbaro.h"

//Constructor
Barbaro:: Barbaro(const string& nombre_barbaro, int nivel_barbaro, int vida_barbaro, int fuerza_barbaro, bool experiencia_barbaro,  pair<shared_ptr<Util>, shared_ptr<Util>> armas_barbaro, const string& habilidad_barbaro): Guerrero(nombre_barbaro, nivel_barbaro, vida_barbaro, fuerza_barbaro, experiencia_barbaro, armas_barbaro, habilidad_barbaro) {}

//Getters
int Barbaro:: getVelocidad() { return velocidad; }
bool Barbaro:: getFurioso() { return furioso; }

//Metodos
void Barbaro:: mostrarInfo() {
    cout << "GUERRERO - BARBARO " << endl;
    cout << "- Nombre -> " << nombre << endl;
    cout << "- Nivel -> " << nivel << endl;
    cout << "- Vida -> " << vida << endl;
    cout << "- Fuerza -> " << fuerza << endl;
    cout << "- Habilidad -> " << habilidad << endl;
    cout << "- Velocidad -> " << velocidad << endl;

    if (furioso == true){
        cout << "El Barbaro esta furioso y ha aumentado su fuerza!" << endl;
    }
    else {
        cout << "El Barbaro no esta furioso" << endl;
    }
    
    if (experiencia == true) {
        cout << "El Barbaro tiene experiencia" << endl;
    }
    else {
        cout << "El Barbaro es inexperto" << endl;
    }
    
    cout << "------------------------------" << endl;
}

void Barbaro:: estaFurioso(int furia) {
    fuerza += furia;
    cout << "FUERZA + FURIA -> " << fuerza << endl;
}
