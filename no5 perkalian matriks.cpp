#include <iostream>

using namespace std;

int main()
{
    int matriks_1[10][10], matriks_2[10][10], hasil[10][10];
    int i, j, k, baris_pertama, kolom_pertama, baris_kedua, kolom_kedua, jumlah = 0;
    cout << "Masukkan jumlah baris matriks pertama: ";
    cin >> baris_pertama;
    cout << "Masukkan jumlah kolom matriks pertama: ";
    cin >> kolom_pertama;

    cout << "Masukkan jumlah baris matriks kedua: ";
    cin >> baris_kedua;
    cout << "Masukkan jumlah kolom matriks kedua: ";
    cin >> kolom_kedua;

    if (kolom_pertama != baris_kedua)
    {
        cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
    }
    else
    {

        cout << "Masukkan elemen matriks pertama: \n";
        for (i = 0; i < baris_pertama; i++)
        {
            for (j = 0; j < kolom_pertama; j++)
            {
                cin >> matriks_1[i][j];
            }
        }

        cout << "Masukkan elemen matriks kedua: \n";
        for (i = 0; i < baris_kedua; i++)
        {
            for (j = 0; j < kolom_kedua; j++)
            {
                cin >> matriks_2[i][j];
            }
        }

        for (i = 0; i < baris_pertama; i++)
        {
            for (j = 0; j < kolom_kedua; j++)
            {
                for (k = 0; k < baris_kedua; k++)
                {
                    jumlah = jumlah + matriks_1[i][k] * matriks_2[k][j];
                }
                hasil[i][j] = jumlah;
                jumlah = 0;
            }
        }

        cout << "Hasil perkalian matriks: \n";
        for (i = 0; i < baris_pertama; i++)
        {
            for (j = 0; j < kolom_kedua; j++)
            {
                cout << hasil[i][j] << "\t";
            }
            cout << endl;
        }
    }

    return 0;
}
