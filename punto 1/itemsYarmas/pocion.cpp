#include "pocion.h"

//Constructor
Pocion:: Pocion(const string& nombre, const string& poder, int daño, int nivel, int duracion, bool magiaActiva, const string& color_pocion) : ItemMagico(nombre, poder, daño, nivel, duracion, magiaActiva), color(color_pocion) {}

//Getter
string Pocion:: getColor() { return color; }

//Metodos
void Pocion:: mostrarInfo() {
    cout << "- Item -> POCION " << endl;
    cout << "- Daño -> " << daño << endl;
    cout << "- Duracion (minutos) -> " << duracion << endl;
    cout << "- Nivel de uso -> " << nivel << endl;
    cout << "- Poder -> " << poder << endl;
    cout << "- Color -> " << color << endl;

    if (magiaActiva == true) {
        cout << "- Magia ACTIVA " << endl;
    }
    else {
        cout << "- Magia INACTIVA " << endl;
    }
    cout << "------------------------------" << endl;
}

//VER LO DE LA VIDA
void Pocion:: pocion_magica() {
    if (color == "violeta"){
        cout << "Tuviste suerte... la pocion es violeta, por lo que se le ha mejorado su poder;" << endl;
        poder = "Ser invisible";
        cout << "NUEVO PODER -> " << poder << endl;   
    }
    else{
        cout << "Lamentablemente, la pocion no es violeta, por lo que no se le ha mejorado su poder..." << endl;
    }
}
