#include <iostream>
#include <vector>

using namespace std;

char Harfbulma(double avarage) {
	if (avarage >= 90) return 'A';
	else if (avarage >= 80) return 'B';
	else if (avarage >= 70) return 'C';
	else if (avarage >= 60) return 'D';
	else return 'F';
}

int main() {
	char harf;
	double derssayi;
	int toplam = 0;
	cout << "Ders sayisini giriniz" << endl;
	cin >> derssayi;
	vector<int> dersler(derssayi);
	for (int i = 0; i < derssayi; i++) {
		cout << i + 1 << ". dersi giriniz" << endl;
		cin >> dersler[i];
		if (dersler[i] >= 0 && dersler[i] <= 100) {
			toplam += dersler[i];
		}
		else {
			cout << "Lütfen geçerli bir sayı giriniz" << endl;
			i--;

		}
	}
	double avarage = toplam / derssayi;
	harf = Harfbulma(avarage);
	cout << "Notunuz:" << harf << endl;
	cout << "Ortalamanız" << avarage << endl;
}
