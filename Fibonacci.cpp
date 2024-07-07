#include<iostream>
#include<vector>
using namespace std;

int main() {
    int girdi;
    cout << "dizinizin kaç boyutlu olmasını istiyorsunuz" << endl;
    cin >> girdi;
    if (girdi <= 0) {
        cout << "Ltfen pozitif bir sayı giriniz" << endl;
        return 1;
    }
    vector<int> dizi(girdi);
    dizi[0] = 1;
    if(girdi>1){
        dizi[1]=1;
         }
    for (int i = 2; i < girdi; i++) {
        dizi[i] = dizi[i - 1] + dizi[i - 2];
        }
    // Fibonacci serisini yazdırma
    cout << "Fibonacci serisi: ";
    for (int i = 0; i < girdi; i++) {
        cout << dizi[i];
        if (i < girdi - 1) {
            cout << ",";
        }
    }
    cout << endl;



}
