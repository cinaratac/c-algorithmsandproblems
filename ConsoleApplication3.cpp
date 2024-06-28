#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
int main() {

	ifstream dosya("ornek.txt");//dosya açıldı
		if (!dosya) {
			cout << "Dosya açılamadı" << endl;//açılamam durumunda hata verildi
				return 1;
		}
	string satir;//satır nesnesi olusturuldu
		vector<string> satirlar;//satirlar adında string turunde vector olusturuldu
	while (getline(dosya, satir)) {//satır sonuna gelene kadar dosyadakiler satır nesnesine aktarıldı
		satirlar.push_back(satir);//satir nesensinin hepsi satırlar vectorune aktarıldı

	}
	dosya.close();//dosya kapatıldı
	for (const string& s : satirlar) {//dışardan ulaşılabilir ama değiştirelemez bir s nesnesi yaratıp bunu satırlar vectörüne sahil et
		cout << s << endl;
	}
}
