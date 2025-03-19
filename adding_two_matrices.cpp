#include<iostream>
using namespace std;

int main()
{
    // 3x3 boyutunda iki adet matris tanımlıyoruz.
    int matris1[3][3] = { {4,8,6},{2,9,5},{7,1,3} };
    int matris2[3][3] = { {4,8,6},{2,9,5},{7,1,3} };

    // Toplamları tutacak üçüncü bir matris tanımlıyoruz.
    int matris3[3][3];

    // İki matrisi topluyor ve sonucu üçüncü matrise atıyoruz.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Her iki matrisin aynı elemanlarını topluyoruz.
            matris3[i][j] = matris1[i][j] + matris2[i][j];
        }
    }

    // Sonuç matrisini ekrana yazdırıyoruz.
    cout << "Toplama islemi sonucu matris3:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matris3[i][j] << " "; // Her bir elemanı ekrana yazdırıyoruz.
        }
        cout << endl; // Satır sonuna geldiğimizde bir alt satıra geçiyoruz.
    }

    return 0;
}
