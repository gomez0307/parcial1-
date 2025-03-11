#include <iostream>
#include <cmath> 

using namespace std;


double Gravedad(string planeta) {
    if (planeta == "Tierra") {
        return 9.8; 
    } else if (planeta == "Luna") {
        return 1.6; 
    } else if (planeta == "Halo") {
        return 7.0; 
    } else {
        return 0.0; 
    }
}


double distancia(string planeta, double caida) {
    double gravedad = Gravedad(planeta);

    
    double distancia1 = 0.5 * gravedad * pow(Caida, 2);

    
    if (planeta == "Halo" && tiempoCaida > 10) {
        distancia = 300.0; 
    }

    return distancia1;
}

int main() {
    
    string planeta;
    double caida;

   
    cout << "Ingrese el planeta (Tierra, Luna, Halo): ";
    cin >> planeta;

    cout << "Ingrese el tiempo de caída (en segundos): ";
    cin >> caida;


    double distanciarecorrida = distancia (planeta, tiempoCaida);


    cout << "La distancia recorrida es: " << distanciarecorrida << " metros" << endl;

    return 0;
}