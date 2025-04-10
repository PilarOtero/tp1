#include "functions.h"

void test_mostrarInfo_magos(Brujo& brujo, Conjurador& conjurador, Hechicero& hechicero, Nigromante& nigromante){
    cout << "SECCION MAGOS" << endl;
    brujo.mostrarInfo();
    conjurador.mostrarInfo();
    hechicero.mostrarInfo();
    nigromante.mostrarInfo();

}

void test_mostrarInfo_guerreros(Gladiador& gladiador, Paladin& paladin, Caballero& caballero, Barbaro& barbaro, Mercenario& mercenario){
    cout << "------------------------------\nSECCION GUERREROS" << endl;
    gladiador.mostrarInfo();
    paladin.mostrarInfo();
    caballero.mostrarInfo();
    barbaro.mostrarInfo();
}

void test_barbaro_furioso(Barbaro& barbaro, int furia){
    cout << "TEST BARBARO FURIOSO" << endl;
    barbaro.estaFurioso(furia);
    cout << "------------------------------" << endl;
}

void test_usar_fuerzaSecreta_caballero(Caballero & caballero){
    cout << "TEST USAR FUERZA SECRETA - CABALLERO" << endl;
    caballero.usarFuerzaSecreta();
    cout << "------------------------------" << endl;
}

void test_mostrar_tipoDeCaballero(Caballero & caballero){
    cout << "TEST MOSTRAR TIPO DE CABALLERO" << endl;
    cout << "Tipo de Caballero: " << caballero.getTipoDeCaballero() << endl;
    cout << "------------------------------" << endl;
}

void test_aumentoPrecision_mercenario(Mercenario & mercenario, int aumento){
    cout << "TEST AUMENTAR PRECISION - MERCENARIO" << endl;
    mercenario.aumentarPrecision(aumento);
    cout << "------------------------------" << endl;
}

void test_absorberEnergia_nigromante(Nigromante & nigromante){
    cout << "TEST ABSORBER ENERGIA - NIGROMANTE" << endl;
    nigromante.absorberEnergia();
    cout << "------------------------------" << endl;
}

void test_usarComodinPaladin(Paladin & paladin){
    cout << "TEST USAR COMODIN - PALADIN" << endl;
    paladin.usarComodin();
    cout << "------------------------------" << endl;
}


