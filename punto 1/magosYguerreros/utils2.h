#pragma once

#include <vector>
#include <memory>
#include <iostream>
#include <string>
#include "../itemsYarmas/utils.h"

using namespace std;

class Personaje {
    public:
        //Getters
        virtual int getNivel() = 0;
        virtual int getVida() = 0;
        virtual int getFuerza() = 0;

        //Metodos
        virtual void morir() = 0;
        virtual void evolucionar(int daño_agregado, int vida_agregada) = 0;
        virtual void mostrarInfo() = 0;
        virtual pair<shared_ptr<Util>, shared_ptr<Util>> getArmas() = 0;

        //Destructor
        virtual ~Personaje() = default;

};

class Mago: public Personaje {
    protected:
        string nombre;
        int nivel;
        int vida;
        int fuerza;
        bool experiencia;
        pair<shared_ptr<Util>, shared_ptr<Util>> armas;
        string poder;
    
    public:
        //Constructor
        Mago(const string& nombre, int nivel, int vida, int fuerza, const string& poder, bool experiencia, pair<shared_ptr<Util>, shared_ptr<Util>> armas);
        
        //Getters
        virtual int getNivel() override;
        virtual int getVida() override;
        virtual int getFuerza() override;
        virtual pair<shared_ptr<Util>, shared_ptr<Util>> getArmas() override;

        //Metodos
        virtual void morir() override;
        virtual void evolucionar(int daño_agregado, int vida_agregada) override;
        virtual void mostrarInfo() override = 0;
        
        virtual void usarPoder();
        virtual void revivir(int agregado_vida);
        virtual void agregarVida(int vida_agregada);
        virtual void involucionar(int daño_reducido, int vida_reducida);
};


class Guerrero: public Personaje {
    protected:
        string nombre;
        int nivel;
        int vida;
        int fuerza;
        bool experiencia;
        pair<shared_ptr<Util>, shared_ptr<Util>> armas;
        string habilidad;

    public:
        //Constructor
        Guerrero(const string& nombre, int nivel, int vida, int fuerza, bool experiencia, pair<shared_ptr<Util>, shared_ptr<Util>> armas, const string& habilidad);
        
        //Getters
        virtual int getNivel() override;
        virtual int getVida() override;
        virtual int getFuerza() override;
        virtual string getHabilidad();  
        virtual pair<shared_ptr<Util>, shared_ptr<Util>> getArmas() override;

        //Metodos
        virtual void morir() override;
        virtual void evolucionar(int daño_agregado, int vida_agregada) override;
        virtual void mostrarInfo() = 0;
        
        virtual void usarHabilidad();
        virtual void cambiarHabilitad(const string& nueva_habilidad);
};


