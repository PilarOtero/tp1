#pragma once

#include "../itemsYarmas/amuleto.h"
#include "../itemsYarmas/baston.h"
#include "../itemsYarmas/pocion.h"
#include "../itemsYarmas/libroDeHechizos.h"
#include "../itemsYarmas/espada.h"
#include "../itemsYarmas/garrote.h"
#include "../itemsYarmas/hachaDoble.h"
#include "../itemsYarmas/hachaSimple.h"
#include "../itemsYarmas/lanza.h"

#include "brujo.h"
#include "conjurador.h"
#include "hechicero.h"
#include "nigromante.h"
#include "gladiador.h"
#include "paladin.h"
#include "caballero.h"
#include "barbaro.h"
#include "mercenario.h"

#include "utils2.h"

void test_mostrarInfo_magos(shared_ptr<Brujo> brujo);
void test_mostrarInfo_guerreros(shared_ptr<Caballero> caballero);
void test_usar_fuerzaSecreta_caballero(shared_ptr<Caballero> caballero);
void test_comodines_paladin(shared_ptr<Paladin> paladin);
void test_barbaro_furioso(shared_ptr<Barbaro> barbaro);



