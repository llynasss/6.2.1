#include <iostream> 

#include <iomanip> 

#include <time.h> 



using namespace std;



void create(int* a, const int size, const int Low, const int High);

void print(int* a, const int n);

void change(int* a, int n);



int main() {

    srand((unsigned)time(NULL));



    const int n = 10;

    const int low = -10;

    const int hight = 10;



    int a[2 * n];



    create(a, n, low, hight);



    print(a, n);



    change(a, 2 * n);



    print(a, n);



    cout << "------------------------------------\n";





}



void create(int* a, const int size, const int Low, const int High)

{

    for (int i = 0; i < size; i++)

        a[i] = Low + rand() % (High - Low + 1);

}



void print(int* a, const int n) {

    cout << "------------------------------------\n" <<

        "| a |";

    for (int i = 0; i < n; i++) {

        cout << " " << setw(2) << a[i];

    }

    cout << "|\n";

}



void change(int* a, int n) {

    int tmp;

    for (int i = 1; i < n; i += 2) {

        tmp = a[i - 1];

        a[i - 1] = a[i];

        a[i] = tmp;

    }

}