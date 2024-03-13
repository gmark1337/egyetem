#include <iostream>

int main()
{
    int tomb [5] = {1,2,3,4,5};
    int *tptr; //* pointer

    tptr = tomb; //tptr = &tomb[0]

    std::cout << " " << &tomb[0] << " " << tptr << std::endl;

    for(int i = 0; i<5; i++)
    {
        std::cout << tptr << " " << *tptr << std::endl;
        tptr++;
    }

    tptr = &tomb[4];

    for(int i = 5; i > 0 ; i--)
    {
        std::cout << tptr << " " << *tptr << std::endl;
        tptr--;
    }

    tptr = tomb;

    while(tptr <= &tomb[4])
    {
        std::cout << tptr << " " << *tptr << std::endl;
        tptr++;
    }

    *(tomb+4) = 500;

    std::cout << tomb[4] << std::endl;

    for(int i = 0; i < 5 ; i++)
    {
        *(tomb + i) = 1;//tomb[i] = 1; || (&tomb[0] + i) = 1
    }
    
    int* ptrtomb[5]; //5 elemű tömb, az elemek típusa pointer
    for(int i = 0; i < 5 ; i++)
    {
        ptrtomb[i] = &tomb[i];
        std::cout << *ptrtomb[i] << " ";
    }
    std::cout << std::endl;

    const char* names[3] = {"Károly", "Tamás", "István"};

    for(int i = 0; i < 3; i++)
    {
        std::cout << (names+i) << " " << *(names+i) << std::endl;
    }

    int z = 10;
    int * zptr = &z;
    int ** zpptr = &zptr; //???????????????????????????????????????????????

    std::cout << z << " " << *zptr << " " << **zpptr << std::endl;

    //*p++ vagy *(p++) pointer inkrementálása, majd a megnövelés előtti címen található pointer derefencelése

    //*++p vagy a *(++p) pointer inkrementálása, majd deference 

    //++*p vagy ++(*p) pointer derefence, majd a mutatott érték növelése

    //(*p)++ derefence, majd érték növelése 

    int cseretomb[5] = {1,2,3,4,5};
    int temp = *cseretomb;

    *cseretomb = *(cseretomb+4);
    *(cseretomb+4) = temp;

    for(int i = 0; i < 5 ; i++)
    {
        std::cout << *(cseretomb+i) << " ";
    }
    std::cout << std::endl;

    int A[5] = {1,2,3,4,5};
    int B[5];

    int* Aptr = A;
    int* Avptr = &A[4];
    int* Bptr = B;

    while(Aptr <= Avptr)
    {
        *(Bptr++) = *(Aptr++);
        //*Bptr == *Aptr;
        //Bptr++;
        //Aptr++;
    }

    for(int i = 0; i < 5; i++)
    {
        std::cout << A[i] << " " << B[i] << std::endl;
    }
    
    //Stack 

    int a;
    int b[10];

    //Heap
    //C malloc és free
    //C++ new és delete 
    //pointer-változó = new adattípus;

    int*p = new int;

    int*tp = new int[10];

    int* p2 = new(std::nothrow) int;

    if(!p2)// p2 == NULL
    {
        std::cout << "Memória allokáció nem sikerült" << std::endl;
    }
    else
    {
        *p2 = 29;
        std::cout << "A p2 értéke: " << *p2 << std::endl;
    } 


    float* r = new float(72.24);
    
    std::cout << r << " " << *r << " " << &r << std::endl;

    int n2 = 5;
    int* q = new int[n2];

    for(int i = 0 ; i < n2; i++)
    {
        q[i] = i+1;
        std::cout << q[i] << std::endl;
    }

    delete p2;
    delete r;

    //delete q(q-nak 1 elemét törli); //delete &q[0]
    delete[] q; // az egészet törli

    


    return 0;
}