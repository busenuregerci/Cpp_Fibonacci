#include<iostream>

using namespace std;

/* Fibonacci dizisi, bir sonraki terimin bir onceki iki terimin toplamý olduðu bir seridir.
* Fibonacci dizisinin ilk iki terimi 0 ve 1 dir.
* 
* 0, 1, 1, 2, 3, 5, 8, 13, 21...
* 
* Bu tanýma uygun olarak Fibonacci serisinisn kullanýcýnýn istediði ilk n elemanýný bulup ekrana kodu yazýnýz.
* 
* Ornek:
* Fibonacci dizisinin ilk kaç elemaný yazýlsýn?: 9
* 0, 1, 1, 2, 3, 5, 8, 13, 21...

*/

int fibonacci(int n)
{
	if (n == 0) {
		return 0; // ilk eleman 0 kabul edilir
	}
	else if (n == 1)
	{
		return 1; // ikinci eleman 1 kabul edilir
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main()
{


	int n;
	cout << "Fibonacci dizinin ilk kac elemani yazilsin?: ";
	cin >> n;

	if (n <= 0)
	{
		cout << "Lutfen pozitif bir sayi giriniz.\n";
			return 1;
	}

	for (int i = 0; i < n; i++)
	{
		cout << fibonacci(i) << " ";
	}
	cout << endl;





	/* BENÝM ÇÖZÜMÜM
	int n;
	cout << "Fibonacci dizinin ilk kac elemani yazilsin?: ";
	cin >> n;

	int onceki = 0, simdiki = 1, gecici;
	
	for (int i = 0; i < n; i++)
	{
		cout << onceki << " ";
		gecici = onceki;
		onceki = simdiki;
		simdiki = gecici + simdiki;
	}
	*/

	return 0;
}