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
        strcpy(elem[0].N, "3872 ����");

        elem[1].A = 6;
        strcpy(elem[1].N, "�������");

        elem[2].A = 8;
        strcpy(elem[2].N, "��������");

        elem[3].A = 12;
        strcpy(elem[3].N, "������");

        elem[4].A = 16;
        strcpy(elem[4].N, "������� ������");

        elem[5].A = 10;
        strcpy(elem[5].N, "���������� ���");

        elem[6].A = 18;
        strcpy(elem[6].N, "�������");

        elem[7].A = 8;
        strcpy(elem[7].N, "������");

        elem[8].A = 4;
        strcpy(elem[8].N, "���������");

        elem[9].A = 6;
        strcpy(elem[9].N, "�������� ���");

        elem[10].A = 16;
        strcpy(elem[10].N, "���������");

        elem[11].A = 2;
        strcpy(elem[11].N, "�-� �����");

        elem[12].A = 2;
        strcpy(elem[12].N, "����������� �������");

        elem[13].A = 12;
        strcpy(elem[13].N, "����� ��� �������");

        elem[14].A = 18;
        strcpy(elem[14].N, "������������");

        elem[15].A = 4;
        strcpy(elem[15].N, "���� ��������");

        elem[16].A = 4;
        strcpy(elem[16].N, "��������");

        elem[17].A = 2;
        strcpy(elem[17].N, "������� �������");

        elem[18].A = 8;
        strcpy(elem[18].N, "�������");

        elem[19].A = 8;
        strcpy(elem[19].N, "�������������");

        elem[20].A = 1;
        strcpy(elem[20].N, "������� ��������");

        elem[21].A = 14;
        strcpy(elem[21].N, "���������� ������ ����������� ����");

        elem[22].A = 4;
        strcpy(elem[22].N, "������ ������");

        elem[23].A = 14;
        strcpy(elem[23].N, "����������� �����");

        elem[24].A = 2;
        strcpy(elem[24].N, "�������");

        elem[25].A = 20;
        strcpy(elem[25].N, "����������� ������");

        elem[26].A = 6;
        strcpy(elem[26].N, "������");

        elem[27].A = 2;
        strcpy(elem[27].N, "�������� �������");

        elem[28].A = 10;
        strcpy(elem[28].N, "������� ������");

        elem[29].A = 1;
        strcpy(elem[29].N, "��������� �����");

        elem[30].A = 14;
        strcpy(elem[30].N, "��������� �����");

        elem[31].A = 1;
        strcpy(elem[31].N, "�����");

        elem[32].A = 1;
        strcpy(elem[32].N, "����������� �����");

        elem[33].A = 1;
        strcpy(elem[33].N, "������� ������");

        elem[34].A = 6;
        strcpy(elem[34].N, "�����������");

        elem[35].A = 16;
        strcpy(elem[35].N, "���� ���");

        elem[36].A = 12;
        strcpy(elem[36].N, "��������� �����");

        srand(time(nullptr));
        int a = rand()%37;
        cout << elem[a].N << " " << elem[a].A << endl;

        return elem[a].A;
    }

