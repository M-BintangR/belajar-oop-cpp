#include <iostream>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    double ipk;

    Mahasiswa(string nama, double ipk)
    {
        Mahasiswa::nama = nama;
        Mahasiswa::ipk = ipk;
    }

    void tampilkanData()
    {
        cout << "NAMA : " << nama << endl;
        cout << "IPK  : " << ipk << endl;
    }

    void ubahNama(const char *namaBaru)
    {
        Mahasiswa::nama = namaBaru;
    }

    string getNama()
    {
        return Mahasiswa::nama;
    }

    double getIpk()
    {
        return Mahasiswa::ipk;
    }

    double katrolIpk(const double &newIpk)
    {
        return Mahasiswa::ipk + newIpk;
    }
};

int main()
{
    string getNama[2];
    double getIpk[2];

    Mahasiswa mahasiswa1 = Mahasiswa("Muh Bintang", 4.0);
    getNama[0] = mahasiswa1.getNama();
    getIpk[0] = mahasiswa1.getIpk();
    Mahasiswa mahasiswa2 = Mahasiswa("Fery Fadul", 3.4);
    getIpk[1] = mahasiswa2.getIpk();
    getNama[1] = mahasiswa2.getNama();

    cout << "=========== DATA PERTAMA ===========" << endl;
    mahasiswa1.tampilkanData();
    cout << "ganti nama" << endl;
    mahasiswa1.ubahNama("Bintang Keren");
    mahasiswa1.katrolIpk(1.23);
    mahasiswa1.tampilkanData();

    cout << "============ DATA KEDUA ============" << endl;
    mahasiswa2.tampilkanData();

    int length = sizeof(getNama) / sizeof(getNama[0]);

    cout << "============= DATA MAHASISWA ============" << endl;

    for (int i = 1; i <= length; i++)
    {
        cout << "NAMA " << i << " : " << getNama[i] << "\n";
        cout << "IPK  " << i << " : " << getIpk[i] << "\n";
    }

    return 0;
}