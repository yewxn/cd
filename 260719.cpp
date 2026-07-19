#include <iostream>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

set<int> ss;
vector<int> vv;

void divisor1(int n)
{
	int r = sqrt(n);
	for (int i = 1; i <= r; i++) {
		if (n % i == 0) ss.insert(i), ss.insert(n / i);
	}
}

void divisor2(int n)
{
	int r = sqrt(n);
	for (int i = 1; i <= r; i++) {
		if (n % i == 0) vv.push_back(i), vv.push_back(n / i);
	}
	if (r * r == n) vv.pop_back();
	sort(vv.begin(), vv.end());
}

int accum(int n) {
	if (n == 1) return 1;
	return accum(n - 1) + n;
}

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
int gcd1(int a, int b) {
	for (int t; b; a = b, b = t % b) t = a;
}

int main()
{
	int a = 32, b = 24;
	divisor2(100);
	for (auto k : vv) cout << k << ' '; cout << endl;

	cout << gcd(a, b);
}

#include <iostream>
using namespace std;

int add(int n)
{
	if (n == 1) return 1;
	return add(n - 1) + n;
}
//void main()
//{
//	cout << add(5) << endl;
//}
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

//char buf[100] = "올해 80세를 맞은 배우, 노주현의 주거##행보가 예사롭지 않다. ";
//int main()
//{
//	for (char* p = buf; p = strtok(p, " ,.#"); p = NULL)
//	{
//		cout << p << endl;
//	}
//}

void atoi(string num)
{
	cin >> num;
}

void replace(char str[])
{
	char* p = str;
	p = strtok(p, " ,?");
}

void main()
{
	int** p;
	p = new int
		for ()
			string a = "I like apple, and you?";

}

//#include <cstdio>
//struct BYTE
//{
//	char one;
//	char two;
//};
//void main()
//{
//	BYTE one;
//	one.one = 10;
//	one.two = 20;
//}
#include <iostream>
using namespace std;

void star(int n)
{
	int k = n - 1;
	for (int y = 0; y <= k; y++) {
		for (int x = 0; x <= k; x++) {
			if (x >= y) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
}
void star2(int n)
{
	for (int k = n; k >= 1; k--) {
		for (int i = 1; i <= k; i++) {
			cout << "*";
		}
		cout << endl;
	}
}

void diamond(int n)
{
	int k = n - 1;
	for (int y = 0; y <= 2 * k; y++) {
		for (int x = 0; x <= 2 * k; x++) {
			if (x - k >= -y && x - k <= y && x >= y - k && x - 3 * k <= -y) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
}