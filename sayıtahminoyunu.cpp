#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	int gizlisayi = rand() % 100 + 1;
	int tahmin;
	int denemesayisi = 0;
	cout << "1 le 100 arasında sayı girin" << endl;

	do {
		cin >> tahmin;
		denemesayisi++;
		if (tahmin < gizlisayi) {
			cout << "Daha byk bir sayı giriniz" << endl;
		}
		else if (tahmin > gizlisayi) {
			cout << "Daha kucuk bir sayı giriniz" << endl;
		}
		else {
			cout << "tebrikler..." << denemesayisi << ".da doru sayuyu bilginiz" << endl;
		}
	} while (tahmin != gizlisayi);


}