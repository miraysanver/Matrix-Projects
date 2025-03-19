#include<iostream>
using namespace std;

int main()
{
    // 3x3 boyutunda bir matris tanımlıyoruz.
    int matris[3][3] = { {4,8,6},{2,9,5},{7,1,3} };

    // Satırların çarpımlarını tutacak bir dizi tanımlıyoruz.
    int dizi[3] = {};

    // Çarpma işlemi için başlangıç değeri 1 olarak belirliyoruz.
    int carpim = 1;

    // Matrisin her bir satırı için çarpma işlemi yapıyoruz.
    for (int i = 0; i < 3; i++)
    {
        // Satırdaki her bir elemanla çarpma işlemi yapıyoruz.
        for (int j = 0; j < 3; j++)
        {
            carpim *= matris[i][j];
        }

        // Çarpımın sonucunu ekrana yazdırıyoruz.
        cout << "Satir " << i + 1 << " çarpımı: " << carpim << endl;

        // Çarpım sonucunu dizi[i]'ye atıyoruz.
        dizi[i] = carpim;

        // Bir sonraki satır için çarpımı sıfırlıyoruz.
        carpim = 1;

        // dizi[i] elemanını ekrana yazdırıyoruz.
        cout << "dizi[" << i << "] = " << dizi[i] << endl;
    }

    return 0;
}
