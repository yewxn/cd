// 1
//#include <iostream>
//using namespace std;
//
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//int min_number(int num1, int num2)
//{
//	int retVal = num1 - num2;
//	return retVal;
//}
//
//int mul_number(int num1, int num2)
//{
//	int retVal = num1 * num2;
//	return retVal;
//}
//
//
//double div_number(int num1, int num2)
//{
//	double retVal = (double)num1 / num2;
//	return retVal;
//}
//
//
//void main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	cout << "결과 : " << data1 << endl;
//
//	int data2 = min_number(a, b);
//	cout << "결과 : " << data2 << endl;
//
//	int data3 = mul_number(a, b);
//	cout << "결과 : " << data3 << endl;
//
//	double data4 = div_number(a, b);
//	cout << "결과 : " << data4 << endl;
//}

//#include <iostream>
//using namespace std;
//
//string researchBook(string name);
//
//void main()
//{
//	cout << "책 제목을 입력하세요. => ";
//	string name;
//	cin >> name;
//	cout << researchBook(name) << endl;
//}
//string researchBook(string name)
//{
//	cout << "[검색 중] " << name << endl;
//	return 0;
//}

#include <iostream>
using namespace std;

// X
//int calcPrice(int menu)
//{
//	int price = menu;
//	return price;
//}
//int calcPrice(int menu1, int num1, int menu2, int num2, int menu3, int num3)
//{
////	int coffee = 1000, latte = 1500, icetea = 2000
//	int price;
//	//if (menu1 == coffee)
//	//	price = coffee * num1;
//	price = menu1 * num1 + menu2 * num2 + menu3 * num3;
//	return price;
//}
//
//void main()
//{
//	int coffee = 1000, latte = 1500, icetea = 2000;
//	int co_num, la_num, ice_num, price = 0;
//
//	cin >> "커피 몇 개? => ">> co_num >> la_num >> ice_num;
//
//	if ((co_num == 0) && (la_num == 0))
//		price = calcPrice(icetea);
//	else if ((co_num == 0) && (ice_num == 0))
//		price = calcPrice(latte);
//	else if ((la_num == 0) && (ice_num == 0))
//		price = calcPrice(coffee);
//
//	else price = calcPrice(coffee, co_num, latte, la_num, icetea, ice_num);
//
//	cout << price << endl;
//}

// O
//int calcPrice(char menu)
//{
//	int price;
//
//	if (menu == 'A')
//		price = 1000;
//	else if (menu == 'B')
//		price = 2000;
//	else if (menu == 'C')
//		price = 3000;
//	else price = 0;
//	return price;
//}
//int calcPrice(char menu, int num)
//{
//	int price = calcPrice(menu);
//	price *= num;
//	return price;
//}
//void main()
//{
//	char menu;
//	int num;
//	cout << "주문하시겠습니까? 메뉴| A 1000, B 2000, C 3000 => ";
//	cin >> menu;
//	cout << "몇 잔 주문하시겠습니까? => ";
//	cin >> num;
//	
//	if (num == 1)
//		cout << calcPrice(menu) << "원입니다." << endl;
//	else cout << calcPrice(menu, num) << "원입니다." << endl;
//}

//#include <iostream>
//using namespace std;
//
//int sum(int arr[], int size)
//{
//	int total = 0;
//	for (int i = 0; i < size; i++)
//		total += arr[i];
//	return total;
//}
//void main()
//{
//	int nums[] = { 1,2,3,4,5 };
//	cout << sum(nums, 5) << endl;
//}

//#include <iostream>
//using namespace std;
//
//void swapItem(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void main()
//{
//	int player1 = 101, player2 = 305;
//	swapItem(player1, player2);
//	cout << player1 << " " << player2 << endl;
//}

#include <Iostream>
using namespace std;

int* swap(int one, int two)
{
	int k = one;
	one = two;
	int arr[2] = { one,two };
	return arr;
}
void main()
{
	int a[2] = { 1,2 };

	int* 

	cout << swap(a[0], a[1]) << endl;
}