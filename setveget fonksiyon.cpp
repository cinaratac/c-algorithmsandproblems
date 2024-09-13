#include <iostream>
#include <string>
using namespace std;

class Ogrenci {
private:
	string isim;
	int yas;
public:
	//yapıcı
	Ogrenci(const string& i, int y) : isim(i), yas(y) {}
	void setİsim(const string& i) {
		isim = i;
	}
	void setYas(int y) {
		yas = y;
	}
	string getİsim() const {
		return isim;
	}
	int getYas() const {
		return yas;
	}

};
int main() {
	Ogrenci o1("ANAN", 54);
	string isimg;
	int yasg;
	cout << o1.getİsim() << " " << o1.getYas() << endl;
	cout << "Yeni ismi yazınız" << endl;
	cin >> isimg;
	cout << "Yeni yası yazınız" << endl;
	cin >> yasg;
	o1.setİsim(isimg);
	o1.setYas(yasg);
	cout << o1.getİsim() << " " << o1.getYas() << endl;
 
}
