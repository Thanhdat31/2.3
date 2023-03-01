#include<iostream>
using namespace std;
int Tong(int n)
{
	if (n == 0)
		return 0;
	return Tong(n - 2) + n;
}
int main()
{
	int n, S;
	do{
		cout << "nhap n =";
	cin >> n; 
	}
	while (n % 2 !=0);
	S = Tong(n);
	cout << "tong la " << S << endl;
	return 0;
}