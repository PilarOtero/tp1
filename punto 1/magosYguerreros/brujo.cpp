#include "brujo.h"

//Constructor
Brujo:: Brujo(const string& nombre_brujo, int nivel_brujo, int vida_brujo, int fuerza_brujo, const string& poder_brujo, bool experiencia_brujo, pair<unique_ptr<Util>, unique_ptr<Util>> armas_brujo, bool futuro_brujo, const string& magia_brujo): Mago(nombre_brujo, nivel_brujo, vida_brujo, fuerza_brujo, poder_brujo, experiencia_brujo, move(armas_brujo)), veElFuturo(futuro_brujo), tipoDeMagia(magia_brujo) {}

//Getter
bool Brujo:: getVeElFuturo() { return veElFuturo; }
string Brujo:: getTipoDeMagia() { return tipoDeMagia; }


//Metodos
void Brujo:: mostrarInfo(){
    cout << "MAGO - BRUJO " << endl;
    cout << "- Nombre -> " << nombre << endl;
    cout << "- Nivel -> " << nivel << endl;
    cout << "- Vida -> " << vida << endl;
    cout << "- Fuerza -> " << fuerza << endl;
    cout << "- Poder -> " << poder << endl;
    cout << "- Tipo de Magia -> " << tipoDeMagia << endl;
    
    if (experiencia == true) {
        cout << "El Brujo tiene experiencia" << endl;
    }
    else {
        cout << "El Brujo es inexperto" << endl;
    }
    cout << "------------------------------" << endl;

}