#include <iostream>

int main()
{
    //MÚLT ÓRÁRÓL
    //for
    //meghatározott lépésszámú ciklus
    //előírt lépésszámú ciklus
    //for(ciklusváltozó inicializálás; leállási feltétel; ciklusváltozó értékváltozása)

    for(int i = 0; i < 10; i++)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    //végtelen ciklusok 
    /*
    while (true)
    {
        std::cout << "végtelen ciklus" << std::endl;
    }
    */

    /*
    for(int i = 0 ; ;i++)
    {
        std::cout << i << std::endl;
    }
    */

    /*
    for (;;)
    {
        std::cout << "végtelen ciklus" << std::endl;
    }
    */

   //beágyazott ciklus

    std::cout << "i j"<< std::endl;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<5; j++)
        {
            std::cout << i << " " <<j << std::endl;
        }
    }

    //tömb végig járás

    int szamok[5] = {20,30,40,50,60};

    std::cout << szamok << std::endl;

    for(int i = 0; i < 5; i++)//rendezéshez előnyös
    {
        std::cout << szamok[i] << " ";
        //szamok[i] = szamok[i-1]*2; //indexelés miatt lehetséges de foreach-ben nem
    }
    std::cout << std::endl;

    //foreach alkalmazása --> for(típus[tömb típusa] név[tömb 1 elemét röprezentálni] : tömb)

    for(int szam : szamok) //nincs indexelés
    {
        std::cout << szam << " ";
    }
    std::cout << std::endl;

    //tömb méret

    std::cout << sizeof(szamok) << std::endl; // int 4byte, 5 elem => 5x4 byte = 20byte

    for(int i = 0 ; i < sizeof(szamok)/sizeof(int); i++) //tömb tényleges hossz
    {
        std::cout << szamok[i] << " ";
    }
    std::cout << std::endl;

    //ciklus , break és continue

    int i = 0;
    while(i < 10)
    {
        std::cout << i << " ";
        i++;
        if(i == 4 )
        {
            break;
        }
    }
    std::cout << std::endl; 

    i = 0;
    while(i < 10)
    {
        if(i == 4)
        {
            i++;
            continue;
        }
        std::cout << i << " ";
        i++;
    }

    //2d tömbök

    char betuk[2][4] = 
    {
        {'a' ,'b' ,'c' ,'d'},
        {'e' ,'f' ,'g' ,'h'}
    };

    std::cout << betuk[0] << " " << betuk[1] << " " << betuk[0][2] << std::endl;

    for (int i = 0 ; i < 2 ; i++)
    {
        for (int j = 0; j < 4 ; j++)
        {
            std::cout << betuk[i][j] << " ";
        }
        std::cout << std::endl;
    }


    int szam2d[3][4] = 
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    //lokális blokk
    {
        float osszeg;
        for(int i = 0; i < 3 ; i++)
        {
            osszeg = 0;
            for (int j = 0; j < 4 ; j++)
            {
                osszeg += szam2d[i][j];
            }
            std::cout << osszeg/4 << std::endl;
        }
    }
    struct
    {
        int Szulev;
        std::string nev;

    } szemely1 , szemely2;
    
    szemely1.Szulev = 2000;
    szemely1.nev = "Kiss János";

    std::cout << szemely1.nev << " " << szemely1.Szulev <<  std::endl;

    szemely2 = szemely1;

    szemely2.Szulev = 2010;
    
    std::cout << szemely1.Szulev << " " << szemely2.Szulev << std::endl;

    struct jarmu
    {
        std::string marka;
        std::string tipus;
        short int evjarat;
    };

    jarmu swift;
    swift.marka = "Suzuki";
    swift.tipus = "Swift";
    swift.evjarat = 2002;

    jarmu corsa;
    corsa.marka = "Opel";
    corsa.tipus = "Corsa";
    corsa.evjarat = 2004;

    if(swift.evjarat > corsa.evjarat)
    {
        std::cout << "A " << swift.tipus << " fiatalabb" << std::endl;
    }
    else
    {
        std::cout << "A " << corsa.tipus << " fiatalabb" << std::endl;
    }

    std::string st = "narancs";
    std::string & gyumolcs = st; //referencia

    std::cout << st << " " << gyumolcs << std::endl;
    std::cout << &st << " " << &gyumolcs << std::endl; //memória cím

    gyumolcs = "kiwi"; // ténylegesen össze vannak a kötve szóval ha változtatom a 'gyumolcs'-ot akkor változik az 'st' is

    std::cout << st << " " << gyumolcs << std::endl;

    int a = 10;
    int *b = &a; //pointer értéke memóriacím!  '*' karakter a pointer
    //int *c = a;

    std::cout << a << " " << &a << " " << b << " " << &b << std::endl;

    //ebben az esetben dereferencia lép érvényben (b-n keresztül elértük az a-t)
    std::cout << *b << std::endl;

    *b = 15; //írható is 

    std::cout << a << " " << *b << std::endl;

    std::cout << sizeof(b) << std::endl;

    int *ptr = NULL; //nem létező memóriacímre mutat

    if(ptr)
    {
        std::cout << "Nem null" << std::endl;
    }
    else
    {
        std::cout << "Null" << std::endl;
    }
    return 0;
}