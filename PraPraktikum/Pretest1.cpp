#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x1, x2, y1, y2, A, B, jarak;

    cout << "Masukkan point A (x1): ";
    cin >> x1;
    cout << "Masukkan point A (y1): ";
    cin >> y1;
    cout << "Masukkan point B (x2): ";
    cin >> x2;
    cout << "Masukkan point B (y2): ";
    cin >> y2;
    cout << endl;

    A = (x2 - x1) * (x2 - x1);
    B = (y2 - y1) * (y2 - y1);
    jarak = sqrt(A + B);

    cout << "Jarak A ke B = " << jarak << " poin" << endl;
}