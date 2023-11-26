#include <iostream>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    string nim;
    string kelas;
    string prodi;
    double ipk;
};

int main()
{
    Mahasiswa mahasiswaPertama;
    Mahasiswa mahasiswaKedua;

    // ISI MAHASISWA PERTAMA
    mahasiswaPertama.nama = "Muhammad Bintang Ramli";
    mahasiswaPertama.nim = "20232205029";
    mahasiswaPertama.kelas = "T.110";
    mahasiswaPertama.prodi = "Teknik Informatika";
    mahasiswaPertama.ipk = 3.6;

    mahasiswaKedua.nama = "Fery Fadul";
    mahasiswaKedua.nim = "20232205066";
    mahasiswaKedua.kelas = "S.110";
    mahasiswaKedua.prodi = "Sistem Informasi";
    mahasiswaKedua.ipk = 2.4;

    // MENAMPILKAN DATA INSTANSIASI DARI MAHASISWA PERTAMA DAN KEDUA
    cout << "================= DATA MAHASISWA ====================" << endl;
    // MAHASISWA PERTAMA
    cout << "\n";
    cout << "Mahasiswa Pertama" << endl;

    cout << "Nama  : " << mahasiswaPertama.nama << endl;
    cout << "NIM   : " << mahasiswaPertama.nim << endl;
    cout << "Kelas : " << mahasiswaPertama.kelas << endl;
    cout << "Prodi : " << mahasiswaPertama.prodi << endl;
    cout << "IPK   : " << mahasiswaPertama.ipk << endl;

    // MAHASISWA KEDUA
    cout << "\n";
    cout << "Mahasiswa Kedua" << endl;

    cout << "Nama  : " << mahasiswaKedua.nama << endl;
    cout << "NIM   : " << mahasiswaKedua.nim << endl;
    cout << "Kelas : " << mahasiswaKedua.kelas << endl;
    cout << "Prodi : " << mahasiswaKedua.prodi << endl;
    cout << "IPK   : " << mahasiswaKedua.ipk << endl;

    return 0;
}