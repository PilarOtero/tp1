#include "utils2.h"

//CLASE MAGO
//Constructor
Mago:: Mago(const string& nombre_mago, int nivel_mago, int vida_mago, int fuerza_mago, const string& poder_mago, bool experiencia_mago, pair<unique_ptr<Util>, unique_ptr<Util>> armas_mago){
    nombre = nombre_mago; 
    nivel = nivel_mago;
    vida = vida_mago; 
    fuerza = fuerza_mago;
    poder = poder_mago;
    experiencia = experiencia_mago;
    armas = move(armas_mago);
}

//Getters
string Mago:: getNombre() { return nombre; }
int Mago:: getNivel() { return nivel; }
int Mago:: getVida() { return vida; }
int Mago:: getFuerza() { return fuerza; }
const pair<unique_ptr<Util>, unique_ptr<Util>>& Mago:: getArmas() const { return armas; }

//Metodos
void Mago:: usarPoder() {
    cout << nombre << " ha usado su poder: " << poder << endl;
}

void Mago:: morir() {
    //Defino la fuerza y la vida en 0
    vida = 0;
    fuerza = 0;
    cout << nombre << " ha muerto." << endl;
}

void Mago:: revivir(int agregado_vida) {
    //Se agrega vida al Mago
    vida += agregado_vida;
    cout << nombre << " ha revivido. VIDA (años) -> " << vida << endl;
}

void Mago:: evolucionar(int daño_agregado, int vida_agregada) {
    //Evoluciono algunos aspectos del Mago
    nivel++;
    fuerza += daño_agregado;
    vida += vida_agregada;
    cout << "El Mago " << nombre << " ha evolucionado. NIVEL -> " << nivel << "\nVIDA ->" << vida << "\nFUERZA -> " << fuerza << endl;
}

void Mago:: involucionar(int daño_reducido, int vida_reducida){
    //Reduzco el valor de algunos aspectos del Mago
    fuerza -= daño_reducido;
    vida -= vida_reducida;
    cout << nombre << " ha involucionado. NIVEL -> " << nivel << "\nVIDA-> " << vida << endl;
    if (vida <= 0) {
        vida = 0;
        cout << nombre << " ha muerto." << endl;
    }
}

void Mago:: agregarVida(int vida_agregada) {
    //Aumento la vida del Mago en las unidades pasadas por parÁmetro
    vida += vida_agregada;
    cout << "Al Mago " << nombre << "se le ha agregado vida. VIDA (años) -> " << vida << endl;
}


//CLASE GUERRERO
//Constructor
Guerrero:: Guerrero(const string& nombre_guerrero, int nivel_guerrero, int vida_guerrero, int fuerza_guerrero, bool experiencia_guerrero, pair<unique_ptr<Util>, unique_ptr<Util>> armas_guerrero, const string& habilidad_guerrero){
    nombre = nombre_guerrero;
    nivel = nivel_guerrero;
    vida = vida_guerrero;
    fuerza = fuerza_guerrero;
    experiencia = experiencia_guerrero;
    armas = move(armas_guerrero);
    habilidad = habilidad_guerrero;
}

//Getters
string Guerrero:: getNombre() { return nombre; }
int Guerrero:: getNivel() { return nivel; }
int Guerrero:: getVida() { return vida; }
int Guerrero:: getFuerza() { return fuerza; }
string Guerrero:: getHabilidad() { return habilidad; }
const pair<unique_ptr<Util>, unique_ptr<Util>>& Guerrero:: getArmas() const { return armas; }

void Guerrero:: morir(){
    //Defino la fuerza y la vida en 0
    vida = 0;
    fuerza = 0;
    cout << "El Guerrero " << nombre << " ha muerto." << endl;
}

void Guerrero:: evolucionar(int daño_agregado, int vida_agregada){
    //Evoluciono algunos aspectos del Guerrero
    nivel ++;
    vida += vida_agregada;
    fuerza += daño_agregado;
    cout << "El Guerrero " << nombre << " ha evolucionado. NIVEL -> " << nivel << "\nVIDA ->" << vida << "\nFUERZA -> " << fuerza << endl;
}

void Guerrero:: usarHabilidad(){
    cout << nombre << " esta usando su habilidad: " << habilidad << endl;
}

void Guerrero:: cambiarHabilitad(const string& nueva_habilidad){
    //Actualizo el valor de la habilidad por el nuevo
    habilidad = nueva_habilidad;
    cout << "El Guerrero " << nombre << " ha cambiado su habilidad: " << habilidad << endl;
}






