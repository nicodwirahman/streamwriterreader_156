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
	while (true){
		cout << "-";
	//mendapatkan setiap karakter dalam satu baris
	getline(cin, baris);
	//loop akan berhenti jika andamemasukan karakter q;
	if (baris == "q") break;
}