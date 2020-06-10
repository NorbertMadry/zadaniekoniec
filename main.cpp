#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main(){

    ifstream wejscie;
    ofstream wyjscie;

    wejscie.open("wej.txt");
    wyjscie.open("wyj.json");

    int tab[100], ilosc = 0, max = 0;
    int losowa;

    if(wejscie.good()){
        while(!wejscie.eof()){
        for(int i = 0; i < 100; i++){
            wejscie >> tab[i];
            ilosc++;}
    }

    for(int i = 0; i < ilosc; i++){
        if(tab[i] > max)
        max = tab[i];
    }
        losowa = rand()%max+1;

    wyjscie << "{"max":"<< max << "losowa_ocena":" << losowa"}" << "\n";

      wejscie.close();
      wyjscie.close();

      return 0;
}
