#include <iostream>
#include <string>

using namespace std;

string add5Positif(string nombre){
    for(int i = 0; i < nombre.length(); i++){
        if(nombre[i] < '5'){
            nombre[i] = '5';
            break;
        }
    }
    return nombre;
}

string add5Negatif(string nombre){
    for(int i = 1; i < nombre.length(); i++){
        if(nombre[i] > '5'){
            nombre[i] = '5';
            break;
        }
    }
    return nombre;
}

string add5(string nombre){
    string resultat;
    if(nombre[0] != '-'){
        resultat = add5Positif(nombre);
    } else {
        resultat = add5Negatif(nombre);
    }

    return resultat;
}

int main(){
    cout << "Veuillez entrer un nombre: ";
    string nombre;
    cin >> nombre;
    string resultat = add5(nombre);

    cout << "Le résultat est: " << resultat << endl;
}

