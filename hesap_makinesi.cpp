// Hesap makinesi.cpp : ilk C++ programam denemem. Kusursuz olmasına gerek yok. JUST DO IT.
//

#include <iostream>
using namespace std;

int main()
{  
	// Kullanıcıdan iki sayı alıyoruz.
	double x, y;

	cout << "Birinci sayıyı girin: ";
	cin >> x;

	cout << "İkici sayıyı girin: ";
	cin >> y;
	
	
	// Hangi işlemi yapmak istediğini soruyoruz.
	cout << "Hangi işlemi yapmak istiyorsunuz? (+, -, *, /): ";
	char islem;
	cin >> islem;

	// İşlem seçimine göre hesaplama yapıyoruz.
	switch (islem)
	{
	case '+':
		cout << "Sonuç: " << x + y << endl;
		break;
	case '-':
		cout << "Sonuç: " << x - y << endl;
		break;
	case '*':
		cout << "Sonuç: " << x * y << endl;
		break;	
	case '/':
		if (y != 0)
			cout << "Sonuç: " << x / y << endl;
		else
			cout << "Syntax error" << endl;
		break;
	default:
		cout << "Geçersiz işlem" << endl;
		break;
	}
   
}