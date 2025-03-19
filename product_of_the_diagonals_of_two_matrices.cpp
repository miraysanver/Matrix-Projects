#include<iostream>
using namespace std;

int main()
{
    // 3x3 boyutunda iki adet matris tanımlıyoruz.
    int matris1[3][3] = { {2,5,3},{7,4,2},{5,3,1} };
    int matris2[3][3] = { {4,1,5},{8,5,7},{4,5,2} };

    // Köşegen elemanlarının çarpımını tutacak değişkenler.
    int kosegen1 = 1, kosegen2 = 1;

    // İlk matrisin köşegen elemanlarını çarpıyoruz.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // i == j koşulu köşegen elemanlarını seçer (i ve j aynı olduğunda).
            if (i == j)
            {
                // Köşegen elemanını çarpıyoruz.
                kosegen1 = kosegen1 * matris1[i][j];
            }
        }
    }

    // İkinci matrisin köşegen elemanlarını çarpıyoruz.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // i == j koşulu köşegen elemanlarını seçer (i ve j aynı olduğunda).
            if (i == j)
            {
                // Köşegen elemanını çarpıyoruz.
                kosegen2 = kosegen2 * matris2[i][j];
            }
        }
    }

    // İlk matrisin köşegen çarpımını ekrana yazdırıyoruz.
    cout << " matris 1'in kosegen carpimi = " << kosegen1 << endl;

    // İkinci matrisin köşegen çarpımını ekrana yazdırıyoruz.
    cout << " matris 2'nin kosegen carpimi = " << kosegen2 << endl;

    return 0;
}
