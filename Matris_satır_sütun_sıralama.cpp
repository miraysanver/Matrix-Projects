#include<iostream>
using namespace std;

int main()
{
    int matris[3][3] = { {4, 8, 6}, {2, 9, 5}, {7, 1, 3} };

    // Orijinal matrisin yazdırılması
    cout << "Orjinal matris: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }

    // Sütunlardaki elemanları büyükten küçüğe sıralama (Selection Sort)
    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < 2; i++)  // Doğru index aralığı
        {
            for (int j = 0; j < 3; j++)
            {
                if (matris[j][i] < matris[j + 1][i])
                {
                    int gecici = matris[j + 1][i];
                    matris[j + 1][i] = matris[j][i];
                    matris[j][i] = gecici;
                }
            }
        }
    }

    // Sütunları sıralanmış matrisin yazdırılması
    cout << "Sütunlardaki elemanlar sıralanmış hali: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }

    // Satırlardaki elemanları büyükten küçüğe sıralama (Selection Sort)
    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (matris[j][i] < matris[j][i + 1])
                {
                    int gecici = matris[j][i + 1];
                    matris[j][i + 1] = matris[j][i];
                    matris[j][i] = gecici;
                }
            }
        }
    }

    // Hem sütun hem satır sıralamış matrisin yazdırılması
    cout << "Hem sütun hem satır sıralanmış matris: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}