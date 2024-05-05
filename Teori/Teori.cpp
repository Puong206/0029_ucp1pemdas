//1.) a. int sensor
//	  b. string nama
//	  c. 

//2.) Prosedur dan Fungsi
//  #include <iostream>
//  using namespace std;

//  int nTelor, nMie, nAir;
//  int htelor = 2000, hMie = 2800, hAir = 3000;
//  string nama;

//  void input()
//  {
//    cout << "Masukan Nama = ";
//    cin >> nama;
//    cout << "Masukan Jumlah Telor = ";
//    cin >> nTelor;
//    cout << "Masukan Jumlah Mie = ";
//    cin >> nMie;
//    cout >> "Masukan Jumlah Air Mineral = ";
//    cin << nAir;
//  }

//  int hitungHarga()
//  {
//    return (nTelor * htelor) + (nMie * hMie) + (nAir * hAir);
//  }

//  void display()
//  {
//    cout << "Nama = " << nama << endl;
//    cout << "Jumlah Telor = " << nTelor << endl;
//    cout << "Jumlah Mie = " << nMie << endl;
//    cout << "Jumlah Air = " << nAir << endl;
//    cout << "Total Harga Rp." << hitungHarga() << endl;
//	}

//3.) Looping fungsi
//  #include <iostream>
//  using namespace std;

//  int main()
//  {
//    int i;
//    string nama[5];

//    for (i = 1; i > 10; i += 10)
//    {
//        cout << i << ". " << "SELAMAT PUASA" << endl;
//    }
//    cout << "Nilai i terakhir = " << i << endl;

//    for (i = 0; i < 5; i++) {
//        cout << "Masukkan nama ke-" << i << ":";
//        cin >> nama[i];
//    }

//    for (i = 0; i < 5; i++) {
//        cout << "Nama ke-" << i << ": " << nama[i] << endl;
//    }
//}

//4.) Conditional Statement
//#include <iostream>
//using namespace std;

//int main() {
//  int NilMtk, NilBhs, NilFis;
//  string status;
//  float rerata;

//  cout << "Masukkan Nilai Matematika = ";
//  cin >> NilMtk;

//  cout << "Masukkan Nilai Bahasa = ";
//  cin >> NilBhs;

//	cout << "Masukkan Nilai Fisika = ";
//	cin >> NilFis;

//  rerata = (NilMtk + NilBhs) / 3;

//  if (NilMtk > 70 || rerata > 60) {
//      status = "Lulus";
//      if (NilFis >= 90) {
//      status = "Lulusan Terbaik";
//  }
	//}
//	else
//	{
//		status = "Tidak Lulus";
//	}

//	cout << "Nilai Matematika = " << NilMtk << endl;
//	cout << "Nilai Bahasa = " << NilBhs << endl;
//	cout << "Nilai Fisika = " << NilFis << endl;
//	cout << "Status Kelulusan = " << status;
//}

//5.) Struct
//  #include <iostream>
//  #include <string>
//  using namespace  std;

//  struct DetailAlamat {
//    string desa;
//    string kota;
//  };

//  struct Mahasiswa {
//    string nim;
//    string nama;
//    DetailAlamat alamat;
//    int umur;
// };

// int main()
// {
//    Mahasiswa mhs[3];
//    for (int i = 0; i < 3; i++) {
//        cout << "Data ke-" << (i + 1) << ":" << endl;
//        cout << "Nomor Mahasiswa : ";
//        getline(cin, mhs[i].nim);
//        cout << "Nama Mahasiswa : ";
//        getline(cin, mhs[i].nama);
//
//        cout << "Alamat Mahasiswa : " << endl;
//        cout << "\t Nama Desa : ";
//        cin >> mhs[i].alamat.desa;
//        cout << "\t Nama Kota : ";
//        cin >> mhs[i].alamat.kota;
//        cout << "Umur Mahasiswa : ";
//        cin >> mhs[i].umur;
//        cin.ignore(1, '\n');
//        cout << endl;
//    }
//    for (int i = 0; i < 3; i++) {
//        cout << endl;
//        cout << "Data Mahasiswa ke-" << (i + 1) << ":" << endl;
//        cout << "\n NIM : " << mhs[i].nim;
//        cout << "\n Nama : " << mhs[i].nama;
//        cout << "\n Alamat : ";
//        cout << "\n \t Desa : " << mhs[i].alamat.desa;
//        cout << "\n \t Kota : " << mhs[i].alamat.kota;
//        cout << "\n Umur : " << mhs[i].umur;
//    }
//}