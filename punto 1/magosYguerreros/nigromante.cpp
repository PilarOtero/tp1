#include "nigromante.h"

//Constructor
Nigromante:: Nigromante(const string& nombre_nigromante, int nivel_nigromante, int vida_nigromante, int fuerza_nigromante, const string& poder_nigromante, bool experiencia_nigromante, pair<shared_ptr<Util>, shared_ptr<Util>> armas_nigromante, int absorcionVida_nigromante, int energiaMuerte_nigromante): Mago(nombre_nigromante,nivel_nigromante, vida_nigromante, fuerza_nigromante, poder_nigromante, experiencia_nigromante, armas_nigromante),absorcionDeVida(absorcionVida_nigromante),energiaMuerte(energiaMuerte_nigromante){}

//Getters
int Nigromante:: getAbsorcionDeVida() { return absorcionDeVida; }
int Nigromante:: getEnergiaMuerte() { return energiaMuerte; }

//Metodos
void Nigromante:: mostrarInfo() {
    cout << "MAGO - NIGROMANTE " << endl;
    cout << "- Nombre -> " << nombre << endl;
    cout << "- Nivel -> " << nivel << endl;
    cout << "- Vida -> " << vida << endl;
    cout << "- Fuerza -> " << fuerza << endl;
    cout << "- Poder -> " << poder << endl;
    cout << "- Capacidad de absorber energia de la Muerte -> " << "%" << energiaMuerte << endl;
    cout << "- Capacidad de absorber energia del enemigo -> " << "%" << absorcionDeVida << endl;

    if (experiencia == true) {
        cout << "El Nigromante tiene experiencia" << endl;
    }
    else {
        cout << "El Nigromante es inexperto" << endl;
    }
    cout << "------------------------------" << endl;
}

void Nigromante:: absorberEnergia(){
    cout << "El Nigromante ha absorbido energia de la muerte" << endl;
    vida += energiaMuerte;
    cout << "VIDA (años) -> " << vida << endl;
}