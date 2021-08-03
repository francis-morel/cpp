#include <iostream>
#include <vector>

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
    vector<int> vecteurInt;
    int nombre;

    for(int i = 0; i < 5; i++){
        nombre = obtenirInt("Veuillez entrer le nombre " + to_string(i), 1, 100);
        vecteurInt.push_back(nombre);
    }

    for(int i = 0; i < vecteurInt.size(); ++i){
        cout << "Nombre #" << i + 1 << ": " << vecteurInt.at(i) << endl;
    }
}