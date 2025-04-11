#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../punto 2/personajeFactory.h"
#include "../punto 2/functions.h"

void displayPersonajes();
int elegirPersonaje();

void displayArmas();
shared_ptr<Util> elegirArma();


void displayAtaque();

//Ataque ataqueRival();
shared_ptr<Personaje> personajeRival();


enum class Ataque {
    golpefuerte = 1,
    golperapido,
    defensaygolpe
};

