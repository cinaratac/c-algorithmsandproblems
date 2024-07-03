#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int toplam = 0;//toplam 0 ile başlar
    ifstream dosya("ornek.txt");//dosyayı aç
    string satir;//satir olustur
    int sayi;
    while (getline(dosya, satir)) {//dosyaları satıra aktar
        stringstream ss(satir);//satırları böl ve buna ss de
        string parca;
        while (getline(ss, parca, ',')) { // ss leri int e çevirmek için parçalara böl

            stringstream parca_ss(parca);//parcaları inte cevirme için yeniden parcala
            while (parca_ss >> sayi) {//parcaları sayılara aktar
                toplam += sayi;//sayıları topla
            }
        }
    }
    cout << "Toplam:" << toplam << endl;//toplam yaz
}