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
	outfile.open(namaFile + ".txt, ios::out");

	cout << ">=menulis file, \'q' untuk keluar" << endl;

	//unlimited loop untuk menulis
		while (true) {
			cout << "-";
		}

	
}