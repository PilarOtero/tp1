#include "amuleto.h"

//Constructor
Amuleto::Amuleto(const string& nombre, const string& poder, int daño, int nivel_de_uso, int duracion, bool magiaActiva, bool suerte_amuleto): ItemMagico(nombre, poder, daño, nivel_de_uso, duracion, magiaActiva), traeSuerte(suerte_amuleto) {}

//Getter
bool Amuleto:: getTraeSuerte() {return traeSuerte;}

//Metodos
void Amuleto:: mostrarInfo() {
    cout << "- Item -> AMULETO " << endl;
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

void Amuleto:: mostrarSuerte() {
    if (traeSuerte == true) {
        cout << "El amuleto trae suerte!" << endl;
    }
    else {
        cout << "El amuleto no trae suerte... tendras consecuencias mas adelante" << endl;
    }
}