#include "baston.h"

//Constructor
Baston:: Baston(const string& nombre, const string& poder, int daño, int nivel_de_uso, int duracion, bool magiaActiva, bool trae_suerte_baston): ItemMagico(nombre, poder, daño, nivel_de_uso, duracion, magiaActiva), traeSuerte(trae_suerte_baston) {}

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

void Baston:: mostrarSuerte(){
    if (traeSuerte == true) {
        cout << "Tuviste Suerte. El Baston ha aumentado su duracion" << endl;
        duracion += 10;
        cout << "DURACION ->" << duracion << endl;
    }
    else {
        cout << "Lamentablemente, el Baston no te trajo suerte..." << endl;
    }

}