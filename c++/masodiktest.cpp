#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

int fibonacci(int n){
    if(n <= 1){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int legnagyobb_fib(int a, int b){
    int fib = 0;
    int n = 0;
    while(fib <= b){
        fib = fibonacci(n);
        if(fib >= a && fib <= b){
            n++;
        }
        else{
            n++;
        }
    }
    return fib;
}

void row_avg(const int arr[4][4], int row_avg[]){
    for(int i = 0; i < 4; i++){
        int row_sum = 0;
        for(int j = 0; j<4;j++){
            row_sum += arr[i][j];
        }
        double avg = (double)row_sum / 4.0;
        row_avg[i] = (int)avg;
        cout << "Sor:" << i + 1 << "atlag: " << row_avg[i]  << endl;
    }
}
int main(){
    int a = 10;
    int b = 50;

    cout << "A két szam kozott a legnagyobb fibonacci szam: " << legnagyobb_fib(a,b) << endl;

    int szamok[4][4] = {
                            {1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16}
                        };
    int row[4];

    row_avg(szamok, row);

    return 0;
}