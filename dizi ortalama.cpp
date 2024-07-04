#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

void ortalamahesapla() {
	vector<double> dizi;
	double girdi;
	double toplam = 0.0;

	cout << "Dizi elemanlarını girin (Girişi sonlandırmak için 0 girin):" << endl;

	while (true) {
		cout << "Eleman " << dizi.size() + 1 << ":" << endl;
		cin >> girdi;
		if (girdi == 0) break;
		dizi.push_back(girdi);
		toplam += girdi;
	}
	double ortalama = toplam / dizi.size();
	cout << "ORTLAMANIZ:" << ortalama << endl;

}

int main() {
	cout << "Ortalama hesaplama mainesine hosgeldiniz" << endl;
	char c;
	do {
		ortalamahesapla();
		cout << "Yeni bir dizi baslatmak icin" << " e' " << "ya basın" << endl;
			cin >> c;

	}
			while (c == 'e');
	
	cout << "İyi günler" << endl;


}