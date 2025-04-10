#include "functions.h"

using namespace std;
#include <string>
#include <iostream>

int main (){
    //CREACION ELEMENTOS
    //Creacion con constructores - Items Magicos 
    Baston baston = Baston("Baston Magico", "Ilumina solamente la vista de quien lo posee", 1, 10, 15, true);
    LibroDeHechizos libro = LibroDeHechizos("Libro de Hechizos", "Quien lo posee, lograra conocer todos los hechizos secretos", 100, 10, 100, true, vector<string>{"Congelamiento", "Triunfo automatico", "Destruccion del oponente"});
    Pocion pocion = Pocion("Pocion Magica", "Quien la tome, sanara de cualquier mal", 5, 5, 50, true, "violeta");
    Amuleto amuleto = Amuleto("Amuleto Magico", "Quien lo posea, tendra suerte en todos los enfrentamientos", 10, 3, 20, true, true);

    //Creacion con constructores - Armas de Combate
    HachaSimple hacha_simple = HachaSimple("Hacha Simple", 20, 10, 1, 2.5, true);
    HachaDoble hacha_doble = HachaDoble("Hacha Doble", 40, 20, 2, 5.0);
    Lanza lanza = Lanza("Lanza", 30, 15, 1, 3.0, 100);
    Espada espada = Espada("Espada", 50, 25, 3, 4.0, true, 100);
    Garrote garrote = Garrote("Garrote", 15, 5, 1, 1.5, true);

    //INFORMACION ITEMS
    handle_mostrar_items(baston, libro, pocion, amuleto);

    //INFORMACION ARMAS
    handle_mostrar_armas(hacha_simple, hacha_doble, lanza, espada, garrote);

    //EJEMPLOS DE METODOS DE USO
    cout << "------------------------------\nEJEMPLOS DE USO\n" << endl;

    /*En la mayoria de los siguientes tests, primero me encargo de estar usando el item, y luego de mostrar aplicar el metodo (salvo en el test 
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




}
