#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
#include "SignalTransformation.h"
using namespace std;


int main(){
   /* string FileName = "Dataset.txt";
    vector<complex<double>> Auslesevektor = SignalTransformation::ReadDataFromFile(FileName);
    cout << "geladene Daten: "<< endl;
    for(auto& c: Auslesevektor){
        cout << c.real() << endl;
    }
    cout << Auslesevektor.size();*/
    SignalTransformation::ReadDataFromFile("Dataset.txt");
    SignalTransformation::DFT({(-0.1599851859856971+0.586071706235473j),(-0.1599851859856971+0.586071706235473j)});
    return 0;
}