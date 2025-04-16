#pragma once
#include <memory>
#include "amuleto.h"
#include "baston.h"
#include "pocion.h"
#include "libroDeHechizos.h"
#include "lanza.h"
#include "hachaDoble.h"
#include "hachaSimple.h"
#include "espada.h"
#include "garrote.h"
#include "utils.h"

void handle_mostrar_items(unique_ptr<Baston>& baston, unique_ptr<Pocion>& pocion);
void handle_mostrar_armas(unique_ptr<Espada>& espada, unique_ptr<Garrote>& garrote, unique_ptr<HachaSimple>& hacha);
void test_evolucionar_item(unique_ptr<Baston>& baston);
void test_romper_item(unique_ptr<Pocion>& pocion);
void test_ver_peso_arma(unique_ptr<Espada>& espada);
void test_reparar_garrote(unique_ptr<Garrote>& garrote);
