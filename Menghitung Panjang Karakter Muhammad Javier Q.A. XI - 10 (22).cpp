#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//mendeklarasikan teks1 dan teks2
  char teksl[10], teks2 [10];
//menampilkan pesan u/ meminta masukan dari pengguna
  cout << "Masukkan Nama Depan Anda?: ";
  cin >> teksl ;
  cout << "Masukkan Nama Keluarga Anda?: ";
  cin >> teks2;
//menggabungkan teks 2 ke teks1
  strcat(teks1, teks2);
//menampilkan hasil ke pengguna
  cout << "Nama Lengkap Anda: " << teks1 << endl;
  system ("PAUSE");
  return 0;
}

