#include "amuleto.h"
#include "baston.h"
#include "pocion.h"
#include "libroDeHechizos.h"
#include "lanza.h"
#include "hachaDoble.h"
#include "hachaSimple.h"
#include "espada.h"
#include "garrote.h"
#include "functions.h"

//Utilizo & porque si no lo hago, estaria pasando por valor (pero unique_ptr no se puede copiar), por lo que paso los parametros por referencia

void handle_mostrar_items(unique_ptr<Baston>& baston, unique_ptr<Pocion>& pocion) {
    cout << "SECCION ITEMS MÁGICOS" << endl;
    baston->mostrarInfo();
    pocion->mostrarInfo();
}

void handle_mostrar_armas(unique_ptr<Espada>& espada, unique_ptr<Garrote>& garrote, unique_ptr<HachaSimple>& hacha) {
    cout << "------------------------------\nSECCIÓN ARMAS DE COMBATE" << endl;   
    espada->mostrarInfo();
    garrote->mostrarInfo();
    hacha->mostrarInfo();
}

void test_evolucionar_item(unique_ptr<Baston>& baston){
    cout << "TEST DE EVOLUCIÓN - ITEM MÁGICO" << endl;
    
    baston->usar();
    baston->evolucionar(200,15);
    cout << "------------------------------" << endl;
}

void test_romper_item(unique_ptr<Pocion>& pocion){
    cout << "TEST ROMPER - ITEM MÁGICO" << endl;
    
    pocion->usar();
    pocion->romper();
    cout << "------------------------------" << endl;
}

void test_ver_peso_arma(unique_ptr<Espada>& espada){
    cout << "TEST DE PESO - ARMA" << endl;
    
    espada->usar();
    cout << "ESPADA -> PESO " << espada->getPeso() << " kg" << endl;
    cout << "------------------------------" << endl;
}

void test_reparar_garrote(unique_ptr<Garrote>& garrote){
    cout << "TEST DE REPARO - ARMA" << endl;
    garrote->usar();
    garrote->reparar(20, 15); 
    cout << "------------------------------" << endl;
}


