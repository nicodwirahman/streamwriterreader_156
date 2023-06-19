#include <fstream>
#include <iostream>
#include<string>
using namespace std;

int main() {
	string baris;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunujuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= menulis file, \'q'\ untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "-";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika andamemasukan karakter q;
		if (baris == "q") break;
	}

	//selesai dalam menulis sekarang tutup filenyA
	outfile.close();

	//MEMBUKA FILE DALAM Mode membaca
	ifstream infile;
	//menunjuk ke sebuah file
	infile.open("contohfile.txt");


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