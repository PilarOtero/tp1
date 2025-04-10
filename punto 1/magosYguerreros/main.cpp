#include "functions.h"

int main(){
        //Creacion de las armas
        //Items Magicos
        shared_ptr<Util> baston = make_shared<Baston>("Baston Magico", "Ilumina solamente la vista de quien lo posee", 1, 10, 15, true);
        //shared_ptr<Util> libro = make_shared<LibroDeHechizos>("Libro de Hechizos", "Quien lo posee, lograra conocer todos los hechizos secretos", 100, 10, 100, true, vector<string>{"Congelamiento", "Triunfo automatico", "Destruccion del oponente"});
        shared_ptr<Util> pocion = make_shared<Pocion>("Pocion Magica", "Quien la tome, sanara de cualquier mal", 5, 5, 50, true, "violeta");
        //shared_ptr<Util> amuleto = make_shared<Amuleto>("Amuleto Magico", "Quien lo posea, tendra suerte en todos los enfrentamientos", 10, 3, 20, true, true);
        //Armas de Combate
        //shared_ptr<Util> hacha_simple = make_shared<HachaSimple>("Hacha Simple", 20, 10, 1, 2.5, true);
        //shared_ptr<Util> hacha_doble = make_shared<HachaDoble>("Hacha Doble", 40, 20, 2, 5.0);
        //shared_ptr<Util> lanza = make_shared<Lanza>("Lanza", 30, 15, 1, 3.0, 100);
        //shared_ptr<Util> espada = make_shared<Espada>("Espada", 50, 25, 3, 4.0, true, 100);
        //shared_ptr<Util> garrote = make_shared<Garrote>("Garrote", 15, 5, 1, 1.5, true);

        //Asignacion de armas
        pair<shared_ptr<Util>, shared_ptr<Util>> armas_brujo = make_pair(pocion, baston);
        //pair<shared_ptr<Util>, shared_ptr<Util>> armas_conjurador = make_pair(libro, espada);
        //pair<shared_ptr<Util>, shared_ptr<Util>> armas_hechicero = make_pair(amuleto, garrote);
        //pair<shared_ptr<Util>, shared_ptr<Util>> armas_nigromante = make_pair(baston, espada);
        //pair<shared_ptr<Util>, shared_ptr<Util>> armas_gladiador = make_pair(hacha_simple, lanza);
        //pair<shared_ptr<Util>, shared_ptr<Util>> armas_barbaro = make_pair(hacha_doble, lanza);
        //pair<shared_ptr<Util>, shared_ptr<Util>> armas_caballero = make_pair(espada, amuleto);
        //pair<shared_ptr<Util>, shared_ptr<Util>> armas_paladin = make_pair(pocion, hacha_simple);
        //pair<shared_ptr<Util>, shared_ptr<Util>> armas_mercenario = make_pair(baston, lanza);
        

        Brujo brujo("Gandalf", 5, 100, 20, "Fuego", true, armas_brujo, true,"Fuego");
        //Conjurador conjurador("Merlin", 6, 100, 25, "Agua", false, armas_conjurador, "Alzamiento de los Muertos");
        //Hechicero hechicero("Dumbledore", 7, 100, 30, "Rayo", true, armas_hechicero, 80);
        //Nigromante nigromante("Voldemort", 8, 100, 35, "Oscuridad", false, armas_nigromante, 70, 100);
//
        //Gladiador gladiador("Gladiador", 5, 100, 600, true, armas_gladiador, "Correr a tal velocidad que no puede ser visto", 50, true, 15);
        //Barbaro barbaro("Barbaro", 3, 100, 300, true, armas_barbaro, "Uso de Hacha");
        //Caballero caballero("Zorro", 6, 100, 300, false, armas_caballero,"Uso de Espada", "Baston", "Caballero de la Luz");
        //Mercenario mercenario("Mercenario", 4, 100, 150, true, armas_mercenario, "Disparar en el blanco", 90);
        //Paladin paladin("Paladin", 7, 100, 400, true, armas_paladin,"Uso de Garrote", 3);
        
        /*
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
        */
}