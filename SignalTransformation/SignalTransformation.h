#include <iostream>
#include <vector>
#include <complex>
#include <string>
#include <sstream>
#include <cmath>
#include <fstream> 
#include <stdexcept>
#include <algorithm>
using namespace std; 


class SignalTransformation{
public:
    static vector<complex<double>> DFT(vector<complex<double>> InputVektor){
        complex<double> i(0,1);
        size_t Vektor_Length = InputVektor.size();
        vector<complex<double>> ErgebnisVektor(Vektor_Length, 0);

        for (size_t k =0; k<(Vektor_Length); k++)
            {
                for (size_t j =0; j<(Vektor_Length); j++)
                {
                    ErgebnisVektor[k]+= (1/sqrt(Vektor_Length))*InputVektor[j]*exp(-2*M_PI*i*double(k*j)/double(Vektor_Length));
                }
                cout << "Ergebnis" << ErgebnisVektor[k];
            };

    return ErgebnisVektor;
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
static vector<string> ReadDataFromFile(string filename)
{
    // Daten von File lesen
    string TextFromFile, Dataset;
    ifstream DFT_File(filename);
    vector<string> String_Split;

    if (!DFT_File.is_open()) {
        cerr << "Fehler: Datei konnte nicht geöffnet werden: " << filename << endl;
    }

    while (getline(DFT_File, TextFromFile)) {
        Dataset += TextFromFile + "\n";
    }

    DFT_File.close();

    // String aufteilen und in komplexe Zahl umwandeln

   stringstream obj_ss(Dataset);
   string SplitString;
    while (getline(obj_ss, SplitString, ',')) {
        cout << "String-Split: " << SplitString << endl;
        String_Split.push_back(SplitString);

    }
    cout << endl << "Dataset 5: " << String_Split[5];
    return String_Split;
}

static vector<string> StringBereinigen(vector<string> SplitString){
    vector<string> BereinigterString;
    int length = SplitString.size();
    for (int i = 0; i<length; i++){
        if (SplitString[i].front() == '(' && SplitString[i].back() == ')') {
        SplitString[i] = SplitString[i].substr(1, SplitString[i].size() - 2);
        }

        if (!SplitString[i].empty() && SplitString[i].back() == 'j') {
            SplitString[i].pop_back();
        }   
    }
    BereinigterString = SplitString;
    return BereinigterString;
}

static vector<complex<double>> StringToComplex(vector<string> Inputstring){
    //Diese Funktion ist mit ChatGPT gemacht. 
    vector<complex<double>> KomplexerVektor;
    KomplexerVektor.reserve(Inputstring.size());
    /* mein Versuch
    int Vektor_Length = Inputstring.size();
    for(int i = 0; i < Vektor_Length; i++){
        //KomplexerVektor << Inputstring[i];
        cout << "Komplex"  << Inputstring[i] << endl;
    }*/
   for (string s : Inputstring)
    {
        s.erase(remove_if(s.begin(), s.end(),
            [](char c)
            {
                return c == '(' || c == ')' || c == 'j' || c == ' ' || c==  '[' || c== ']';
            }),
            s.end());

        // Trennstelle zwischen Real- und Imaginärteil finden
        // (letztes + oder -; aber nicht das erste Zeichen)
        size_t pos = string::npos;
        for (::size_t i = 1; i < s.size(); ++i)
        {
            if (s[i] == '+' || s[i] == '-')
            {
                pos = i;
            }
        }

        if (pos == string::npos)
        {
            throw runtime_error("Ungültiges komplexes Format: " + s);
        }

        double real = stod(s.substr(0, pos));
        double imag = stod(s.substr(pos));

        KomplexerVektor.emplace_back(real, imag);
    }

    return KomplexerVektor;
}

static int WriteToFile(vector<complex<double>> ErgebnisVektor, vector<double> Magnitudenvektor, vector<double> Phasenvektor){
    ofstream File;
    File.open("Ergebnis.txt");
    int VektorLength = ErgebnisVektor.size();
    for(int i = 0; i<VektorLength; i++){
        File << ErgebnisVektor[i] << " " << Magnitudenvektor[i] << " " << Phasenvektor[i]<< endl;
    }

    File.close();
    return 0;
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