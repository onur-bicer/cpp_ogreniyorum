#include <iostream> 
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int N = 0;
    cout << "Kaç birimlik bir kare olmasını istiyorsunuz?" << endl;
    cin >> N;

    char words[3] = { 'R', 'G', 'B' };

    for (int x = 0; x < N; x++) {
        for (int y = 0; y < N; y++){
            int index = (x + y) % 3;
            cout << words[index] << " ";
        }
        cout << endl;
    }
    return 0;
}