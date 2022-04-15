#include <iostream>
using namespace std;

class fibbonacci
{
public:
  int fib(int n)
  {
    if (n == 0)
      return 0;
    else if (n == 1)
      return 1;
    else
      return fib(n - 1) + fib(n - 2);
  }
};

class fibbo
{
public:
  int fib(int x)
  {
    int a = 0;
    int b = 1;
    int result = 0;
    for (int i = 0; i < x - 1; i++)
    {
      result = a + b;
      a = b;
      b = result;
    }
    return result;
  }
};

int main()
{
  int n;

  fibbonacci f;
  cout << "Masukkan Angka: ";
  cin >> n;
  for (int i = 0; i <= n; i++)
    cout << f.fib(i) << ", ";
  cout << "Fibbonacci ke " << n << " adalah " << f.fib(n) << endl;

  fibbo fb;
  cout << "Masukkan Angka: ";
  cin >> n;
  cout << "Fibbonacci ke " << n << " adalah " << fb.fib(n) << endl;
  return 0;
}