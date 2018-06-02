#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>

using namespace std;

struct Bonus
    {
        int A;
        char N[256];
    };
    int rand_bonus()
    {
        int z;
        setlocale(LC_ALL, "rus");
        Bonus elem[33];

        elem[0].A = 2;
        strcpy(elem[0].N, "Баклер бахвала");

        elem[1].A = 2;
        strcpy(elem[1].N, "Башмаки могучего пенделя");

        elem[2].A = 3;
        strcpy(elem[2].N, "Дубина джентельменов");

        elem[3].A = 3;
        strcpy(elem[3].N, "Кинжал измены");

        elem[4].A = 1;
        strcpy(elem[4].N, "Кожаный прикид");

        elem[5].A = 3;
        strcpy(elem[5].N, "Коротыширокие латы");

        elem[6].A = 1;
        strcpy(elem[6].N, "Крыса на палочке");

        elem[7].A = 4;
        strcpy(elem[7].N, "Лучок с ленточками");

        elem[8].A = 2;
        strcpy(elem[8].N, "Меч песни и пляски");

        elem[9].A = 3;
        strcpy(elem[9].N, "Меч широты вглядов");

        elem[10].A = 3;
        strcpy(elem[10].N, "Мифрильный панцирь");

        elem[11].A = 4;
        strcpy(elem[11].N, "Коленоотбойный молот");

         elem[12].A = 1;
        strcpy(elem[12].N, "Наёмничек");

        elem[13].A = 3;
        strcpy(elem[13].N, "Огромная каменюга");

        elem[14].A = 1;
        strcpy(elem[14].N, "Одиннадцатифутовый шеста");

        elem[15].A = 3;
        strcpy(elem[15].N, "Остроконечная шляпа могущества");

        elem[16].A = 4;
        strcpy(elem[16].N, "Палица остроты");

        elem[17].A = 4;
        strcpy(elem[17].N, "Плащ замутнённости");

        elem[18].A = 2;
        strcpy(elem[18].N, "Меч коварного ублюдка");

        elem[19].A = 5;
        strcpy(elem[19].N, "Посох напалма");

        elem[20].A = 2;
        strcpy(elem[20].N, "Пылающие латы");

        elem[21].A = 3;
        strcpy(elem[21].N, "Рапира такнечестности");

        elem[22].A = 3;
        strcpy(elem[22].N, "Реально впечатляющий титул");

        elem[23].A = 1;
        strcpy(elem[23].N, "Слизистая оболочка");

        elem[24].A = 4;
        strcpy(elem[24].N, "Совсехсторонний щит");

        elem[25].A = 3;
        strcpy(elem[25].N, "Бандана сволочизма");

        elem[26].A = 3;
        strcpy(elem[26].N, "Боевая стремянка");

        elem[27].A = 3;
        strcpy(elem[27].N, "Сыротёрка-умиротворения");

        elem[28].A = 4;
        strcpy(elem[28].N, "Швейцарская армейская алебарда");

        elem[29].A = 1;
        strcpy(elem[29].N, "Шлем отваги");

        elem[30].A = 1;
        strcpy(elem[30].N, "Шлем-рогач");

        elem[31].A = 3;
        strcpy(elem[31].N, "Сэндвич с сыром и селёдкой «Душистая смерть»");

        elem[32].A = 1;
        strcpy(elem[32].N, "Шипастые коленки");

        srand(time(nullptr));
        int a = rand()%33;
        int b = rand()%33;
        cout << elem[a].N << " = " << elem[a].A << endl;
        cout << elem[b].N << " = " << elem[b].A << endl;
        cin >> z;
        if(z == 1)
        {
            return elem[a].A;
        }

        else
        {
            return elem[b].A;
        }

    }
