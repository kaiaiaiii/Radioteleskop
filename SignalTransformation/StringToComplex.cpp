#include <iostream>
#include <complex>
#include <string>
#include <sstream>
using namespace std;
string Hilfsstring;
void StringToComplex(string InputString, double Laenge)
{
    complex<double> ComplexVektor(Laenge, 0.0);
        Hilfsstring = InputString;
        complex<double> result = stood(InputString);
        //istringstream S2F('('+ InputString[i] + ')');
        //complex<double> ComplexVektor[i];
        //S2F >> ComplexVektor[i];

        cout << result;
   // for (int i =0; i < Laenge+1; i++){
   //     Hilfsstring = InputString[i];
   //     double result = stood InputString;
        //istringstream S2F('('+ InputString[i] + ')');
        //complex<double> ComplexVektor[i];
        //S2F >> ComplexVektor[i];

    //    cout << result[i];
   // }
}

int main(){
    StringToComplex(0.9702960685422692-0.17455391250538055j,1);
}