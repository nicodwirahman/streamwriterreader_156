#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "selamat belajar di prodi ti umy" << endl;
		throw 0,5; //melemparkan sebuah integer maka
		cout << "peryataan tidak akan diesksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "pengecualian akan dieksekusi" << endl;
	}
}