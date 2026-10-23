#include <iostream>
#include <random>

using namespace std;
 
int main() {
	// Diğer örnekten farkı olarak rastgele sayı üretmek için random kütüphanesini kullanıyoruz
	random_device rd; // Rastgele sayı üreteci - Rastgele sayı üretecini başlatmak için başlangıç kaynağı sağlar.
	mt19937 gen(rd()); // Mersenne Twister algoritması ile rastgele sayı üreteci - Rastgele sayı üreteci oluşturur.
	uniform_int_distribution<> dagilim(1, 100); // 1 ile 100 arasında eşit olasılıkla rastgele sayı üretir.

	int rastgeleSayi = dagilim(gen);
	int girilenSayi = 0;

	cout << "1 ile 100 arasında bir sayı tahmin edin." << endl;
	cin >> girilenSayi;

	while (girilenSayi != rastgeleSayi) {

		if (girilenSayi == rastgeleSayi) {
			cout << "Tebrikler! Doğru tahmin ettiniz." << endl;
		}
		else if (girilenSayi < rastgeleSayi) {
			cout << "Tahmin ettiğiniz sayı küçük. Daha büyük bir sayı deneyin." << endl;
		}
		else if (girilenSayi > rastgeleSayi) {
			cout << "Tahmin ettiğiniz sayı büyük. Daha küçük bir sayı deneyin." << endl;
		}
		else
			cout << "Yanlış tahmin. Tekrar deneyin." << endl;
		cin >> girilenSayi;
	}
	cout << "Tebrikler! Doğru tahmin ettiniz." << endl;
}