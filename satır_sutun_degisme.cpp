#include<iostream>
using namespace std;

int main()
{
    // 3x3 boyutunda bir matris tanımlıyoruz.
    int matris[3][3] = { {6,9,3},{5,1,2},{9,6,4} };

    // Orijinal matrisin ekrana yazdırılması.
    cout << "Orjinal matris:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Matrisin her elemanını ekrana yazdırıyoruz.
            cout << " " << matris[i][j] << " ";
        }
        cout << endl;
    }

    // Satır ve sütun elemanlarının yer değiştirilmiş halini ekrana yazdırıyoruz.
    cout << "Satir ve sutun yer degismis matris:" << endl;

    // Yeni matris (matris2) oluşturuyoruz ve satır ve sütunları yer değiştiriyoruz.
    int matris2[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Matrisin i. satır ve j. sütun elemanlarının yerini değiştiriyoruz.
            matris2[i][j] = matris[j][i];

            // Yeni matrisi ekrana yazdırıyoruz.
            cout << " " << matris2[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
