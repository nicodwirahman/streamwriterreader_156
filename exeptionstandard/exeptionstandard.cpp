#include <iostream>
#include <exception>
//untuk obyek exption yang akan digunakan
#include<array>
//untuk obyek array yamg akan kita gunakan
using namespace std;

int main()
{
	cout << "awal program" << endl; //penanda:....
	try {
		array <int, 3 > data = { 1, 2, 3 };
		//pesan array integer 3 elemen
		cout << data.at(4) << endl;
		//memanggil array eleemn ke 5
	}
}