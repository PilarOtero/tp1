#pragma once

#include "utils.h"

class Pocion: public ItemMagico {
    private:
        string color;
    public:
        //Constructor
        Pocion(const string& nombre, const string& poder, int daño, int nivel_de_uso, int duracion, bool magiaActiva, const string& color);

        //Getter
        string getColor();

        //Metodos
        void mostrarInfo() override;
        void pocion_magica();

        
};