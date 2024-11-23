#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Dataset will first be given by me/downloaded somewhere (link will follow) and later on be implemented by me directly

int main() {

    
    ifstream f("Dataset.txt");

  
    if (!f.is_open()) {
        cerr << "Error opening the file!";
        return 1;
    }

    
    string s;

    while (getline(f, s))
        cout << s << endl;

    f.close();
    return 0;
}