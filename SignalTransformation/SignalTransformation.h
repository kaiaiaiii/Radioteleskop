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
int DiscreteFourierTransform(string Dataset, string Outputfile);

static vector<complex<double>> DFT(vector<complex<double>>& InputVektor){
    complex<double> i(0,1);
    int Vektor_Length = InputVektor.size();
    vector<complex<double>> ErgebnisVektor(Vektor_Length, 0);
    #pragma omp parallel
    for (int k =0; k<(Vektor_Length); k++)
        {   
            #pragma omp parallel
            for (int j =0; j<(Vektor_Length); j++)
            {
                ErgebnisVektor[k]+= /* (1/sqrt(Vektor_Length))* */InputVektor[j]*exp(-2*M_PI*i*double(k*j)/double(Vektor_Length));
            }
        };

return ErgebnisVektor;
};


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