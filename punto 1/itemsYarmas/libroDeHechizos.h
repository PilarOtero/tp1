#pragma once

#include <vector>
#include "utils.h"

class LibroDeHechizos: public ItemMagico {
    private:
        vector<string> hechizos;
    
    public:
        //Constructor
        LibroDeHechizos(const string& nombre, const string& poder, int daño, int nivel_de_uso, int duracion, bool magiaActiva, vector<string> hechizos);
        
        //Getters
        vector<string> getHechizos();

        //Metodos
        void mostrarInfo() override;

};