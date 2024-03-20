#include <iostream>
#include <vector>
#include <algorithm>

int osszead(int a, int b)
{
    return a+b;
}

void csere(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void cseref(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void csereptr(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void szoroz(int& a, int szam)
{
    a = a * szam;
    szam++;
}

void tombkiir(int tomb[5]) //int*
{
    for(int i = 0; i < 5; i++)
    {
        std::cout << ++tomb[i] << " ";
    }
    std::cout << std::endl;
}

int fakt(int n)
{
    int sz = 1;
    for(int i = 2; i <= n; i++)
    {
        sz = sz * i;
    }
    return sz;
}

int factrec(int n)
{
    if ( n > 1 )
    {
        return n * factrec(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    std::vector<int> v; //vektor, amelynek minden eleme integer
    
    for(int i = 0; i <= 10 ; i++)
    {
        v.push_back(i*10);
        std::cout << v[i] << " "  << v.at(i) << std::endl;
    }

    std::cout << v[-2] << std::endl; //vektor 0. elemétől 2 integernyit lép vissza 
    //std::cout << v.at(-2) << std::endl; //vektor eleme a -2. pozíción

    std::cout << v.size() << " " << v.capacity() << std::endl;

    int* pos = v.data();

    std::cout << pos << std::endl;

    v.push_back(101);
    v.push_back(101);
    v.push_back(101);
    v.push_back(101);
    v.push_back(101);
    v.push_back(101);
    v.push_back(101);

    pos = v.data();
    std::cout << pos << std::endl;
    std::cout << v.size() << " " << v.capacity() << std::endl; //elemek és méret

    std::cout << v.front() << " " << v.back() << std::endl; //első és utolsó elem 

    v.pop_back();//utolsó elem eltávolítása
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    std::cout << v.back() << "";

    v.clear();
    std::cout << v.size() << " " << v.capacity() << std::endl;
    v.shrink_to_fit();
    std::cout << v.size() << " " << v.capacity() << std::endl; 

    v = {3, 54, 3, 5, 3, 5, 7, 8, 9, 4, 7, 3, 6, 8, 33, 66, 88, 34};

    std::sort(v.begin(), v.end());

    for(int i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    //függvény type shi 
    //felépítése: típus(visszatérési érték) név(ptípus1 prin1, ....){..return érték;}
    //speciális visszatérés:void csere(int a, int b){int temp= A; A=B; B=Temp;} -->ELJÁRÁS = VOID
    //Nincs visszatérési érték!

    int x = 1;
    int y = 2;

    int o = osszead(x,y);
    std::cout << osszead(x,y) << std::endl;

    int tmp = x;
    x = y;
    y = tmp;

    std::cout << x << " " << y << std::endl; 

    csere(x,y);
    std::cout << x << " " << y << std::endl;

    cseref(x,y);
    std::cout << x << " " << y << std::endl;

    csereptr(&x,&y); //memóriacímeket küldjenek
    std::cout << x << " " << y << std::endl;

    szoroz(x,10);
    std::cout << x << std::endl;

    szoroz(x,x);
    std::cout << x << std::endl;

    int tomb[5] = {1,2,3,4,5};

    tombkiir(tomb); //tombkiir(&tomb[0])
    tombkiir(tomb);

    std::cout << fakt(5) << std::endl;

    std::cout << factrec(5) << std::endl;
    return 0;
}