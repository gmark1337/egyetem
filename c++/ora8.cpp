#include <vector>
#include <iostream>
#include <fstream>

using namespace std;
struct Allat
{
    std::string nev;
    int kor;
};

void operator>>(std::istream& i, Allat& a)
{
    i >> a.nev >> a.kor;
}

void operator<<(ofstream& o, Allat& a)
{
    o << a.nev << "\t" << a.kor << endl;
}
int main()
{
    int x, y;
    int sum;

    std::cout << "Adjon meg egy számot!" << std::endl;
    std::cin >> x;

    std::cout <<"Adjon meg egy számot!" << std::endl;
    std::cin >> y;

    sum = x + y;
    std::cout << "A két szám összege: " << sum << std::endl;

    /*Allat a;
    std::cout << "Adjon meg egy állatot" << std::endl;
    std::cin >> a;
    //std::cin >> a.nev >> a.kor; 

    std::cout << a.kor << " " << a.nev << std::endl;*/


    std::vector <Allat> av;
    int meret = 0;
    std::cout << "Adj meg egy szamot!" << std::endl;
    std::cin >> meret;

    for(int i = 0; i<meret;i++)
    {
        Allat a;
        std::cout << "Adj meg egy állatot!" << std::endl;
        std::cin >> a;
        av.push_back(a);
    }
    for(Allat a : av)
    {
        std::cout << a.nev << " " << a.kor << std::endl;
    }


    /*
        Állománykezelés

        ofstream - output file stream - kimeneti - létrehoz és ír
        ifstream - input file stream - bemeneti - olvas
        fstream -file stream - in-out - létrehoz, ír, olvas
    */


    std::ofstream ofile; //létrehozás (virtuális állomány)
    ofile.open("kimenet.txt"); //összerendelés (fizikai és logikai állomány)
    //megnyitás
    ofile << "Megnyitottuk a fájlt írásra" << std::endl; //feldolgozás

    ofile.close(); //bezárás

    std::ifstream ifile("kimenet.txt");
    std::string sor;

    while(getline(ifile, sor))
    {
        std::cout << sor << std::endl;
    }

    ifile.close();

    std::string nev;
    std::cout << "Adj egy nevet" << std::endl;
    std::cin >> nev;
    
    std::ofstream outfile;
    outfile.open("nev.txt");

    outfile << nev << std::endl;
    outfile.close();

    std::ifstream infile;
    infile.open("nev.txt");

    std::string beolvasott;
    infile >> beolvasott;

    infile.close();
    std::cout << beolvasott << std::endl;

    /*
        Állomány megnyítási módok
        ios::app - Append - Hozzáfűzés - minden output a fájl végére kerül majd
        ios::ate - Megnyitja írásra, az írás/olvasás vezérlés a fájl végére
        ios::in - Bemenet - csak olvasás
        ios::out - Kimenet - csak írás
        ios::trunc - Ha az állomány létezik, törli a tartalmát megnyitás előtt

    */


    outfile.open("nev.txt", ios::out | ios::trunc);
    outfile.close();

    fstream ffile;
    ffile.open("nev.txt", ios::out | ios::in);
    ffile.close();

    ofstream allatfile("allatok.txt");

    for(int i = 0; i < av.size(); i++)
    {
        allatfile << av[i];
        //allatfile << av[i].nev << "\t" << av[i].kor << endl;

    }
    allatfile.close();

    //feladat

    vector<Allat> allatv;

    ifstream inallat("allatok.txt");
    Allat allatolvas;

    while(inallat >> allatolvas.nev >> allatolvas.kor) //az op.túlterh. visszatérési értékkel 
    {
        allatv.push_back(allatolvas);
    }

    int max = 0;
    int maxind = 0;

    for(int i = 0; i < allatv.size(); i++)
    {
        if(allatv[i].kor > max)
        {
            max = allatv[i].kor;
            maxind = i;
        }
    }

    cout << "A legidősebb állat" << allatv[maxind].nev << " " << allatv[maxind].kor << endl;
    return 0;
}