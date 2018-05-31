#include <iostream>
#include <windows.h>
#include "random.cpp"
#include "Fun_2.cpp"
#include "Fun_1.cpp"
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>

using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    int Hero_A = 9;
    int Hero_B = 1;
    int M_A, M_B;
    while(Hero_A < 11 || Hero_B < 11)
    {
        int A_1, A_2;
        srand(time(nullptr));
        A_1 = rand()%6;
        A_2 = rand()%6;
        cout << "A_1 = " << A_1 << "  or  " << "A_2 = " << A_2 << endl;
        int q;
        cin >> q;
        int Level_A;
        if (q == 1)
        {
            Level_A = Hero_A + A_1;
        }
        else
        {
            Level_A = Hero_A + A_2;
        }
        cout << "Level: " <<Level_A << endl;
        M_A = random_monstr();
        if(M_A < Level_A)
        {
            Hero_A = Hero_A + 1;
            cout << "winner!" << endl;
            Fun_2();

        }
        else
        {
            Hero_A = 1;
            cout << "loser!" << endl;
            Fun_1();

        }
        cout << "Your level: " << Hero_A << endl << endl << endl;

        if(Hero_A == 10)
        {
            cout << "First Hero is the WINNER!!!" << endl;
            break;
        }



        int B_1, B_2;
        srand(time(nullptr));
        B_1 = rand()%6;
        B_2 = rand()%6;
        cout << "B_1 = " << B_1 << "  or  " << "B_2 = " << B_2 << endl;
        int w;
        cin >> w;
        int Level_B;
        if (w == 1)
        {
            Level_B = Hero_B + B_1;
        }
        else
        {
            Level_B = Hero_B + B_2;
        }
        cout << "Level: " <<Level_B << endl;

        M_B = random_monstr();
        if(M_B < Level_B)
        {
            Hero_B = Hero_B + 1;
            cout << "winner!" << endl;
            Fun_2();

        }
        else
        {
            Hero_B = 1;
            cout << "loser!" << endl;
            Fun_1();
        }
        cout << "Your level: " << Hero_B << endl << endl << endl;

        if(Hero_B == 10)
        {
            cout << "Second Hero is the WINNER!!!" << endl;
            break;
        }

    }
}
