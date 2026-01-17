#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
#include "SignalTransformation.h"
using namespace std;



int main(){
    string FileName = "Dataset.txt";
    vector<complex<double>> Auslesevektor = SignalTransformation::ReadDataFromFile(FileName);
    cout << "geladene Daten: "<< endl;
    for(auto& c: Auslesevektor){
        cout << c.real() << endl;
    }
    cout << Auslesevektor.size();
    SignalTransformation::DFT(Auslesevektor);
    return 0;
}