#include <iostream>
#include "SignalTransformation/SignalTransformation.h"
#include <complex>
#include <chrono>
using namespace std;

int DFT(string Dataset);

int main(){
    while (true){
        auto start = std::chrono::high_resolution_clock::now();
        DFT("Dataset.txt");
        auto stop = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);
        cout << duration.count() << endl;
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