#include <iostream>
#include "../ExterneLibraries/wiringPi.h"

using namespace std;

int main(){
    wiringPiSetup();
    pinMode(0, Output);
    pinMode(1, Input);
    while(1){
        if(digitalRead(1) ==1 )
        {
            cout<< "Test";
        }
    }
    return 0;
}