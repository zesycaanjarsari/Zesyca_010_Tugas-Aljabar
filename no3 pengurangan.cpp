#include <iostream>

using namespace std;

int main()
{
    int i, j, baris_matriks, kolom_matriks, matriks_1[10][10], matriks_2[10][10], hasil[10][10];

    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris_matriks;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom_matriks;

    cout << "Masukkan elemen matrix pertama: \n";
    for (i = 0; i < baris_matriks; i++)
    {
        for (j = 0; j < kolom_matriks; j++)
        {
            cin >> matriks_1[i][j];
        }
    }

    cout << "Masukkan elemen matrix kedua: \n";
    for (i = 0; i < baris_matriks; i++)
    {
        for (j = 0; j < kolom_matriks; j++)
        {
            cin >> matriks_2[i][j];
        }
    }

    cout << "Hasil pengurangan matrix: \n";
    for (i = 0; i < baris_matriks; i++)
    {
        for (j = 0; j < kolom_matriks; j++)
        {
            hasil[i][j] = matriks_1[i][j] - matriks_2[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
