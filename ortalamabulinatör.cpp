#include <iostream>
#include <vector>

using namespace std;

char Harfbulma(double avarage){
	if (avarage >= 90) return 'A';
	else if (avarage >= 80) return'B';
	else if (avarage >= 70) return 'C';
	else if (avarage >= 60) return 'D';
	else return 'F';
}
int main() {
	int derssayi;
	cout << "Ders sayınızı giriniz" << endl;
	cin >> derssayi;
	int toplam=0;
	vector<int> dersler(derssayi);
	for (int i = 0; i < derssayi; i++) {
		cout << i+1 << ". dersin notunu giriniz" << endl;
		cin >> dersler[i];
		toplam += dersler[i];
	}
	double avarage = toplam / derssayi;
	char harf = Harfbulma(avarage);
	cout << "ORTALAMA:" << avarage << endl;
	cout<< "HARF:"<<harf<<endl;




}


