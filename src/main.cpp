#include <iostream>
#include <vector>
#include <string>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "=========================================================" << endl;
		cout << "Selamat datang di Institut Tidak Sare (ITS)" << endl;
		cout << "=========================================================" << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tenaga Kependidikan" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "=========================================================" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1: 
			{
				string id,nama,nrp,departemen;
				int dd,mm,yy,tahunmasuk,semesterke,skslulus;
				cout << "masukkan id: " << endl;
				cin >> id;
				cout << "masukkan nama: " << endl;
				cin.ignore();
				getline (cin,nama);
				cout << "masukkan tanggal lahir [hari(angka)]: " << endl;
				cin >> dd;
				cout << "masukkan tanggal lahir [bulan(angka)]: " << endl;
				cin >> mm;
				cout << "masukkan tanggal lahir [tahun(angka)]: " << endl;
				cin >> yy;
				cout << "masukkan nrp: " << endl;
				cin >> nrp;
				cout << "masukkan departemen: " << endl;
				cin.ignore();
				getline (cin,departemen);
				cout << "masukkan tahun masuk: " << endl;
				cin >> tahunmasuk;
				cout << "masukkan semester saat ini: " << endl;
				cin >> semesterke;
				cout << "masukkan jumlah SKS yang sudah diselesaikan: " << endl;
				cin >> skslulus;

				mahasiswa MHS (id, nama, dd, mm, yy, nrp, departemen, tahunmasuk, semesterke, skslulus);
				recMhs.push_back(MHS);
			}
				break;
			case 2:
			{
				string id,nama,npp,departemen,pendidikan;
				int dd,mm,yy;
				cout << "masukkan id: " << endl;
				cin >> id;
				cout << "masukkan nama: " << endl;
				cin.ignore();
				getline (cin,nama);
				cout << "masukkan tanggal lahir [hari(angka)]: " << endl;
				cin >> dd;
				cout << "masukkan tanggal lahir [bulan(angka)]: " << endl;
				cin >> mm;
				cout << "masukkan tanggal lahir [tahun(angka)]: " << endl;
				cin >> yy;
				cout << "masukkan npp: " << endl;
				cin >> npp;
				cout << "masukkan departemen: " << endl;
				cin.ignore();
				getline (cin,departemen);
				cout << "Pendidikan: " << endl;
				cin >> pendidikan;

				dosen DSN(id, nama, dd, mm, yy, npp, departemen, pendidikan);
				recDosen.push_back(DSN);
			}
				break;
			case 3:
			{
				string id,nama,npp,unit;
				int dd,mm,yy;
				cout << "masukkan id: " << endl;
				cin >> id;
				cout << "masukkan nama: " << endl;
				cin.ignore();
				getline (cin,nama);
				cout << "masukkan tanggal lahir [hari(angka)]: " << endl;
				cin >> dd;
				cout << "masukkan tanggal lahir [bulan(angka)]: " << endl;
				cin >> mm;
				cout << "masukkan tanggal lahir [tahun(angka)]: " << endl;
				cin >> yy;
				cout << "masukkan npp: " << endl;
				cin >> npp;
				cout << "masukkan unit: " << endl;
				cin.ignore();
				getline (cin,unit);
				
				tendik TK(id, nama, dd, mm, yy, npp, unit);
				recTendik.push_back(TK);
			}
				break;
			case 4:
			{
				for(unsigned int i=0;i<recMhs.size();i++){
					cout << "Nama mahasiswa: "<< recMhs[i].getNama() << endl;
					cout << "NRP mahasiswa: " << recMhs[i].getNRP() << endl;
					cout << "Departemen: " << recMhs[i].getDepartemen() << endl;
					cout << "Tanggal lahir: " << recMhs[i].getTglLahir() << "/";
					cout << recMhs[i].getBulanLahir() << "/";
					cout << recMhs[i].getTahunLahir() << endl;
					cout << "Tahun masuk mahasiswa: " << recMhs[i].getTahunMasuk() << endl;
					cout << "Semester mahasiswa saat ini: " << recMhs[i].getSemester() << endl;
					cout << "SKS yang telah diselesaikan: " << recMhs[i].getSKSLulus() << endl;
					cout << endl;
				}
			}
				break;
			case 5:
			{
				for(unsigned int i=0;i<recDosen.size();i++){
					cout << "Nama dosen: "<< recDosen[i].getNama() << endl;
					cout << "NPP dosen: " <<recDosen[i].getNPP() << endl;
					cout << "Departemen: " <<recDosen[i].getDepartemen() << endl;
					cout << "Pendidikan: " <<recDosen[i].getPendidikan() << endl;
					cout << "Tanggal lahir: " <<recDosen[i].getTglLahir() << "/";
					cout << recDosen[i].getBulanLahir() << "/";
					cout << recDosen[i].getTahunLahir() << endl;
					cout << endl;
				}
			}
				break;
			case 6:
			{
				for(unsigned int i=0;i<recTendik.size();i++){
					cout << "Nama Tenaga Kependidikan: "<< recTendik[i].getNama() << endl;
					cout << "NPP Tenaga Kependiikan: " <<recTendik[i].getNPP() << endl;
					cout << "Unit: " <<recTendik[i].getUnit() << endl;
					cout << "Tanggal lahir: " <<recTendik[i].getTglLahir() << "/";
					cout << recTendik[i].getBulanLahir() << "/";
					cout << recTendik[i].getTahunLahir() << endl;
					cout << endl;
				}
			}
				break;
		}
	}

	return 0;
}
