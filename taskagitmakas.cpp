#include <iostream>
#include <random>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	// Tek kişilik oyun olacağı için rastgele seçim yapmasını istiyorum.
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dagilim(0, 2);

	string devamMi;

	do {
		int rastgeleSecim = dagilim(gen);

		char tkm[3] = { 'T', 'K', 'M' };
		string tamSecim[3] = { "Taş", "Kağıt", "Makas" };
		cout << endl << "Taş kağıt makas oynayacaksınız. İyi şanslar" << endl << "Seçim için T K M yazmanız yeterli olacaktır" << endl;

		char kullaniciSecimi;
		cin >> kullaniciSecimi;

		while (kullaniciSecimi != 'T' && kullaniciSecimi != 'K' && kullaniciSecimi != 'M') {
			cout << "Geçersiz giriş! Lütfen T, K veya M yazın: ";
			cin >> kullaniciSecimi;
		}

		char bilgisayarSecimi = tkm[rastgeleSecim];
		cout << "Bilgisayarın seçimi: " << tamSecim[rastgeleSecim] << ".";

		// Oyun kuralları
		if (kullaniciSecimi == bilgisayarSecimi) {
			cout << "Oyun berabere! ";
		}
		else if ((kullaniciSecimi == 'T' && bilgisayarSecimi == 'M') ||
			(kullaniciSecimi == 'K' && bilgisayarSecimi == 'T') ||
			(kullaniciSecimi == 'M' && bilgisayarSecimi == 'K')) {
			cout << " Kazandınız!" << endl;
		}
		else {
			cout << " Kaybettiniz!" << endl;
		}
		cout << "Tekrar oynamak ister misiniz? (E/e)" << endl;
		cin >> devamMi;

		while (devamMi != "E" && devamMi != "e" && devamMi != "H" && devamMi != "h") {
			cout << "Lütfen E/e veya H/h giriniz.";
			cin >> devamMi;
		}

	} while (devamMi == "E" || devamMi == "e");

	return 0;
}
