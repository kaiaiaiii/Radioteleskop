#include "ReadFromFile.h"
using namespace std;

double Vektor_Length = 0; // Initialisierung außerhalb der Klasse

double ReadFromFile::ReadDataFromFile(const string& Filename)
{
    // Daten von File lesen
    string TextFromFile, Dataset;
    ifstream DFT_File(Filename);

    if (!DFT_File.is_open()) {
        cerr << "Fehler: Datei konnte nicht geöffnet werden: " << Filename << endl;
        return -1;
    }

    while (getline(DFT_File, TextFromFile)) {
        Dataset += TextFromFile + "\n";
    }
    DFT_File.close();

    // String aufteilen und in komplexe Zahl umwandeln
    string token;
    stringstream obj_ss(Dataset);

    while (getline(obj_ss, token, ',')) {
        cout << "String-Split: " << token << endl;
        String_Split.push_back(token);

        // Versuch, in komplexe Zahl umzuwandeln
        complex<double> KomplexeZahl;
        istringstream S2C(token);
        S2C >> KomplexeZahl;

        cout << "Komplexe Zahl: " << KomplexeZahl << endl;
    }

    return Vektor_Length;
}

int main() {
    ReadFromFile reader;
    reader.ReadDataFromFile("/wsl.localhost/Ubuntu-22.04/home/kai/Radioteleskop/SignalTransformation/Dataset/Dataset.txt");
    return 0;
}
