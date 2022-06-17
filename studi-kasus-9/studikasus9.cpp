#include <iostream>
using namespace std;

class Buku {
   public:
    void input();
    void urutkan();
    void susunBuku();
    void output();

   private:
    int id[24] = {};
    int rak[4][6] = {};
};

void Buku::input() {
    for (int i = 0; i < 24; i++) {
        cout << "Masukkan nomor buku ke-" << i + 1 << ": ";
        cin >> id[i];
    }
}

void Buku::urutkan() {
    for (int i = 0; i < 24; i++) {
        for (int j = i + 1; j < 24; j++) {
            if (id[i] > id[j]) {
                int temp = id[i];
                id[i] = id[j];
                id[j] = temp;
            }
        }
    }
}

void Buku::susunBuku() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            rak[i][j] = id[i * 6 + j];
        }
    }
}

void Buku::output() {
    cout << "\nData nomor buku: ";
    for (int i = 0; i < 24; i++) {
        cout << id[i] << " ";
    }
    cout << "\nNomor buku setelah diurutkan: ";
    urutkan();
    for (int i = 0; i < 24; i++) {
        cout << id[i] << " ";
    }
    susunBuku();
    cout << "\n\n=============================================\n";
    cout << "          Susunan Pada Rak Buku\n";
    cout << "=============================================\n";
    for (int i = 0; i < 4; i++) {
        cout << "Rak ke - " << i + 1 << " : ";
        for (int j = 0; j < 6; j++) {
            cout << rak[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    Buku buku;
    buku.input();
    buku.output();
}