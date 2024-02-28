#include <iostream>

int main()
{
    // == <= >= <> != !
    
     std::cout << (10 == 1) << std::endl; // hamis 

    //logikai operátorok
    // && // !
    // és vagy tagadás

    std::cout << !false << std::endl;
    std::cout << (true || false) << std::endl;

    //bitműveletek
    // & / ^ << >>
    //bitenkénti és, vagy, XOR, balra eltolás, jobbra eltolás 
    int A = 60;
    int B = 13;

    std::cout << (A&B) << std::endl;

    std::cout << A<<2 << std::endl;
    std::cout << (A<<2) << std::endl; // zárójellel bitművelenként van értelmezve (MÁS EREDMÉNY!!!)

    //értékadó operátorok
    // =, += , -=, *=, /=, %=, <<=(bitenkénti eltolás balra pl.: A= A<<2), >>=, &=, |=, ^=

    A += 10;
    std::cout << A << std::endl;

    //tömbök
    // típus név[méret] pl., típus név[méret] = {t1,t2,....};

    int tomb[5] = {1, 2, 3, 4, 5};

    std::cout << tomb[0] << std::endl;

    std::cout << tomb[5] << std::endl; // az indexelés hibás mert csak 4-ig tart az index azonban hibát nem kapsz és egy random memóriaszemetet kapsz vissza
                                         // ha túlcsordul az egész akkor segmentation fault hibát kaphatunk 
    
    // tömbmódosítás

    tomb[0] = 2;  // 1 helyett 2 lesz

    //karakteres tömb
    char sztring[] = "Hello, world!";

    sztring[0] = 'h';

    std::cout << sztring << std::endl;

    std::string cppstring = "Hello, world!";
    cppstring[0] = 'h';

    std::cout << cppstring << std::endl;

    using namespace std; // nem kell kiírni folyamatosan a std-t(NEM OPTIMÁLIS)

    cout << "std névtérben vagyunk " << endl;

    //implicit típuskonverzió

    int num = 92;
    double d;

    d = num;
    cout << d << endl;


    double double_num = 1.11;
    int int_num;

    int_num = double_num;
    cout << int_num << endl;    

    
    //explicit
    int z = 21;
    double dupla;

    dupla = double(z);
 
    // IF

    if( 21 > 10) 
    {
        cout << "A feltétel igaz" << endl;
    }

    if ( A ) //korábban megadtuk hogy 60 ezért lesz igaz, ha full 0 akkor lesz hamis
    {
        cout << "A feltétel igaz" << endl;
    }

    if ( A == 0 ) // dupla == összehasonlítás, sima = értékadás
    {
        cout << "A feltétel igaz" << endl;        
    }

    if( 21 > 10) 
    {
        cout << "A feltétel igaz" << endl;
    }
    else
    {
        cout << "A feltétel hamis" << endl;
    }

    if (21 > 10)
    {
        cout << "igaz ág" << endl;
    }
    else if (1<2)
    {
        cout << "else if ág" << endl;
    }
    else if (3>2)
    {
        cout << "else if2 ág" << endl;
    }
    else
    {
        cout << "else ég " << endl;
    }


    if ( 10>9 ) 
    {
        if( 1 < 2 )
        {
            cout << "belső ág" << endl;
        }
    }

    int cif = 10 > 9 ? 1 : 0; // kb ugyanaz mint a C# ?: ==> (feltétel) ?  ha igaz :ha hamis
    cout << cif << endl;

    int x1 = 1;
    int y1 = 10;
    string eredmeny;

    eredmeny = (x1 == y1) ? "egyenlő" : "nem egyenlő";
    cout << eredmeny << endl;

    if ( x1 == y1 )
    {
        eredmeny = "egyenlő";
    }
    else if (x1 < y1) 
    {
        eredmeny = "kisebb";
    }
    else 
    {
        eredmeny = "nagyobb";
    }

    cout << eredmeny << endl;

    eredmeny = (x1 == y1) ? "egyenlő" : (x1 < y1) ? "kisebb" : "nagyobb";
    cout << eredmeny << endl;

    int nap = 7;

    switch ( nap ) 
    {
        case 6:
           cout << "szombat" << endl;
           break;
        case 7:
            cout << "vasárnap" <<endl;
            break;
        default:
            cout << "mindjárt hétvége" << endl;
            break;
    }

    int i = 0;

    while( i<10 ) //előltesztelő ciklus, 0 vagy több alkalommal fut 
    {
        cout << i << " ";
        i++;
    }
    cout << endl;

    do //hátultesztelő ciklus, 1 vagy több alkalommal fut
    {
        cout << i << " ";
        i++;
    } 
    while ( i < 10);
    cout << endl;

    //for
    //meghatározott lépésszámú ciklus
    //előírt lépésszámú ciklus
    //for(ciklusváltozó inicializálás; leállási feltétel; ciklusváltozó értékváltozása)

    for(int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}