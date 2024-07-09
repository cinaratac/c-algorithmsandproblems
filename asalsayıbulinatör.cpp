#include <iostream>
using namespace std;

    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for(int i=2;i<num;i++){
            if (num % i == 0) return false;
        }
        return true;
    }
    int main(){
        cout << "Başlangıc değeri" << endl;
            int low;
            int max;
            cin >> low;
            cout << "Bıtıs degeri:" << endl;
            cin >> max;
            for (int i = low; i <= max; i++) {
                if (isPrime(i)) {
                    cout << i << ",";
                }
            }


}
