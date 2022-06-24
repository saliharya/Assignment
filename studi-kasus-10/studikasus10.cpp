#include <iostream>
using namespace std;

class Mahasiswa {
   public:
    int nim;
    string nama;
    Mahasiswa *next;
};

Mahasiswa *newMahasiswa = new Mahasiswa();

void input(string nama, int nim) {
    Mahasiswa *t = new Mahasiswa();
    t->nim = nim;
    t->nama = nama;
    t->next = NULL;

    if (newMahasiswa == NULL || (newMahasiswa->nim >= t->nim)) {
        t->next = newMahasiswa;
        newMahasiswa = t;
    }

    else {
        Mahasiswa *c = newMahasiswa;
        while (c->next != NULL && c->next->nim < t->nim) {
            c = c->next;
        }
        t->next = c->next;
        c->next = t;
    }
}

void output() {
    Mahasiswa *p = newMahasiswa;
    cout << "NIM\t\t\tNama Peserta" << endl;
    while (p != NULL) {
        cout << p->nim << "    \t" << p->nama << endl;
        p = p->next;
    }
}

int main() {
    newMahasiswa = NULL;
    string nama;
    int nim;
    while (true) {
        cout << "1. Masukkan data peserta" << endl;
        cout << "2. Tampilkan data" << endl;
        cout << "Masukan pilihan : ";
        int pilih;
        cin >> pilih;
        if (pilih == 1) {
            cout << "Masukkan nama peserta : ";
            cin >> nama;
            cout << "Masukkan NIM          : ";
            cin >> nim;
            input(nama, nim);
            cout << endl;
        } else if (pilih == 2) {
            cout << endl;
            cout << "=======================================" << endl;
            cout << "          PESERTA BABAK FINAL" << endl;
            cout << "            LOMBA PARMATIKA" << endl;
            cout << "=======================================" << endl;
            output();
        } else
            exit(0);
    }
    return 0;
}