#include "functions.h"

void test_mostrarInfo_magos(shared_ptr<Brujo> brujo){
    cout << "SECCIÓN MAGOS" << endl;
    brujo->mostrarInfo();

}

void test_mostrarInfo_guerreros(shared_ptr<Caballero> caballero){
    cout << "------------------------------\nSECCIÓN GUERREROS" << endl;
    caballero->mostrarInfo();
}

void test_usar_fuerzaSecreta_caballero(shared_ptr<Caballero> caballero){
    cout << "TEST USAR FUERZA SECRETA - CABALLERO" << endl;
    caballero->usarFuerzaSecreta();
    cout << "------------------------------" << endl;
}





