#include <iostream>
#include <string>
using namespace std;

int obtenirInt(string message, int min, int max){
    int nombre = min - 1;

    while(nombre < min || nombre > max){
        cout << message << " (" << min << "-" << max << "): ";
        cin >> nombre;
        cin.clear();
        cin.ignore(1000, '\n');
        
    }

    return nombre;
}

int main(){
    int valeur;
    do{
        valeur = obtenirInt("Veuillez entrer un int", 1, 100);

        cout << "Voici la valeur entrée: " << valeur << endl;
    } while (valeur != 100);
    
    return 0;
}