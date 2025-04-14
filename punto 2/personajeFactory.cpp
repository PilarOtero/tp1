#include "personajeFactory.h"

shared_ptr<Personaje> PersonajeFactory:: crearPersonaje(Personajes personaje){
    //Para crear un personaje sin armas, utilizo la función de crearPersonajeArmado y paso, como armas, nullptr
    return PersonajeFactory:: crearPersonajeArmado(personaje, {nullptr, nullptr});
}

shared_ptr<Personaje> PersonajeFactory :: crearPersonajeArmado(Personajes personaje, pair<shared_ptr<Util>, shared_ptr<Util>> armas){
    //Mediante un switch creo los diferentes punteros a personajes posibles
    switch (personaje) {
        case Personajes:: brujo:
            return make_shared<Brujo>("Brujo", 5, 100, 20, "Fuego", true, armas, true,"Fuego");
        
        case Personajes:: conjurador:
            return make_shared<Conjurador>("Conjurador", 6, 100, 25, "Agua", false, armas, "Alzamiento de los Muertos");
        
        case Personajes:: hechicero:
        return make_shared<Hechicero>("Hechicero", 7, 100, 30, "Rayo", true, armas, 80);

        case Personajes:: nigromante:
            return make_shared<Nigromante>("Nigromante", 8, 100, 35, "Oscuridad", false, armas, 70, 100);

        case Personajes:: gladiador:    
            return make_shared<Gladiador>("Gladiador", 5, 100, 600, true, armas, "Correr a tal velocidad que no puede ser visto", 50, true, 15);

        case Personajes:: paladin:
            return  make_shared<Paladin>("Paladin", 7, 100, 400, true, armas,"Uso de Garrote", 3);
    
        case Personajes:: caballero:
            return make_shared<Caballero>("Caballero", 6, 100, 300, false, armas,"Uso de Espada", 100, "Caballero de la Luz");

        case Personajes:: barbaro:
            return make_shared<Barbaro>("Barbaro", 3, 100, 300, true, armas, "Uso de Hacha");

        case Personajes:: mercenario:
            return make_shared<Mercenario>("Mercenario", 4, 100, 150, true, armas, "Disparar en el blanco", 90);
    
        default:
            return nullptr;
        }
    
    return nullptr;
}

shared_ptr<Util> PersonajeFactory:: crearArma(Armas arma){
        //Mediante un switch creo los diferentes punteros a las armas posibles
    switch(arma){
        case Armas:: amuleto:
            return make_shared<Amuleto>("Amuleto Magico", "Quien lo posea, tendra suerte en todos los enfrentamientos", 10, 3, 20, true, true);
        
        case Armas:: baston:
            return make_shared<Baston>("Baston Magico", "Ilumina solamente la vista de quien lo posee", 1, 10, 15, true, true);
        
        case Armas:: pocion:
            return make_shared<Pocion>("Pocion Magica", "Quien la tome, sanara de cualquier mal", 5, 5, 50, true, "violeta");
        
        case Armas:: libroDeHechizos:
            return make_shared<LibroDeHechizos>("Libro de Hechizos", "Quien lo posee, lograra conocer todos los hechizos secretos", 100, 10, 100, true, vector<string>{"Congelamiento", "Triunfo automatico", "Destruccion del oponente"});

        case Armas:: espada:
            return make_shared<Espada>("Espada", 50, 25, 3, 4.0, true, 100);

        case Armas:: garrote:
            return make_shared<Garrote>("Garrote", 15, 5, 1, 1.5, true);

        case Armas:: hachaSimple:
            return make_shared<HachaSimple>("Hacha Simple", 20, 10, 1, 2.5, true);

        case Armas:: hachaDoble:
            return make_shared<HachaDoble>("Hacha Doble", 40, 20, 2, 5.0);

        case Armas:: lanza:
            return make_shared<Lanza>("Lanza", 30, 15, 1, 3.0, 100);
        
        default:
            return nullptr;
    }

    return nullptr;
}


