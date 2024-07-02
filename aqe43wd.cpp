#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;


class Kişi {
public:
	string ad;
	string telefon;
	string email;
	};
vector<Kişi> adres_defteri;

void  dosyadan_oku() {
	ifstream dosya("adres_defteri.txt");
	if (!dosya) {
		cout << "Dosya açılamadı" << endl;
	}

	string satir;
	while (getline(dosya, satir)) {
		stringstream ss(satir);
		Kişi kişi;
		getline(ss, kişi.ad, ',');
		getline(ss, kişi.telefon, ',');
		getline(ss, kişi.email, ',');
		adres_defteri.push_back(kişi);
	}
	dosya.close();
}
void dosyaya_yaz() {
	ofstream dosya("adres_defteri.txt");
	for (const auto& kişi : adres_defteri) {
		cout << kişi.ad << "," << kişi.telefon << "," << kişi.email << endl;
	}
	dosya.close();
}

void kisi_ekle() {
	Kişi yeni_kişi;
	cout << "Ad: " << endl;
	cin.ignore();
	getline(cin, yeni_kişi.ad);
	cout << "Telefon: " << endl;
	getline(cin, yeni_kişi.telefon);
	cout << "Email: " << endl;
	getline(cin, yeni_kişi.email);
	adres_defteri.push_back(yeni_kişi);
	dosyaya_yaz();
	}
void kisileri_goruntule() {
	for (size_t i = 0; i < adres_defteri.size(); i++) {
		cout << i + 1 << ". Ad: " << adres_defteri[i].ad << ", Telefon: " << adres_defteri[i].telefon << ", E-posta: " << adres_defteri[i].email << endl;
	}
}
void kisileri_düzenle() {
	kisileri_goruntule();
	cout << "Düzenlemek istediğiniz kişinin numarasını girin" << endl;
	int numara;
	cin >> numara;
	if (numara > 0 && numara <= adres_defteri.size()) {
		cout << "Yeni Ad (Boş bırakmak için sadece Enter'a basın): ";
		cin.ignore();
		string yeni_ad;
		getline(cin, yeni_ad);
		if (!yeni_ad.empty()) {
			adres_defteri[numara - 1].ad = yeni_ad;
		}

		cout << "Yeni telefon(Boş bırakmak için sadece Enter'a basın): " << endl;
		cin.ignore();
		string yeni_telefon;
		getline(cin, yeni_telefon);
		if (!yeni_telefon.empty()) {
			adres_defteri[numara - 1].telefon = yeni_telefon;
		}
		 
		cout << "Yeni email(Boş bırakmak için sadece Enter'a basın): " << endl;
		cin.ignore();
		string yeni_email;
		getline(cin, yeni_email);
		if (!yeni_email.empty()) {
			adres_defteri[numara - 1].email = yeni_email;
		}
		dosyaya_yaz();
	}
	else {
		cout << "Geçersiz numara" << endl;
	}
}
int main() {
	while (true) {
		cout << "\nAdres Defteri Menüsü:\n";
		cout << "1. Kişi Ekle\n";
		cout << "2. Kişileri Görüntüle\n";
		cout << "3. Kişi Düzenle\n";
		cout << "4. Çıkış\n";
		cout << "Seçiminiz: ";
		int secim;
		cin >> secim;
		switch (secim) {
		case 1:
			kisi_ekle();
			break;
		case 2:
			kisileri_goruntule();
			break;
		case 3:
			kisileri_düzenle();
			break;
		case 4:
				return 0;
			default:
				cout << "Geçersiz seçim lütfne tekrar deneyin." << endl;

		}
	}
	return 0;
}