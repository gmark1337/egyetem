#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;


int primary(int a, int b){
    int db;
    int min = (a < b) ? a : b;
    int max = (a > b) ? a : b; 
    for(int i = min; i < max; i++){
        if(a == 1){
            continue;
        }
        bool prime = true;
        for(int j = 2; j * j<= i; j++){
            if(i % j == 0){
                prime = false;
                break;
            }
        }
        if(prime){
            db++;
        }
    }
    return db;
}
void maxarray(const int arr[4][4], int max_rows[]){
    for(int i = 0; i < 4; i++){
        int row_max = arr[i][0];
        for(int j = 0; j < 4; j++){
            if(arr[i][j] > row_max){
                row_max = arr[i][j];
            }
        }
        max_rows[i] = row_max;
    }
}
void masolat(int a, int arr[], int b, int& integer){
    if(b >= 0 && b <= 10){
        integer = arr[b];
        cout << "A tomb " << b << ". indexen levo ertek " << arr[b] << endl;
        cout << "Az integer erteke " << integer << endl;
    }
    else {
        cout << "Error" << endl;
    }
}

struct Alma {
    std::string fajta;
    std::string szin;
};
int main(){
    /*
    int a = 30;
    int b = 5;

    cout << "A megadott két szám közötti prim db szám: " << primary(a,b);
    cout << endl;
    int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}
                    };

    int max_rows[4];

    maxarray(arr, max_rows);

    std::cout << "Soronkenti maximumok: ";
    for (int i = 0; i < 4; ++i) {
        std::cout << max_rows[i] << " ";
    }
    std::cout << std::endl;

    int x = 2;
    int t[10] = {1,2,3,4,5,6,7,8,9,10};
    
    int y = 5;
    int integer;    

    masolat(x,t,y,integer);

    double num1 , num2 , num3;
    cout << "Adjon meg 3 szamot: " << endl;
    cin >> num1 >> num2 >> num3;

    double avg = (num1 + num2 + num3) / 3.0; 

    double tav1 = abs(num1 - avg);
    double tav2 = abs(num2 - avg);
    double tav3 = abs(num3 - avg);

    double legkozelebbi = num1;
    for(int i = 0; i < 3 ; i++){
        if(tav2 < tav1 && tav2 < tav3){
            legkozelebbi = num2;
        }
        else if(tav3 < tav1 && tav3 < 2){
            legkozelebbi = num3;
        }
    }

    cout << legkozelebbi << endl;

    Alma almak[5] =
    {
        {"idared", "piros"},
        {"golden", "zöld"},
        {"Granny Smith", "zöld"},
        {"Jonagold", "piros"},
        {"Gála", "piros"},
    };

    Alma pirosak[5];
    Alma zoldek[5];

    int piros_index = 0;
    int zold_index = 0;

    for(const Alma& alma : almak){
        if(alma.szin == "piros"){
            pirosak[piros_index++] = alma;
        }
        else if(alma.szin == "zöld"){
            zoldek[zold_index++] = alma;
        }
    }

    cout << "Piros almak: " ;
    for(int i = 0; i < piros_index; i++){
        cout << pirosak[i].fajta << ", ";
    }
    cout << endl;

    cout << "Zold almak:" ;
    for(int i = 0; i < zold_index; i++){
        cout << zoldek[i].fajta << ", ";
    }
    */
    std::ifstream infile;
    infile.open("randomok.txt");
    std::vector<int> randomszamok;
    std::string sor;

   while(std::getline(infile, sor)){
    std::istringstream iss(sor);
    int szam;
    while(iss >> szam){
        randomszamok.push_back(szam);
    }
   }
    infile.close();

    std::sort(randomszamok.begin(), randomszamok.end());

    ofstream out ;
    out.open("rendezett.txt");

    for(int i : randomszamok){
        out << i << endl;
    }
    out.close();
    return 0;
}