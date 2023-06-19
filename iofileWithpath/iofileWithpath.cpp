#include <fstream>
#include <iostream>
#include<string>
using namespace std;

int main() {
	string baris;
	string namaFile;

	cout << "masukan nama file : ";
	cin >> namaFile;

	//membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(namaFile + ".txt", ios::out);

	cout << ">=menulis file, \'q' untuk kear" << endl;

	//unlimited loop untuk menulis
		while (true) {
			cout << "-";
		}
		//selesai dalam menulis sekarang tutup filenyA
		outfile.close();

		//MEMBUKA FILE DALAM Mode membaca
		ifstream infile;
		//menunjuk ke sebuah file
		infile.open(namaFile + ".txt", ios::in);


		cout << endl << ">= membuka dan membaca file " << endl;
		//jike file ada maka
		if (infile.is_open())
		{
			//melakukukan perulangan setiap baris
			while (getline(infile, baris))
			{
				//dan menampilkan disini
				cout << baris << '\n';
			}
			//tutup file tersebut setelah selesai
			infile.close();
		}
		//jika tidak ditemukan file maka akan menampilkan ini
		else cout << "unable to open file";
		return 0;
}