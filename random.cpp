#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>

using namespace std;


    struct Monstr
    {
        int A;
        char N[256];
    };
    int random_monstr()
    {
        setlocale(LC_ALL, "rus");
        Monstr elem[37];

        elem[0].A = 10;
        strcpy(elem[0].N, "3872 орка");

        elem[1].A = 6;
        strcpy(elem[1].N, "Адвокат");

        elem[2].A = 8;
        strcpy(elem[2].N, "Амазонка");

        elem[3].A = 12;
        strcpy(elem[3].N, "Бигфут");

        elem[4].A = 16;
        strcpy(elem[4].N, "Бледные братья");

        elem[5].A = 10;
        strcpy(elem[5].N, "Блуждающий нос");

        elem[6].A = 18;
        strcpy(elem[6].N, "Бульдог");

        elem[7].A = 8;
        strcpy(elem[7].N, "Газебо");

        elem[8].A = 4;
        strcpy(elem[8].N, "Гарпистки");

        elem[9].A = 6;
        strcpy(elem[9].N, "Гикающий гик");

        elem[10].A = 16;
        strcpy(elem[10].N, "Гиппогриф");

        elem[11].A = 2;
        strcpy(elem[11].N, "Г-н Кости");

        elem[12].A = 2;
        strcpy(elem[12].N, "Желатиновый октаэдр");

        elem[13].A = 12;
        strcpy(elem[13].N, "Закос под вампира");

        elem[14].A = 18;
        strcpy(elem[14].N, "Кальмадзилла");

        elem[15].A = 4;
        strcpy(elem[15].N, "Конь андедный");

        elem[16].A = 4;
        strcpy(elem[16].N, "Лепрокон");

        elem[17].A = 2;
        strcpy(elem[17].N, "Летучие лягушки");

        elem[18].A = 8;
        strcpy(elem[18].N, "Лицесос");

        elem[19].A = 8;
        strcpy(elem[19].N, "Мадемонуазели");

        elem[20].A = 1;
        strcpy(elem[20].N, "Молотая крысотка");

        elem[21].A = 14;
        strcpy(elem[21].N, "Невыразимо жуткий неописуемый ужас");

        elem[22].A = 4;
        strcpy(elem[22].N, "Улётные улитки");

        elem[23].A = 14;
        strcpy(elem[23].N, "Обдолбанный голем");

        elem[24].A = 2;
        strcpy(elem[24].N, "Питбуль");

        elem[25].A = 20;
        strcpy(elem[25].N, "Плутониевый дракон");

        elem[26].A = 6;
        strcpy(elem[26].N, "Рыгачу");

        elem[27].A = 2;
        strcpy(elem[27].N, "Сердитый бройлер");

        elem[28].A = 10;
        strcpy(elem[28].N, "Сетевой тролль");

        elem[29].A = 1;
        strcpy(elem[29].N, "Сочащаяся слизь");

        elem[30].A = 14;
        strcpy(elem[30].N, "Страховой агент");

        elem[31].A = 1;
        strcpy(elem[31].N, "Вошки");

        elem[32].A = 1;
        strcpy(elem[32].N, "Огорошенная трава");

        elem[33].A = 1;
        strcpy(elem[33].N, "Увечный гоблин");

        elem[34].A = 6;
        strcpy(elem[34].N, "Утконтикора");

        elem[35].A = 16;
        strcpy(elem[35].N, "Царь Тут");

        elem[36].A = 12;
        strcpy(elem[36].N, "Языческий демон");

        srand(time(nullptr));
        int a = rand()%37;
        cout << elem[a].N << " " << elem[a].A << endl;

        return elem[a].A;
    }

