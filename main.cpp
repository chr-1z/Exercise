#include <iostream>
using namespace std;

int main() {
  int numero = 1;

  while (numero <= 10){
    if (numero % 2 == 0) {
      int x = 0;
      string str1;
      while (x < numero){
        str1.append("incomoda ");
        x++;
      }
      cout << numero << " elefante " + str1 + " muito mais " << endl;
    } else {
      cout << numero << " elefante incomoda muita gente" << endl;
    }
    numero++;
  }
}

//cout << numero << " elefante " "incomoda" "muita gente" << endl;

