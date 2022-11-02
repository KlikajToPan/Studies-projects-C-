#include <iostream>
#include <string>
using namespace std;

int a, b, c, wynik;
int main()
{
  std::cout << "Program sprawdzający poprawność iloczynu liczb całkowitych\n";
  std::cout << "Podaj liczbę całkowitą a: ";
  std::cin >> a;
  std::cout << "Podaj liczbę całkowitą b: ";
  std::cin >> b;
  std::cout << "Podaj wynik mnożenia liczby a i b: ";
  std::cin >> wynik;

  if (a * b == wynik)
  {
    std::cout << "Podałeś poprawny wynik";
    return 0;
  }

  if (a * b != wynik)
  {
    std::cout << "Podałeś niepoprawny wynik\n";
    std::cout << "Poprawny wynik to:" << a * b;
    return 0;
  }
}
