#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
using namespace std; 


class SignalTransformation{
public:
    static void DFT(vector<complex<double>> InputVektor){
        void Transformation();
        double AbsolutWert;
        complex<double> a=-1;
        complex<double> imag = sqrt(a);
        double Vektor_Length = InputVektor.size();
        vector<complex<double>> ErgebnisVektor(Vektor_Length, 0);
        vector<double> Magnitudenvektor(Vektor_Length);
        vector<double> Phasenvektor(Vektor_Length); 
        for (double k =0; k<(Vektor_Length); k++)
            {
                for (double j =0; j<(Vektor_Length); j++)
                {
                    ErgebnisVektor[k]+= (1/sqrt(Vektor_Length))*InputVektor[j]*exp(-2*M_PI*imag*j*(k)/(Vektor_Length));
                }
                Magnitudenvektor[k] = sqrt(ErgebnisVektor[k].imag()*ErgebnisVektor[k].imag() + ErgebnisVektor[k].real()*(ErgebnisVektor[k].real()));
                Phasenvektor[k] = atan2(ErgebnisVektor[k].imag(), ErgebnisVektor[k].real());
                cout << "Ergebnis" << ErgebnisVektor[k];
                cout << "Magnitude" << Magnitudenvektor[k];
                cout << "Phase" << Phasenvektor[k] << '\n';

        };
};
/*
Magnitude:

∣X[1]∣≈0.643112+1.146552≈1.3146
∣X[1]∣≈
0.64311
2
+1.14655
2
​

≈
1.3146
	​


Phase:

φ1≈atan2⁡(1.14655,−0.64311)≈2.081 rad  (119.2∘)
φ
1
	​

≈atan2(1.14655,−0.64311)≈
2.081 rad
(119.2∘

/////
double Vektor_Length = 0;

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

void SignalTransformation::StringToComplex(string InputString, double Laenge){
    complex<double> ComplexVektor(Laenge, 0.0);
        Hilfsstring = InputString;
        complex<double> result = stood(InputString);
        istringstream S2F('('+ InputString[i] + ')');
        complex<double> ComplexVektor[i];
        S2F >> ComplexVektor[i];

        cout << result;
}*/
};