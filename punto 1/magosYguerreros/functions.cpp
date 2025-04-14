#include "functions.h"

void test_mostrarInfo_magos(shared_ptr<Brujo> brujo, shared_ptr<Conjurador> conjurador, shared_ptr<Hechicero> hechicero, shared_ptr<Nigromante> nigromante){
    cout << "SECCIÓN MAGOS" << endl;
    brujo->mostrarInfo();
    conjurador->mostrarInfo();
    hechicero->mostrarInfo();
    nigromante->mostrarInfo();

}

void test_mostrarInfo_guerreros(shared_ptr<Gladiador> gladiador, shared_ptr<Paladin> paladin, shared_ptr<Caballero> caballero, shared_ptr<Barbaro> barbaro, shared_ptr<Mercenario> mercenario){
    cout << "------------------------------\nSECCIÓN GUERREROS" << endl;
    gladiador->mostrarInfo();
    paladin->mostrarInfo();
    caballero->mostrarInfo();
    barbaro->mostrarInfo();
}

void test_barbaro_furioso(shared_ptr<Barbaro> barbaro, int furia){
    cout << "TEST BÁRBARO FURIOSO" << endl;
    barbaro->estaFurioso(furia);
    cout << "------------------------------" << endl;
}

void test_usar_fuerzaSecreta_caballero(shared_ptr<Caballero> caballero){
    cout << "TEST USAR FUERZA SECRETA - CABALLERO" << endl;
    caballero->usarFuerzaSecreta();
    cout << "------------------------------" << endl;
}

void test_mostrar_tipoDeCaballero(shared_ptr<Caballero> caballero){
    cout << "TEST MOSTRAR TIPO DE CABALLERO" << endl;
    cout << "Tipo de Caballero: " << caballero->getTipoDeCaballero() << endl;
    cout << "------------------------------" << endl;
}

void test_aumentoPrecision_mercenario(shared_ptr<Mercenario> mercenario, int aumento){
    cout << "TEST AUMENTAR PRECISIÓN - MERCENARIO" << endl;
    mercenario->aumentarPrecision(aumento);
    cout << "------------------------------" << endl;
}

void test_absorberEnergia_nigromante(shared_ptr<Nigromante> nigromante){
    cout << "TEST ABSORBER ENERGÍA - NIGROMANTE" << endl;
    nigromante->absorberEnergia();
    cout << "------------------------------" << endl;
}

void test_usarComodinPaladin(shared_ptr<Paladin> paladin){
    cout << "TEST USAR COMODÍN - PALADÍN" << endl;
    paladin->usarComodin();
    cout << "------------------------------" << endl;
}


