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


void handle_mostrar_items(shared_ptr<Baston> baston, shared_ptr<LibroDeHechizos> libro, shared_ptr<Pocion> pocion, shared_ptr<Amuleto> amuleto) {
    cout << "SECCION ITEMS MÁGICOS" << endl;
    baston->mostrarInfo();
    libro->mostrarInfo();
    pocion->mostrarInfo();
    amuleto->mostrarInfo();
}

void handle_mostrar_armas(shared_ptr<HachaSimple> hacha_simple, shared_ptr<HachaDoble> hacha_doble, shared_ptr<Lanza> lanza, shared_ptr<Espada> espada, shared_ptr<Garrote> garrote) {
    cout << "------------------------------\nSECCIÓN ARMAS DE COMBATE" << endl;
    hacha_simple->mostrarInfo();
    hacha_doble->mostrarInfo();
    lanza->mostrarInfo();    
    espada->mostrarInfo();
    garrote->mostrarInfo();

}

void test_evolucionar_item(shared_ptr<Baston> baston){
    cout << "TEST DE EVOLUCIÓN - ITEM MÁGICO" << endl;
    
    baston->usar();
    baston->evolucionar(200,15);
    cout << "------------------------------" << endl;
}

void test_involucionar_item(shared_ptr<LibroDeHechizos> libro){
    cout << "TEST DE INVOLUCIÓN - ITEM MÁGICO" << endl;
    
    libro->usar();
    libro->involucionar(1500,1000);
    cout << "------------------------------" << endl;
}

void test_romper_item(shared_ptr<Pocion> pocion){
    cout << "TEST ROMPER - ITEM MÁGICO" << endl;
    
    pocion->usar();
    pocion->romper();
    cout << "------------------------------" << endl;
}

void test_ver_ma_pocion(shared_ptr<Pocion> pocion){
    cout << "TEST VER SI ES MÁGICO ACTIVO - ITEM MÁGICO" << endl;
    
    if (pocion->getMagiaActiva() == true) {
        cout << "-> MAGIA ACTIVA " << endl;
    }
    else {
        cout << "-> MAGIA INACTIVA " << endl;
    }
    cout << "------------------------------" << endl;
}

void test_evolucionar_arma(shared_ptr<HachaSimple> hacha_simple){
    cout << "TEST DE EVOLUCIÓN - ARMA" << endl; 
    
    hacha_simple->usar();
    hacha_simple->evolucionar(1400,153);
    cout << "------------------------------" << endl;
}

void test_ver_peso_arma(shared_ptr<Espada> espada){
    cout << "TEST DE PESO - ARMA" << endl;
    
    espada->usar();
    cout << "ESPADA -> PESO " << espada->getPeso() << " kg" << endl;
    cout << "------------------------------" << endl;
}

void test_involucionar_garrote(shared_ptr<Garrote> garrote){
    cout << "TEST DE INVOLUCIÓN - ARMA" << endl;
    
    garrote->usar();
    garrote->involucionar(150,45);
    cout << "------------------------------" << endl;
}

void test_reparar_garrote(shared_ptr<Garrote> garrote){
    cout << "TEST DE REPARO - ARMA" << endl;
    garrote->usar();
    garrote->reparar(20, 15); 
    cout << "------------------------------" << endl;
}

void test_espada_cortante(shared_ptr<Espada> espada){
    cout << "TEST DE ESPADA CORTANTE" << endl;
    espada->usar();
    espada->desafilar();
    espada->reparar(20, 15);
    cout << "------------------------------" << endl;
}

void test_pocion_magica(shared_ptr<Pocion> pocion){
    cout << "TEST POCIÓN VIOLETA" << endl;
    pocion->usar();
    pocion->pocion_magica();
    cout << "------------------------------" << endl;
}

void test_filo_espada(shared_ptr<Espada> espada){
    cout << "TEST FILO - ESPADA" << endl;
    cout << "Filo de la espada -> " <<espada->getFilo() << endl;
    cout << "------------------------------" << endl;
}
