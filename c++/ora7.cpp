#include <iostream>
#include <vector>

//HASZNOS OLDAL arato.inf.unideb.hu/szathmary.laszlo
struct szemely
{
    std::string nev;
    int kor;
};

std::ostream& operator<<(std::ostream& os, const szemely& p)
{
    os << p.nev << " " << p.kor;
    return os;
}
int is_palindrome(const std::string s)
{
    int hossz = s.length();
    if(s == "")
    {
        return 1;
    }
    for(int i = 0; i <= hossz; i++)
    {
        if(s[i] == s[hossz-i-1])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}


void printascii() //zh-ban előfordulhat hogy jelszót kell készíteni ascii kóddal!!
{
    for(int i = 32; i <= 127 ; i++)
    {
        std::cout << i << ": " <<char(i) << std::endl;
    }
}

void mario(int mag) //ilyen nem lesz!
{
    for(int sor = 1; sor <= mag; sor++)
    {
        for(int j = 1; j<= mag -sor; j++)
        {
            std::cout << " ";
        }
        for(int j = 1; j<= sor; j++)
        {
            std::cout << "#";
        }
        std::cout << " ";
        for(int j = 1; j<= sor; j++)
        {
            std::cout << "#";
        }
        for(int j = 1; j <= mag -sor; j++)
        {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}
void pozitiv(int* t, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(t[i] < 0)
        {
            t[i] = abs(t[i]);
        }
    }
}


int* sekelymasolat (int* t, int size)
{
    int* t2= t; // t2 = &t[0]
    return t2;

}

int* melymasolat(int* t, int size)
{
    int* t2 = new int[size];
    for(int i = 0; i < size; i++)
    {
        t2[i] = *(t + i);
    }
    return t2;
}
int main()
{
    //előző órai csoda
    szemely sz1;
    sz1.nev = "János";
    sz1.kor = 30;

    szemely sz2;
    sz2.nev = "Kitti";
    sz2.kor = 25;
    std::cout << sz1 << " " << sz2 << std::endl;

    std::cout << is_palindrome("abba") << " " <<is_palindrome("aladar") << " " << is_palindrome("");
    
    printascii();

    mario(3);

    int tomb[5] = {1,-2,3,-4,-5};

    pozitiv(tomb,5);

    //sekély

    int* tomb2 = sekelymasolat(tomb, 5);

    tomb[0] = 100;

    std::cout << tomb[0] << " " << tomb2[0] << std::endl;

    //mélymásolat

    int* tomb3 = melymasolat(tomb, 5);

    tomb[0] = 1;

    std::cout << tomb[0] << " " << tomb3[0] << std::endl;
    return 0;
}