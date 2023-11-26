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

    Mahasiswa(string nama, string nim, string kelas, string prodi, double ipk)
    {
        Mahasiswa::nama = nama;
        Mahasiswa::nim = nim;
        Mahasiswa::kelas = kelas;
        Mahasiswa::prodi = prodi;
        Mahasiswa::ipk = ipk;

        // MENAMPILKAN DALAM CONSTRUCTOR
        cout << "================ Data " << Mahasiswa::nama << " ================" << endl;
        cout << "NAMA  : " << Mahasiswa::nama << endl;
        cout << "NIM   : " << Mahasiswa::nim << endl;
        cout << "KELAS : " << Mahasiswa::kelas << endl;
        cout << "PRODI : " << Mahasiswa::prodi << endl;
        cout << "IPK   : " << Mahasiswa::ipk << endl;
    }
};

int main()
{
    Mahasiswa mahasiswaPertama = Mahasiswa("Muhammad Bintang", "20232205029", "T.110", "Teknik Informatika", 4.0);

    // MENAMPILKAN MAHASISWA PERTAMA
    cout << "\n";
    cout << "=================== MAHASISWA PERTAMA ==================" << endl;
    cout << "\n";
    cout << "NAMA  : " << mahasiswaPertama.nama << endl;
    cout << "NIM   : " << mahasiswaPertama.nim << endl;
    cout << "KELAS : " << mahasiswaPertama.kelas << endl;
    cout << "PRODI : " << mahasiswaPertama.prodi << endl;
    cout << "IPK   : " << mahasiswaPertama.ipk << endl;

    Mahasiswa mahasiswaKedua = Mahasiswa("Fery Fadul Rahman", "20232205777", "S.110", "Sistem Informasi", 4.0);

    // MENAMPILKAN MAHASISWA KEDUA
    cout << "\n";
    cout << "=================== MAHASISWA KEDUA ==================" << endl;
    cout << "\n";
    cout << "NAMA  : " << mahasiswaKedua.nama << endl;
    cout << "NIM   : " << mahasiswaKedua.nim << endl;
    cout << "KELAS : " << mahasiswaKedua.kelas << endl;
    cout << "PRODI : " << mahasiswaKedua.prodi << endl;
    cout << "IPK   : " << mahasiswaKedua.ipk << endl;

    return 0;
}