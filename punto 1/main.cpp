#include "itemsYarmas/functions.h"
#include "magosYguerreros/functions.h"

using namespace std;
#include <string>
#include <iostream>

int main (){
    //CREACION ARMAS
    //Items Magicos
    shared_ptr<Baston> baston = make_shared<Baston>("Baston Magico", "Ilumina solamente la vista de quien lo posee", 1, 10, 15, true, true);
    shared_ptr<LibroDeHechizos> libro = make_shared<LibroDeHechizos>("Libro de Hechizos", "Quien lo posee, lograra conocer todos los hechizos secretos", 100, 10, 100, true, vector<string>{"Congelamiento", "Triunfo automatico", "Destruccion del oponente"});
    shared_ptr<Pocion> pocion = make_shared<Pocion>("Pocion Magica", "Quien la tome, sanara de cualquier mal", 5, 5, 50, true, "violeta");
    shared_ptr<Amuleto> amuleto = make_shared<Amuleto>("Amuleto Magico", "Quien lo posea, tendra suerte en todos los enfrentamientos", 10, 3, 20, true, true);
    //Armas de Combate
    shared_ptr<HachaSimple> hacha_simple = make_shared<HachaSimple>("Hacha Simple", 20, 10, 1, 2.5, true);
    shared_ptr<HachaDoble> hacha_doble = make_shared<HachaDoble>("Hacha Doble", 40, 20, 2, 5.0);
    shared_ptr<Lanza> lanza = make_shared<Lanza>("Lanza", 30, 15, 1, 3.0, 100);
    shared_ptr<Espada> espada = make_shared<Espada>("Espada", 50, 25, 3, 4.0, true, 100);
    shared_ptr<Garrote> garrote = make_shared<Garrote>("Garrote", 15, 5, 1, 1.5, true);

    //Asignacion de armas
    pair<shared_ptr<Util>, shared_ptr<Util>> armas_brujo = make_pair(pocion, baston);
    pair<shared_ptr<Util>, shared_ptr<Util>> armas_conjurador = make_pair(libro, espada);
    pair<shared_ptr<Util>, shared_ptr<Util>> armas_hechicero = make_pair(amuleto, garrote);
    pair<shared_ptr<Util>, shared_ptr<Util>> armas_nigromante = make_pair(baston, espada);
    pair<shared_ptr<Util>, shared_ptr<Util>> armas_gladiador = make_pair(hacha_simple, lanza);
    pair<shared_ptr<Util>, shared_ptr<Util>> armas_barbaro = make_pair(hacha_doble, lanza);
    pair<shared_ptr<Util>, shared_ptr<Util>> armas_caballero = make_pair(espada, amuleto);
    pair<shared_ptr<Util>, shared_ptr<Util>> armas_paladin = make_pair(pocion, hacha_simple);
    pair<shared_ptr<Util>, shared_ptr<Util>> armas_mercenario = make_pair(baston, lanza);

    //CREACION PERSONAJES
    //Magos
    shared_ptr<Brujo> brujo = make_shared<Brujo>("Brujo", 5, 100, 20, "Fuego", true, armas_brujo, true,"Fuego");
    shared_ptr<Conjurador> conjurador = make_shared<Conjurador>("Conjurador", 6, 100, 25, "Agua", false, armas_conjurador, "Alzamiento de los Muertos");
    shared_ptr<Hechicero> hechicero = make_shared<Hechicero>("Hechicero", 7, 100, 30, "Rayo", true, armas_hechicero, 80);
    shared_ptr<Nigromante> nigromante = make_shared<Nigromante>("Nigromante", 8, 100, 35, "Oscuridad", false, armas_nigromante, 70, 100);

    //Guerreros
    shared_ptr<Gladiador> gladiador = make_shared<Gladiador>("Gladiador", 5, 100, 600, true, armas_gladiador, "Correr a tal velocidad que no puede ser visto", 50, true, 15);
    shared_ptr<Barbaro> barbaro = make_shared<Barbaro>("Barbaro", 3, 100, 300, true, armas_barbaro, "Uso de Hacha");
    shared_ptr<Caballero> caballero = make_shared<Caballero>("Caballero", 6, 100, 300, false, armas_caballero,"Uso de Espada", 100, "Caballero de la Luz");
    shared_ptr<Mercenario> mercenario = make_shared<Mercenario>("Mercenario", 4, 100, 150, true, armas_mercenario, "Disparar en el blanco", 90);
    shared_ptr<Paladin> paladin = make_shared<Paladin>("Paladin", 7, 100, 400, true, armas_paladin,"Uso de Garrote", 3);

    //INFORMACION ITEMS
    handle_mostrar_items(baston, libro, pocion, amuleto);

    //INFORMACION ARMAS
    handle_mostrar_armas(hacha_simple, hacha_doble, lanza, espada, garrote);

    //EJEMPLOS DE METODOS DE USO
    cout << "------------------------------\nEJEMPLOS DE USO\n" << endl;

    /*En la mayoria de los siguientes tests (de armas), primero me encargo de estar usando el item, y luego de aplicar el metodo (salvo en el test 
    para ver si es magico activo, para comprobar si, al haberse roto la pocion, se actualiza el atributo).
    */
    
    //TEST DE EVOLUCION - ITEM MAGICO
    test_evolucionar_item(baston);

    //TEST DE INVOLUCION - ITEM MAGICO
    test_involucionar_item(libro);

    //TEST ROMPER - ITEM MAGICO
    test_romper_item(pocion);

    //TEST VER SI ES MAGICO ACTIVO - ITEM MAGICO
    test_ver_ma_pocion(pocion);

    //TEST EVOLUCION - ARMA 
    test_evolucionar_arma(hacha_simple);

    //TEST DE PESO - ARMA
    test_ver_peso_arma(espada);

    //TEST DE INVOLUCION - ARMA
    test_involucionar_garrote(garrote);

    //TEST DE REPARACION - ARMA
    test_reparar_garrote(garrote);

    //TEST ESPADA CORTANTE
    test_espada_cortante(espada);

    //TEST POCION VIOLETA
    test_pocion_magica(pocion);
    
    //TEST FILO - ESPADA
    test_filo_espada(espada);

    //PERSONAJES
    
    //Mostrar info de los magos
    test_mostrarInfo_magos(brujo, conjurador, hechicero, nigromante);

    //Mostrar info de los guerreros
    test_mostrarInfo_guerreros(gladiador, paladin, caballero, barbaro, mercenario);

    //EJEMPLOS DE METODOS DE USO
    cout << "------------------------------\nEJEMPLOS DE USO\n" << endl;

    //TEST FUERZA BARBARO 
    test_barbaro_furioso(barbaro, 100);

    //TEST FUERZA SECRETA - CABALLERO
    test_usar_fuerzaSecreta_caballero(caballero);

    //TEST TIPO DE CABALLERO
    test_mostrar_tipoDeCaballero(caballero);

    //TEST AUMENTO DE PRECISION - MERCENARIO
    test_aumentoPrecision_mercenario(mercenario, 9);

    //TEST ABSORCION DE ENERGIA - NIGROMANTE
    test_absorberEnergia_nigromante(nigromante);

    //TEST USO DE COMODIN - PALADIN
    test_usarComodinPaladin(paladin);
}