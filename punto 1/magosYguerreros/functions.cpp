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

void test_comodines_paladin(shared_ptr<Paladin> paladin){
    cout << "TEST COMODINES - PALADIN" << endl;
    paladin->usarComodin();
}

void test_barbaro_furioso(shared_ptr<Barbaro> barbaro){
    cout << "TEST BARBARO FURIOSO" << endl;
    barbaro->estaFurioso(100);
}





