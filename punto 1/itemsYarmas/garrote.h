#pragma once

#include "utils.h"

class Garrote: public ArmaCombate {
    private:
        bool destruyeArmas;
    
    public:
        //Constructor
        Garrote(const string& nombre, int daño, int duracion, int nivel_de_uso, float peso, bool destruyeArmas);
        
        //Getters
        bool getDestruyeArmas();
    
        //Metodos
        void usar() override;
        void reparar(int daño_agregado, int duracion_agregada);
        void mostrarInfo() override;
};