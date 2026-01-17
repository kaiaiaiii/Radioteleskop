#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
using namespace std; 

void SignalTransformation::DFT(vector<complex<double>> InputVektor){

    double Vektor_Length = InputVektor.size();
    vector<complex<double>> ErgebnisVektor(Vektor_Length, 0);

    for (double k =0; k<(Vektor_Length); k++)
        {
            for (double j =0; j<(Vektor_Length); j++)
            {
                ErgebnisVektor[k]+= (1/sqrt(Vektor_Length))*InputVektor[j]*exp(-2*M_PI*imag*j*(k)/(Vektor_Length));
            }
            
            cout << ErgebnisVektor[k];

        }
}

double Vektor_Length = 0; // Initialisierung außerhalb der Klasse

double SignalTransformation::ReadDataFromFile(const string& Filename)
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
        Vektor_Length += 1;
    }

    return Vektor_Length;
}


double SignalTransformation::ReadFromFile()
{   // Daten von File lesen
    string Text_from_file, Dataset, String_Split;
    ifstream DFT_File("1.txt");
    complex <double> S2F;
    // Daten in String schreiben
    while (getline (DFT_File, Text_from_file)){
        Dataset = Text_from_file;
    }
    
    DFT_File.close();
    //String nach Kommas separieren
    stringstream obj_ss(Dataset);
    while (getline(obj_ss, String_Split, ',')) {
        cout << String_Split << endl;
        Vektor_Length +=1;
        
    }
    cout << Vektor_Length;
}

string ComplexerString;
void SignalTransformation::WriteToFile(ComplexerString){
    ComplexerString="TEST";
    for (int i=0; i<10; i++){
        cout << "Test";
    }
}

void SignalTransformation::StringToComplex(){
    
}