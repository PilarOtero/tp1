#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../punto 2/personajeFactory.h"
#include "../punto 2/functions.h"

enum class Ataque {
    golpefuerte = 1,
    golperapido,
    defensaygolpe,
};

bool generarEsGuerrero();

void displayPersonajes();
int elegirPersonaje();

void displayArmas();
shared_ptr<Util> elegirArma();


void displayAtaque();
string toStringAtaque(Ataque ataque);
Ataque elegirAtaque();

//Rival
Ataque ataqueRival();
shared_ptr<Util> armarival(bool esGuerrero);
shared_ptr<Personaje> personajeRival(shared_ptr<Util> armaj2, bool esGuerrero);

//SIMULACION
void simularBatalla(shared_ptr<Personaje> jugador1, shared_ptr<Util> armaj1, shared_ptr<Personaje> jugador2, shared_ptr<Util> armaj2);


