#include <iostream>
#include <vector>

//Túlterhelés || overload
//függvének azonos névvel, de eltérő paraméterezéssel (típus vagy számosság)

int test()
{
    return 0;
};

int test(int a)
{
    return 0;
};

float test(double a)
{
    return 0;
};

int test(int a, double b)
{
    return 0;
};

//NEM MEGENGDETT!!

/*int test(int b)
{
    return 0;
};*/

/*float test(int b)
{
    return 0;
};*/

int absolute (int a)
{
    if(a < 0)
    {
        a = -a;
    }
    return a;
};

double absolute (double a)
{
    if(a < 0.0)
    {
        a = -a;
    }
    return a;
}

void kiir(int a)
{
    std::cout << "Integer:" << a <<std::endl;
};

void kiir(double a)
{
    std::cout << "Double:" << a << std::endl;
};

void kiir(int a, double b)
{
    std::cout << "Integer:" << a << std::endl;
    std::cout << "Double:" << b <<std::endl;
};

//operátor túlterhelés

void operator<<(std::vector<double>& v, double d) // ha módosítani akarjuk az eredeti vektort akkor &!
{
    v.push_back(d);
}

std::vector<int> operator+(std::vector<int> v1 , std::vector<int> v2)
{
    std::vector<int> o;
    for(int i : v1)
    {
        o.push_back(i);
    }

    for(int i : v2)
    {
        o.push_back(i);
    }
    return o;
}
/*
chatgpt typeshi
template<typename T>
std::vector<T>& operator<<(std::vector<T>& v, const T& value)
{
    v.push_back(value);
    return v;
}*/

std::vector<int>& operator<<(std::vector<int>& v, int i)
{
    v.push_back(i);
    return v;
}

void operator++(std::vector<int> v)
{
    for(int i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

std::vector<int>& operator--(std::vector<int>& v)
{
    for(int& i : v)
    {
        std::cout << --i << " ";
    }
    std::cout << std::endl;
    return v;
}

struct szemely
{
    std::string nev;
    int kor;
};

std::ostream operator<<()
{
    
}


int main()
{
    test();//4.sor
    test(10);//6.sor
    test(2.4);//11.sor
    test(1, 2.2);//16.sor

    //float f = test(2);

    int a = 5;
    double b = 5.5;

    std::cout << absolute(a) << " " << absolute(b) << " ";

    std::cout << "\n";
    kiir(a);
    kiir(b);
    kiir(a,b);

    //operátor túlterhelés || operator overloading
    //fordítás-idejű polimorfizmus
    //az eredeti operátorok megmaradnak, nem változtathatóak
    //az operátorok új müködést, funkciót kapnak.
    /*Nem túlterheltő operátorok
    sizeof
    typeid
    scope resolution(::)
    class member access (. , . *) (pont, pointer to member)
    ternary(?:)
    */

    std::vector<double> vd = {0, 1, 2.2};
    vd.push_back(3.3);

    vd << 4.4;
    
    for(double d: vd)
    {
        std::cout << d << std::endl;
    }

    std::cout << std::endl;

    std::vector<int> v1 = {1,2,3,4};
    std::vector<int> v2 = {5,6,7,8};
    std::vector<int> o = v1 + v2;

    for(int i : o)
    {
        std::cout << i << " ";
    }

    std::vector<int> v = {1,2,3};
    //feladat: legyen összefűzhető
    std::cout << std::endl;
    v << 4 << 5 << 6;

    for(int i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl; 

    ++v;

    ------v;

    szemely sz1;
    sz1.nev = "János";
    sz1.kor = 30;

    szemely sz2;
    sz2.nev = "Kitti";
    sz2.kor = 25;

    std::cout << sz1 << " " << sz2 << std::endl;
    return 0;
}