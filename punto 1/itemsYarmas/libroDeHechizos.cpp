#include "libroDeHechizos.h"

//Constructor
LibroDeHechizos:: LibroDeHechizos(const string& nombre, const string& poder, int daño, int nivel_de_uso, int duracion, bool magiaActiva, vector<string> hechizos_libro): ItemMagico(nombre, poder, daño, nivel_de_uso, duracion, magiaActiva), hechizos(hechizos_libro) {}

//Getter
vector<string> LibroDeHechizos:: getHechizos() { return hechizos; }

void LibroDeHechizos:: mostrarInfo() {
    cout << "- Item -> LIBRO DE HECHIZOS " << endl;
    cout << "- Daño -> " << daño << endl;
    cout << "- Duración (minutos) -> " << duracion << endl;
    cout << "- Nivel de uso -> " << nivel << endl;
    cout << "- Poder -> " << poder << endl;

    if (magiaActiva == true) {
        cout << "- Magia ACTIVA " << endl;
    }
    else {
        cout << "- Magia INACTIVA " << endl;
    }
    
    cout << "\nHechizos disponibles " << endl;
    for (const auto& hechizo : hechizos) {
        cout << "-> " << hechizo << endl;
    }

    cout << "------------------------------" << endl;
}
