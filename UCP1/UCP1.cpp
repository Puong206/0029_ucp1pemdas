#include <iostream>
#include <string>
#include "../UCP 1 Pemdas/UCP 1 Pemdas.cpp"
using namespace  std;

struct NamaKota {
    string kota;
    string status;
};

struct Sensor {
    int sensorA, sensorB, sensorC;
};

int main()
{
	cout << "Masukkan Nama Kota : ";
	cin >> nama;
	cout << "Masukkan Data Sensor 1 : ";
	cin >> sensorA;
	cout << "Masukkan Data Sensor 2 : ";
	cin >> sensorB;
	cout << "Masukkan Data Sensor 3 : ";
	cin >> sensorC;
	
	int penjumlahan = sensorA + sensorB + sensorC;
	float pembagian = penjumlahan / 3;

	cout << "Nilai kualitas udara rata rata pada sensor : " << pembagian << endl;

	if (pembagian >= 75)
	{
		status = "Sehat";
	}
	else if (pembagian < 75 || sensorA == 45, sensorB == 45, sensorC == 45)
	{
		status = "Tidak Sehat";
    }

    Sensor snr[3];
    for (int i = 0; i < 3; i++) {
        cout << "Data ke-" << (i + 1) << ":" << endl;
        cout << "Nomor Mahasiswa : ";
        getline(cin, snr[i].nim);
        cout << "Nama Mahasiswa : ";
        getline(cin, snr[i].nama);

        cout << "Alamat Mahasiswa : " << endl;
        cout << "\t Nama Desa : ";
        cin >> snr[i].alamat.desa;
        cout << "\t Nama Kota : ";
        cin >> snr[i].alamat.kota;
        cout << "Umur Mahasiswa : ";
        cin >> snr[i].umur;
        cin.ignore(1, '\n');
        cout << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << endl;
        cout << "Data Mahasiswa ke-" << (i + 1) << ":" << endl;
        cout << "\n NIM : " << mhs[i].nim;
        cout << "\n Nama : " << mhs[i].nama;
        cout << "\n Alamat : ";
        cout << "\n \t Desa : " << mhs[i].alamat.desa;
        cout << "\n \t Kota : " << mhs[i].alamat.kota;
        cout << "\n Umur : " << mhs[i].umur;
}