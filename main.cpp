#include <iostream>
#include "SignalTransformation/SignalTransformation.h"
#include <complex>
using namespace std;



int main(){
    while (true){
        vector<complex<double>> Versuchsvektor = SignalTransformation::DFT({1,2,3,4});
        cout << Versuchsvektor[1] << " " << Versuchsvektor[2] << endl ;
        //for(int i =0; i<1000000000000000000 ; i++){
        //cout << i << endl;
       //} 
    }
    return 0;

}
/*Pseudocode fuer meine Erinnerung und ideen
while true:
    Lesen inputsignal
    Schreiben in txt file
    txt file auswerten
    Daten plotten
*/