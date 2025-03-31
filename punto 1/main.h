#include <iostream>
#include <vector>

using namespace std;

class EntidadOrganizativa {
    private:
        string nombre;
        vector<vector<EntidadOrganizativa>> subentidades;

    public:
        //Constructor
        EntidadOrganizativa(const string& nombre);

        //Getters
        string get_nombre();



};
