#include "itemsYarmas/functions.h"
#include "magosYguerreros/functions.h"

using namespace std;
#include <string>
#include <iostream>

int main (){
    //CREACIÓN ARMAS
    //Items Mágicos
    unique_ptr<Baston> baston = make_unique<Baston>("Baston Magico", "Ilumina solamente la vista de quien lo posee", 1, 10, 15, true, true);
    unique_ptr<Pocion> pocion = make_unique<Pocion>("Pocion Magica", "Quien la tome, sanara de cualquier mal", 5, 5, 50, true, "violeta");

    //INFORMACIÓN ITEMS
    handle_mostrar_items(baston, pocion);

    //CREACION ITEMS
    //Armas de Combate
    unique_ptr<Espada> espada = make_unique<Espada>("Espada", 50, 25, 3, 4.0, true, 100);
    unique_ptr<Garrote> garrote = make_unique<Garrote>("Garrote", 15, 5, 1, 1.5, true);
    unique_ptr<HachaSimple> hachaSimple = make_unique<HachaSimple>("Hacha Simple", 300, 200, 4, 3, true);
    unique_ptr<HachaDoble> hachaDoble = make_unique<HachaDoble>("Hacha Doble", 600, 400, 8, 6);
    unique_ptr<Lanza> lanza = make_unique<Lanza>("Lanza", 190, 300, 2, 6, true);
    //Creo otro garrote ya que estoy utilizando unique pointers
    unique_ptr<Garrote> garrote2 = make_unique<Garrote>("Garrote 2", 15, 5, 1, 1.5, true);

    //INFORMACIÓN ARMAS
    handle_mostrar_armas(espada, garrote, hachaSimple);

    //Asignación de armas a personajes
    pair<unique_ptr<Util>, unique_ptr<Util>> armas_brujo = make_pair(move(pocion), move(baston));
    pair<unique_ptr<Util>, unique_ptr<Util>> armas_caballero = make_pair(move(espada), move(garrote));
    pair<unique_ptr<Util>, unique_ptr<Util>> armas_paladin = make_pair(move(hachaSimple), move(hachaDoble));
    pair<unique_ptr<Util>, unique_ptr<Util>> armas_barbaro = make_pair(move(garrote2), move(lanza));

    //CREACIÓN PERSONAJES
    //Magos
    shared_ptr<Brujo> brujo = make_shared<Brujo>("Brujo", 5, 100, 80, "Fuego", true, move(armas_brujo), true,"Fuego");
    //Guerreros
    shared_ptr<Caballero> caballero = make_shared<Caballero>("Caballero", 6, 100, 300, false, move(armas_caballero),"Uso de Espada", 100, "Caballero de la Luz");
    shared_ptr<Paladin> paladin = make_shared<Paladin>("Paladin", 10, 100, 200, true, move(armas_paladin), "Encuentra los pasadizos mas reconditos del Reino usando sus comodines", 3);
    shared_ptr<Barbaro> barbaro = make_shared<Barbaro>("Barbaro", 10, 100, 200, true, move(armas_barbaro), "Nadie iguala su uso de Fuerza corporal");
    
    //EJEMPLOS DE MÉTODOS DE USO
    cout << "------------------------------\nEJEMPLOS DE USO\n" << endl;
    
    //TEST DE EVOLUCIÓN - ITEM MÁGICO
    unique_ptr<Baston> baston2 = make_unique<Baston>("Baston Magico 2", "Ilumina solamente la vista de quien lo posee", 1, 10, 15, true, true);
    test_evolucionar_item(baston2);

    //TEST ROMPER - ITEM MÁGICO
    unique_ptr<Pocion> pocion2 = make_unique<Pocion>("Pocion Magica 2", "Quien la tome, sanara de cualquier mal", 5, 5, 50, true, "violeta");
    test_romper_item(pocion2);

    //TEST DE PESO - ARMA
    unique_ptr<Espada> espada2 = make_unique<Espada>("Espada 2", 50, 25, 3, 4.0, true, 100);
    test_ver_peso_arma(espada2);

    //TEST DE REPARACIÓN - ARMA
    test_reparar_garrote(garrote2);

    //PERSONAJES
    //Mostrar información de los magos
    test_mostrarInfo_magos(brujo);

    //Mostrar información de los guerreros
    test_mostrarInfo_guerreros(caballero);

    //EJEMPLOS DE MÉTODOS DE USO
    cout << "------------------------------\nEJEMPLOS DE USO\n" << endl;

    //TEST FUERZA SECRETA - CABALLERO
    test_usar_fuerzaSecreta_caballero(caballero);

    //TEST COMODINES - PALADIN
    test_comodines_paladin(paladin);

    //TEST BARBARO FURIOSO
    test_barbaro_furioso(barbaro);

}
