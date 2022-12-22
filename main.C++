#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

int n, los; 
int a; 
int b; 
int main()
{
  cout <<"Program losuje liczbę z podanego przedziału\n";
  cout <<" Podaj pierwszą liczbę: \n";
  cin >> a;
  cout << "Podaj drugą liczbę: \n";
  cin >> b; 
  cout << "Podaj ile liczb mam wylosować?: \n";
  cin >> n;
  srand(time(NULL)); //inicjalizacja generatora liczb pseudolosowych
 for(int i=1;i<=n;i++)
 {
  los=a+rand()%(b-a+1); //przypisanie zmiennej los wartości pseudolosowej
  cout<<los<<"  ";
 } 
 return 0;   

}