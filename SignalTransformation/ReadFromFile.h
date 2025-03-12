using namespace std;

double CSV_Split()
{   // Daten von File lesen
    double Vektor_Length=0;
    string Text_from_file, Dataset, String_Split;
    ifstream DFT_File("Dataset.txt");
    complex <double> S2F;
    // Daten in String schreiben
    while (getline (DFT_File, Text_from_file)){
        Dataset = Text_from_file;
        Vektor_Length +=1;
        //cout <<Dataset;
    }
    DFT_File.close();
    //String nach Kommas separieren
    stringstream obj_ss(Dataset);
    //cout <<String_Split << "\n\n";
    // while loop function to go through source string until it is finished.
    while (getline(obj_ss, String_Split, ',')) {
        cout << String_Split << endl;
        //S2F = stof(String_Split);
        //cout << S2F;
    }
    return Vektor_Length;
}