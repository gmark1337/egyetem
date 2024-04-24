#include <vector>
#include <fstream>
#include <iostream>
#include <map>


//1. feladat
//megszámlálás tétele
int oszthato(int n)
{
    int szaml = 0;
    for(int i = 1; i < n ; i++)
    {
        if((n % i) == 0 )
        {
            szaml++;
        }
    }
    return szaml;
}

//2.feladat
int maxindex(int tomb[10])
{
    int max = tomb[0];
    int ind = 0;

    for(int i = 0 ; i<10; i++)
    {
        if(tomb[i] > max)
        {
            max = tomb[i];
            ind = i;
        }
    }
    return ind;
}

//3. feladat
int lgyakoribb(int tomb[10])
{
    int maxcount = 0;
    int elem;
    for(int i = 0; i < 10; i++)
    {
        int  count = 0;
        for(int j = 0; j < 10; j++)
        {
            if(tomb[j] == tomb[i])
                count++;
        }             

        if(count > maxcount)
        {
            maxcount = count;
            elem = tomb[i];
        }
    }
    return elem;
}

struct Labda
{
    std::string szin;
    int meret;
};

using namespace std;


int main()
{
    //1. feladat
    cout << oszthato(20) << endl;

    //2. feladat
    int tomb[10] = {0,1,1,2,3,4,5,6,7,8};
    cout << maxindex(tomb) << endl;

    //3. feladat

    cout << lgyakoribb(tomb) <<endl;
    return 0;

    //4. feladat
    vector<Labda> labdak;
    Labda temp;

    for(int i = 0; i < 5; i++)
    {
        cout << "Adja meg a labda színét és méretét!" << endl;
        cin  >> temp.szin >> temp.meret;
        labdak.push_back(temp);
    }

    vector<Labda> pirosak;
    vector<Labda> nempirosak;

    for(Labda l : labdak)
    {
        if(l.szin == "piros")
        {
            pirosak.push_back(l);
        }
        else
        {
            nempirosak.push_back(l);
        }
    }
    cout << "Piros labdák:" << endl;
    for(Labda l : pirosak)
    {
        cout << l.szin << " " << l.meret << endl;
    }
    cout << endl << "Nem piros labdák" << endl;

    for(Labda l :nempirosak)
    {
        cout << l.szin << " " << l.meret << endl;
    }

    //6. feladat
    //Lottó doksi beolvasás
    //A számok gyakoriságát írjuk ki a gyakoriság txt-be

    ifstream input;
    input.open("doksi");

    vector<int> szamok;
    int t;
    
    while(input >> t)
    {
        szamok.push_back(t);
    }

    map<int, int> elofordulasok;

    for(int i : szamok)
    {
        elofordulasok[i] = 0;
    }

    for(int i : szamok)
    {
        elofordulasok[i]++;
    }
    ofstream out;
    out.open("gyakorisagok.txt");
    //for(std::pair<int,int> a : elofordulasok)
    for(auto a : elofordulasok)
    {
        //cout << a.first << " " << a.second << endl;
        out << a.first << " " << a.second << endl;
    }
    out.close();
    input.close();

    //feladat: lottó doksi
    //írjuk ki az oszlopmaximumokat.
}