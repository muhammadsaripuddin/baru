#include <iostream>
#include <string>
using namespace std;

class remote{
	public:
		void fungsi(string fungsi);
		int harga;
};

int main(){
	remote TV,AC,kipas;
	
	AC.harga = 20000;
	kipas.harga = 40000;
	TV.harga = 34000;
	
	cout <<"Harga Remote AC adalah Rp. "<<(TV.harga)<<endl;
	cout <<"Harga Remote kipas adalah Rp. "<<(AC.harga)<<endl;
	cout <<"Harga Remote TV adalah Rp. "<<(kipas.harga)<<endl;
	
	AC.fungsi("untuk menggunakan AC");
}

void remote::fungsi(string fungsi){
	cout << "Fungsi Remote TV "<<fungsi<< " !!"<<endl;
}
