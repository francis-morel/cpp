#include <iostream>
#include <string>
using namespace std;

int obtenirInt(string message, int min, int max){
    int nombre = min - 1;

    while(nombre < min || nombre > max){
        cout << message << " (" << min << "-" << max << "): ";
        cin >> nombre;
        
    }

    return nombre;
}

int main(){
    int valeur = obtenirInt("Veuillez entrer un int", 0, 100);

    cout << "Voici la valeur entrée: " << valeur << endl;
    return 0;
}