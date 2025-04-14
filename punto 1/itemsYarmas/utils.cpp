#include "utils.h"

using namespace std;

//ITEMS MÁGICOS
//Constructor
ItemMagico:: ItemMagico(const string& nombre_item, const string& poder_item, int daño_item, int duracion_item, int nivel_de_uso_item, bool magiaActiva_item){
    nombre = nombre_item;
    daño = daño_item;
    duracion = duracion_item;
    nivel = nivel_de_uso_item;
    poder = poder_item; 
    magiaActiva = magiaActiva_item;
}

//Getters
string ItemMagico:: getNombre() { return nombre; }
int ItemMagico:: getDaño() { return daño; }
int ItemMagico:: getDuracion() { return duracion; }
string ItemMagico:: getPoder() { return poder; }
bool ItemMagico:: getMagiaActiva() { return magiaActiva; }

void ItemMagico:: usar() {
    cout << "Usando Item -> " << nombre << endl;
} 

void ItemMagico:: evolucionar(int daño_agregada, int duracion_agregada) {
    //Mejoro el daño y la duración del Item
    cout << "Evolucionando el item " << nombre << "..." << endl;
    daño += daño_agregada; 
    duracion += duracion_agregada; 
    cout << "NUEVOS VALORES: \n -> DAÑO: " << daño << "\n -> DURACIÓN: " << duracion << endl;
}

void ItemMagico:: involucionar(int daño_reducido, int duracion_reducida ){
    cout << "El Item " << nombre << " ha sido dañado y ha perdido utilidad" << endl;
    cout << "Involucionando..." << endl;
    
    //Bajo el daño y la duración del Item
    daño -= daño_reducido;
    duracion -= duracion_reducida;   
    cout << "NUEVOS VALORES: \n -> DAÑO: " << daño << "\n -> DURACIÓN: " << duracion << endl;
    
    //Si alguno de los valores es mejor o igual a 0, el Item ha sido destruido
    if (daño <= 0 || duracion <= 0){
        cout << "El Item " << nombre << " ha sido destruido ya que se ha quedado sin magia!" << endl;
        magiaActiva = false;
    }
}

void ItemMagico:: romper() {
    //Actualizo estos valores a 0 para representar que el Item ha sido roto.
    daño = 0;
    duracion = 0;
    magiaActiva = false;

    cout << "El Item " << nombre<< " ha sido roto!" << endl;
    cout << "DAÑO -> " << daño <<  "\nDURACION -> " << duracion << endl;

}

//ARMAS DE COMBATE
//Constructor
ArmaCombate:: ArmaCombate(const string& nombre_arma, int daño_arma, int duracion_arma, int nivel_de_uso_arma, float peso_arma){
    nombre = nombre_arma; 
    daño = daño_arma;
    duracion = duracion_arma;
    nivel = nivel_de_uso_arma;
    peso = peso_arma; 
}

//Getters
string ArmaCombate:: getNombre() { return nombre; }
int ArmaCombate:: getDaño() { return daño; }
int ArmaCombate:: getDuracion() { return duracion; }
float ArmaCombate:: getPeso() { return peso; }

void ArmaCombate:: evolucionar(int daño_agregado, int duracion_agregada) {
    cout << "Evolucionando la Lanza ..." << endl;

    //Mejoro el daño y la duración del Arma
    daño += daño_agregado;
    duracion += duracion_agregada;
    cout << "NUEVOS VALORES: \n -> DAÑO -> " << daño << "\n -> DURACIÓN (minutos) -> " << duracion << endl;
}

void ArmaCombate:: involucionar(int daño_reducido, int duracion_reducida){
    cout << "El Arma " << nombre << " ha sido dañada y ha perdido utilidad" << endl;
    cout << "Involucionando..." << endl;
    
    //Bajo el daño y la duración del Arma
    daño -= daño_reducido;
    duracion -= duracion_reducida;
    
    cout << "NUEVOS VALORES: \n -> DAÑO -> " << daño << "\n -> DURACIÓN (minutos) -> " << duracion << endl;
    
    //Si alguno de estos es menor o igual a 0, el Arma se ha roto
    if (daño <= 0 || duracion <= 0){
        cout << "El Arma " << nombre << " ha sido destruida" << endl;
    }
} 
