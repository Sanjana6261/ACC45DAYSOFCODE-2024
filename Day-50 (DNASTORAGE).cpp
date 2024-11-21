#include <iostream>
#include <string>
using namespace std;


string encodeDNA(const string& binary) {
    string dna = "";
    for (size_t i = 0; i < binary.length(); i += 2) {
        string pair = binary.substr(i, 2);
        if (pair == "00") dna += "A";
        else if (pair == "01") dna += "T";
        else if (pair == "10") dna += "C";
        else if (pair == "11") dna += "G";
    }
    return dna;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N; 
        cin >> N;

        string binary;
        cin >> binary;

        
        cout << encodeDNA(binary) << endl;
    }

    return 0;
}
