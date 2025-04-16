#pragma once

#include <vector>
#include <memory>
#include <iostream>
#include <string>
#include "../itemsYarmas/utils.h"

using namespace std;

//INTERFAZ
class Personaje {
    public:
        //Getters
        virtual string getNombre() = 0;
        virtual int getNivel() = 0;
        virtual int getVida() = 0;
        virtual int getFuerza() = 0;
        virtual const pair<unique_ptr<Util>, unique_ptr<Util>>& getArmas() const = 0;

        //Metodos
        virtual void morir() = 0;
        virtual void evolucionar(int daño_agregado, int vida_agregada) = 0;
        virtual void mostrarInfo() = 0;

        //Destructor
        virtual ~Personaje() = default;

};

//CLASE ABSTRACTA DERIVADA DE LA INTERFAZ
class Mago: public Personaje {
    protected:
        string nombre;
        int nivel;
        int vida;
        int fuerza;
        bool experiencia;
        pair<unique_ptr<Util>, unique_ptr<Util>> armas;
        string poder;
    
    public:
        //Constructor
        Mago(const string& nombre, int nivel, int vida, int fuerza, const string& poder, bool experiencia, pair<unique_ptr<Util>, unique_ptr<Util>> armas);
        
        //Getters
        virtual string getNombre() override;
        virtual int getNivel() override;
        virtual int getVida() override;
        virtual int getFuerza() override;
        virtual const pair<unique_ptr<Util>, unique_ptr<Util>>& getArmas() const override;

        //Metodos
        virtual void morir() override;
        virtual void evolucionar(int daño_agregado, int vida_agregada) override;
        virtual void mostrarInfo() override = 0;
        
        virtual void usarPoder();
        virtual void revivir(int agregado_vida);
        virtual void agregarVida(int vida_agregada);
        virtual void involucionar(int daño_reducido, int vida_reducida);
};

//CLASE ABSTRACTA DERIVADA DE LA INTERFAZ
class Guerrero: public Personaje {
    protected:
        string nombre;
        int nivel;
        int vida;
        int fuerza;
        bool experiencia;
        pair<unique_ptr<Util>, unique_ptr<Util>> armas;
        string habilidad;

    public:
        //Constructor
        Guerrero(const string& nombre, int nivel, int vida, int fuerza, bool experiencia, pair<unique_ptr<Util>, unique_ptr<Util>> armas, const string& habilidad);
        
        //Getters
        virtual string getNombre() override;
        virtual int getNivel() override;
        virtual int getVida() override;
        virtual int getFuerza() override;
        virtual string getHabilidad();  
        virtual const pair<unique_ptr<Util>, unique_ptr<Util>>& getArmas() const override;

        //Métodos
        virtual void morir() override;
        virtual void evolucionar(int daño_agregado, int vida_agregada) override;
        virtual void mostrarInfo() override = 0;
        
        virtual void usarHabilidad();
        virtual void cambiarHabilitad(const string& nueva_habilidad);
};


