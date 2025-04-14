#pragma once

#include "../punto 1/itemsYarmas/amuleto.h"
#include "../punto 1/itemsYarmas/baston.h"
#include "../punto 1/itemsYarmas/pocion.h"
#include "../punto 1/itemsYarmas/libroDeHechizos.h"

#include "../punto 1/itemsYarmas/espada.h"
#include "../punto 1/itemsYarmas/garrote.h"
#include "../punto 1/itemsYarmas/hachaDoble.h"
#include "../punto 1/itemsYarmas/hachaSimple.h"
#include "../punto 1/itemsYarmas/lanza.h"

#include "../punto 1/magosYguerreros/brujo.h"
#include "../punto 1/magosYguerreros/conjurador.h"
#include "../punto 1/magosYguerreros/hechicero.h"
#include "../punto 1/magosYguerreros/nigromante.h"

#include "../punto 1/magosYguerreros/gladiador.h"
#include "../punto 1/magosYguerreros/paladin.h"
#include "../punto 1/magosYguerreros/caballero.h"
#include "../punto 1/magosYguerreros/barbaro.h"
#include "../punto 1/magosYguerreros/mercenario.h"

#include <vector>
#include <memory>
#include <iostream>

using namespace std;

//PERSONAJES
enum class Personajes {
    brujo = 1,
    conjurador,
    hechicero,
    nigromante,
    gladiador,
    paladin,
    caballero,
    barbaro,
    mercenario
};

//ARMAS
enum class Armas {
    amuleto = 1,
    baston,
    pocion,
    libroDeHechizos,
    espada,
    garrote,
    hachaSimple,
    hachaDoble,
    lanza,
};

class PersonajeFactory {
    public: 
        static shared_ptr<Personaje> crearPersonaje(Personajes personaje);
        static shared_ptr<Util> crearArma(Armas arma);
        static shared_ptr<Personaje> crearPersonajeArmado(Personajes personaje, pair<shared_ptr<Util>, shared_ptr<Util>> armas);
};