#include <iostream>
#include "SignalTransformation/SignalTransformation.h"
#include <complex>
using namespace std;

int DFT(string Dataset);

int main(){
    while (true){
        DFT("Dataset.txt");
        
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