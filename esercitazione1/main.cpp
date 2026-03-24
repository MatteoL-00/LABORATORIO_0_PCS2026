#include <iostream>
#include <fstream>

using namespace std;

// Funzione che calcola le medie
void media_temperature(const char* nome_file) {

    // Controllo apertura file

    ifstream file(nome_file);

    if (!file) {
        cerr << "Errore: impossibile aprire il file " << nome_file << endl;
        return;
    }

    string citta;
    double t1, t2, t3, t4;

    // Leggo il file e stampo la media

    while (file >> citta >> t1 >> t2 >> t3 >> t4) {
        double media = (t1 + t2 + t3 + t4) / 4.0;
        cout << citta << " " << media << endl;
    }

    file.close();
}

int main(int argc, char* argv[]) {

    // Controllo se l'utente ha passato il nome del file

    if (argc < 2) {
        cerr << "Errore: specificare il nome del file da processare." << endl;
        return 1;
    }

    // Passo il file in (argv[1]) alla funzione

    media_temperature(argv[1]);

    return 0;
}
