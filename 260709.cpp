//#include <cstdio>
//void main()
//{
//	int a[5][5] = {};
//	int num = 1;
//	int y = 0, x = -1;
//	int count = 5;
//	int one = 1;
//
//	while (1)
//	{
//		for (int i = 0; i < count; i++) {
//			x += one;
//			a[y][x] = num;
//			num++;
//		}
//		count--;
//		if (count == 0)
//			break;
//		for (int i = 0; i < count; i++) {
//			y += one;
//			a[y][x] = num;
//			num++;
//		}
//		//one = -one;
//		one *= -1;
//	}
//
//	for (int i = 0; i < count; i++) {
//		x++;
//		a[y][x] = num;
//		num++;
//	}
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%2d  ", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <iostream>
//using namespace std;
//void hello()
//{
//	cout << "안녕하세요!";
//}
//int main()
//{
//	hello();
//	hello();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//void function_test1()
//{
//	cout << "function_test1()" << endl;
//	cout << "함수 안에서 실행" << endl;
//}
//void main()
//{
//	cout << "실행 전" << endl;
//	function_test1();
//	cout << "실행 후" << endl;
//}

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//void eatFood()
//{
//	string contents = "밥먹기";
//	cout << contents << endl;
//}
//void goSleep()
//{
//	string contents = "잠자기";
//	cout << contents << endl;
//}
//void main()
//{
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 6; i++)
//	{
//		if (rand() % 2 == 0) {
//			eatFood();
//		}
//		else {
//			goSleep();
//		}
//	}
//}

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//void study()
//{
//	string contents = "공부하기";
//	cout << contents << endl;
//}
//void play()
//{
//	string con = "핸드폰 보기";
//	cout << con << endl;
//}
//int main()
//{
//	int n = 0;
//
//	srand((unsigned int)time(NULL));
//	cout << "몇시간 공부할까? -> ";
//	cin >> n;
//	printf("\n");
//	for (int time_ = 1; time_<=n; time_++)
//	{
//		printf("%d시간째에 한 것 : ", time_);
//		if (rand() % 2 == 1)
//			study();
//		else play();
//	}
//}

//#include <iostream>
//using namespace std;
//
//void greet(string name)
//{
//	cout << "안녕, " << name << "!" << endl;
//}
//void main()
//{
//	greet("이샘");
//	greet("코딩");
//}

//#include <iostream>
//using namespace std;
//
//void person_pocket(char who, int money)
//{
//	cout << who << "의 주머니에 ";
//	cout << money << "원\n";
//}
//void main()
//{
//	person_pocket('A', 10000);
//	person_pocket('B', 5000);
//}

//#include <iostream>
//using namespace std;
//
//void print_Number()
//{
//	cout << "Number" << endl;
//}
//void print_Number2(int num)
//{
//	cout << "Number :" << num << endl;
//}
//void print_Number4_charB(int num, char b)
//// (char b, int num)
//{
//	printf("Number :%d, character :%c\n", num, b);
//}
//void print_characterX(char X)
//{
//	cout << "character :" << X << endl;
//}
//void main()
//{
//	print_Number();
//	print_Number2(2);
//	print_Number4_charB(4, 'b');
//	print_characterX('X');
//}

//#include <iostream>
//using namespace std;
//
//void coffee(string name)
//{
//
//	cout << endl;
//	cout << name << "커피" << endl;
//}
//void main()
//{
//	string name;
//	printf("무슨 커피를 드시겠습니까?\n-> ");
//	cin >> name;
//	coffee(name);
//}

//#include <iostream>
//using namespace std;
//
//char getB() { 
//	return 'B'; 
//}
//char getE() { 
//	return 'E'; 
//}
//int main()
//{
//	cout << "벌을 영어로?" << endl;
//	cout << getB() << getE() << getE() << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int function_test2()
//{
//	int testNumber = 5;
//	return testNumber;
//}
//void main()
//{
//	int getNumber = function_test2();
//	cout << "function_test2()에서 ";
//	cout << "가져온 값 : " << getNumber;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//float sendCard()
//{
//	cout << "<크리스마스 카드>" << endl;
//	cout << "비용: 0.7만원" << endl;
//	cout << "지불하기(단위:만원) : ";
//
//	int manwon;
//	scanf("%d", &manwon);
//	float change = manwon - 0.7;
//	return change;
//}
//
//int main()
//{
//	float result = sendCard();
//	cout << result << "만원 받음" << endl;
//	return 0;
//}

