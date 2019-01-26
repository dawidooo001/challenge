#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cmath>
#include <math.h>
#include <fstream>
using namespace std;

int main(){
fstream myFile;
myFile.open("Statystyki_gracz.txt", ios::app | ios::in | ios::out );
string kasa;
{
    getline(myFile,kasa);
    cout<<kasa<<endl;
}
myFile.close();

return 0;
}



