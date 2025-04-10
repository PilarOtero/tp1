#include "baston.h"

//Constructor
Baston:: Baston(const string& nombre, const string& poder, int daño, int nivel_de_uso, int duracion, bool magiaActiva): ItemMagico(nombre, poder, daño, nivel_de_uso, duracion, magiaActiva) {}


//Getter
bool Baston:: getContrincantePierdeTurno() { return contrincantePierdeTurno; }

//Metodos
void Baston:: mostrarInfo() {
    cout << "- Item -> BASTON " << endl;
    cout << "- Daño -> " << daño << endl;
    cout << "- Duracion (minutos) -> " << duracion << endl;
    cout << "- Nivel de uso -> " << nivel << endl;
    cout << "- Poder -> " << poder << endl;

    if (magiaActiva == true) {
        cout << "- Magia ACTIVA " << endl;
    }
    else {
        cout << "- Magia INACTIVA " << endl;
    }
    
    cout << "------------------------------" << endl;
}

void Baston:: mostrarContrincanteTurno(){
    if (contrincantePierdeTurno == true) {
        cout << "Tuviste Suerte. El Bastin hizo que tu contrincante pierda el turno!" << endl;
    }
    else {
        cout << "Lamentablemente, el Baston no te trajo suerte..." << endl;
    }

}