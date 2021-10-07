/*
SLAMET HUDHA NURROHMAN
A11.2021.13261
MA11102-2021
*/

#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

main() {
//variable :
    char nama [35], nim[20];
    float x, y, z, o, sum, summ, RM, RF;
/*MENGHUTUNG NULAI RATA-RATA MAHASISWA*/

//input user identitas
    cout << "IDENTITAS MAHASISWA \n";

    cout << "1. Masukkan nama anda: ";
    gets(nama);
    cout << "2. Masukkan NIM anda: ";
    gets(nim);

//input nilai user

    cout << "DAFTAR NILAI MAHASISWA \n";

    cout << "Nilai UTS Makul Matematika: ";
    cin >> x;
    cout << "Nilai UAS Makul Matematika: ";
    cin >> y;
    cout << "Nilai UTS Makul Fisika: ";
    cin >> z;
    cout << "Nilai UAS Makul Fisika: ";
    cin >> o;

//output dan perhitungan
    sum = x+y;
    summ= z+o;
    RM = sum/2;
    RF = summ/2;

    cout << "Berikut adalah informasi nilai mahasiswa yang bernama " << nama << " dan NIM " << nim << " adalah :\n" ;
    cout << "1. Nilai UTS Makul Matematika   : " << x << "\n";
    cout << "2. Nilai UAS Makul Matematika   : " << y << "\n";
    cout << "3. Nilai UTS Makul Fisika       : " << z << "\n";
    cout << "4. Nilai UAS Makul Fisika       : " << o << "\n";
    cout << "5. Nilai rata-rata Matematika   : " << RM << "\n";
    cout << "6. Nilai rata-rata Fisika       : " << RF << "\n";

    return 0;
}
