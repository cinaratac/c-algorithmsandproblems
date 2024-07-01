#include<iostream>
#include<string>
using namespace std;
class Öğrenci {
private:
	string isim;
	int yas;
public:
	//yapıcı
	Öğrenci(const string& i, int y) : isim(i) , yas(y){}

	string getİsim() const {
		return isim;
	}
	int getYas() const {
		return yas;
	}
	void setİsim(const string& i) {
		isim = i;
	}
	void setYas(int y) {
		if (yas >= 0) {
			yas = y;
		}
	}
};
int main() {
	Öğrenci ö1("Mahmut", 25);
	cout << ö1.getİsim() << " " << ö1.getYas() << endl;

	ö1.setİsim("Mwhmet");
	ö1.setYas(27);

	cout << ö1.getİsim() << " " << ö1.getYas() << endl;

}