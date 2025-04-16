#include "hechicero.h"

//Constructor
Hechicero:: Hechicero(const string& nombre_hechicero, int nivel_hechicero, int vida_hechicero, int fuerza_hechicero, const string& poder_hechicero, bool experiencia_hechicero, pair<unique_ptr<Util>, unique_ptr<Util>> armas_hechicero, int edad_hechicero) : Mago(nombre_hechicero, nivel_hechicero, vida_hechicero, fuerza_hechicero, poder_hechicero, experiencia_hechicero, move(armas_hechicero)), edad(edad_hechicero) {}

//Getter
int Hechicero:: getEdad() { return edad; }

//Metodos
void Hechicero:: mostrarInfo() {
    cout << "MAGO - HECHICERO " << endl;
    cout << "- Nombre -> " << nombre << endl;
    cout << "- Nivel -> " << nivel << endl;
    cout << "- Vida -> " << vida << endl;
    cout << "- Fuerza -> " << fuerza << endl;
    cout << "- Poder -> " << poder << endl;
    cout << "- Edad -> " << edad << endl;
    
    if (experiencia == true) {
        cout << "El Hechicero tiene experiencia" << endl;
    }
    else {
        cout << "El Hechicero es inexperto" << endl;
    }
    cout << "------------------------------" << endl;
}