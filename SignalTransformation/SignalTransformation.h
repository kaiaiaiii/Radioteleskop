#include <iostream>
#include <vector>
#include <complex>
#include <sstream>
#include <cmath>
#include <fstream> 
using namespace std; 


class SignalTransformation{
public:
    static void DFT(vector<complex<double>> InputVektor){
        complex<double> i(0,1);
        size_t Vektor_Length = InputVektor.size();
        vector<complex<double>> ErgebnisVektor(Vektor_Length, 0);
        vector<double> Magnitudenvektor(Vektor_Length), Phasenvektor(Vektor_Length); ;
        for (size_t k =0; k<(Vektor_Length); k++)
            {
                for (size_t j =0; j<(Vektor_Length); j++)
                {
                    ErgebnisVektor[k]+= (1/sqrt(Vektor_Length))*InputVektor[j]*exp(-2*M_PI*i*double(k*j)/double(Vektor_Length));
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

////*/
static vector<complex<double>> ReadDataFromFile(const string& Filename)
{
    // Daten von File lesen
    //string Filename = 
    vector<complex<double>> data;
    ifstream DFT_File(Filename);

    if (!DFT_File.is_open()) {
        cerr << "Fehler: Datei konnte nicht geöffnet werden: " << Filename << endl;
        return data;
    }
    string line;
    while (getline(file,line)){
        line.erase(remove(line.begin(), line.end(), ' ', line.end()));

    }
    // String aufteilen und in komplexe Zahl umwandeln
    double re, im;
    char comma; 
    
    while (DFT_File >> re >> comma >>im){
        data.push_back(complex<double>(re, im));
    }
    DFT_File.close();
    return data;
}

/*
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