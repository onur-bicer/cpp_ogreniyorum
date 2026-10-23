#include <iostream>
#include <random>
using namespace std;

int main() {
    int rastgeleSayi = 25;
    int girilenSayi = 0;

    // 1. Kullanıcıdan sayı iste
	while (girilenSayi != rastgeleSayi) {
    cout << "Bir sayı tahmin edin: ";
    cin >> girilenSayi;

    // 2. if ile doğru tahmini kontrol et
    if (girilenSayi == rastgeleSayi) {
        cout << "Tebrikler! Doğru tahmin ettiniz." << endl;
    }
    // 3. else if ile tahmin küçük mü kontrol et
    else if (girilenSayi < rastgeleSayi) {
        cout << "Tahmin ettiğiniz sayı küçük. Daha büyük bir sayı deneyin." << endl;
    }
    // 4. else ile tahmin büyük mü kontrol et
    else if (girilenSayi > rastgeleSayi) {
        cout << "Tahmin ettiğiniz sayı büyük. Daha küçük bir sayı deneyin." << endl;
    }
    else
        cout << "Yanlış tahmin. Tekrar deneyin." << endl;
    }
    return 0;
}
   