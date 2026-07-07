//7
#include <cstdio>
void main()
{
	int a[5][5] = {};
	int num = 1;
	int y = 0, x = -1;
	int count = 5;
	int k = 1;

	while (1)
	{
		for (int i = 0; i < count; i++) {
			x += k;
			a[y][x] = num;
			num++;
		}
		count--;
		if (count == 0)
			break;
		for (int i = 0; i < count; i++) {
			y += k;
			a[y][x] = num;
			num++;
		}
		k -= 2;
		//for (int i = 0; i < count; i++) {
		//	x+=-1;
		//	a[y][x] = num;
		//	num++;
		//}
		//count--;
		//if (count == 0)
		//	break;
		//for (int i = 0; i < count; i++) {
		//	y+=-1;
		//	a[y][x] = num;
		//	num++;
		//}
	}
	//{
	//	for (int i = 0; i < count; i++) {
	//		x++;
	//		a[y][x] = num;
	//		num++;
	//	}
	//	count--;
	//	for (int i = 0; i < count; i++) {
	//		y++;
	//		a[y][x] = num;
	//		num++;
	//	}
	//	for (int i = 0; i < count; i++) {
	//		x--;
	//		a[y][x] = num;
	//		num++;
	//	}
	//	count--;
	//	for (int i = 0; i < count; i++) {
	//		y--;
	//		a[y][x] = num;
	//		num++;
	//	}
	//}

	for (int i = 0; i < count; i++) {
		x++;
		a[y][x] = num;
		num++;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d  ", a[i][j]);
		}
		printf("\n");
	}

}