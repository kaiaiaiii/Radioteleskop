#include <iostream>
#include <cmath>
//Dataset will first be given by me/downloaded somewhere (link will follow) and later on be implemented by me directly


int main() {
    for (double t = 0; t<20.01; t=t+0.2){
    //double t = 1.0;]

    double result = cos(t);
    std::cout <<  result << "\n";
    }
    /*
    string str1("Hello")
    ifstream f("Dataset.txt");

  
    if (!f.is_open()) {
        cerr << "Error opening the file!";
        return 1;
    }

    
    string s;

    while (getline(f, s))
        str1.append(s)
        cout << str1 << endl;
        
    f.close();

*/
    return 0;
}