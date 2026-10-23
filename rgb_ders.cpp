#include <iostream>
#include <windows.h>
using namespace std; 

// Ne yapacağız onu söylemek istiyorum: 
// Satır ve dizilerle alakalı bir çalışma yapacağım.
// Zorlandığım bir konu ama yapabileceğimi biliyorum.
// AI'dan yardım almayacağım.

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	// Kaç birimlik kare istediğini kullanıcıya soruyoruz. 
	int kare = 0;
	cout << "Karenin kaç birim kare olmasını istiyorsunuz?" << endl;
	cin >> kare;

	char renkler[3] = {'R', 'G', 'B'};

	for (int x = 0; x < kare; x++) {
		for (int y = 0; y < kare; y++) {
		int index = (x + y) % 3;
		cout << renkler[index] << " ";
		}
	cout << endl;
	}
}