#include "conjurador.h"

//Constructor
Conjurador:: Conjurador(const string& nombre_conjurador, int nivel_conjurador, int vida_conjurador, int fuerza_conjurador, const string& poder_conjurador, bool experiencia_conjurador, pair<shared_ptr<Util>, shared_ptr<Util>> armas_conjurador, const string& conjuroSecreto_conjurador): Mago(nombre_conjurador, nivel_conjurador, vida_conjurador, fuerza_conjurador, poder_conjurador, experiencia_conjurador, armas_conjurador), conjuroSecreto(conjuroSecreto_conjurador) {}

//Getter
string Conjurador:: getConjuroSecreto() { return conjuroSecreto; }
bool Conjurador:: getTieneConjuros() { return tieneConjuros; }

//Metodos
void Conjurador:: mostrarInfo() {
    cout << "MAGO - CONJURADOR " << endl;
    cout << "- Nombre -> " << nombre << endl;
    cout << "- Nivel -> " << nivel << endl;
    cout << "- Vida -> " << vida << endl;
    cout << "- Fuerza -> " << fuerza << endl;
    cout << "- Poder -> " << poder << endl;
    
    if (experiencia == true) {
        cout << "El Conjurador tiene experiencia" << endl;
    }
    else {
        cout << "El Conjurador es inexperto" << endl;
    }
    
    if (tieneConjuros){
        cout << "El Conjurador tiene conjuros secretos" << endl;
    }
    else {
        cout << "El Conjurador no tiene conjuros secretos" << endl;
    }
    cout << "------------------------------" << endl;
}