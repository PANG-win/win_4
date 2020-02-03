#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
//#define A 100
//#define B "hehe"
//#define LOOP int sum=0,i;for(i=0;i<=100;i++){sum+=i;}printf("sum=%d\n",sum);
//int main()
//{
//	printf("%d\n", A);
//	printf("%s\n", B);
//	LOOP
//	return 0;
//}
//宏定义与函数加法；
//#define ADD(x,y) x+y
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10, b = 20;
//	//int sum = 0;
////	sum = ADD(a, b);
//	int sum = add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//宏定义与函数乘法；
//int CJ(int x, int y)
//{
//	return x*y;
//}
//#define PR(x,y) x*y
//int main()
//{
//	int a = 2, b = 5 ,J;// J = 0;
//	//J = CJ(a, b);
//	J = PR(a, b);
//	printf("J=%d\n", J);
//	return 0;
//}
//逆序输出十个数的值；
//int main()
//{
//	int i, arr[10];
//	printf("请输入十个整数并点击enter键\n");
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("正序输出值为：\n");
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	//printf("\n");
//	printf("\n 逆序输出值为：\n");
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int i, a[10];
//	//printf("请输入10个数字并点击enter键\n");
//	printf("正序输入值为：\n");
//	for (i = 0; i < 10; i++)
//	{
//		//scanf("%d", &a[i]);
//		a[i] = i;
//		printf("%d  ", a[i]);
//	}
//	printf("\n");
//	printf("逆序输出值为:\n");
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//冒泡排序比较大小；
//int main()
//{
//	printf("请输入五个整数并点击enter键\n");
//	int arr[5], i,temp;
//	printf("输入顺序为\n");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	//	printf("%d ", arr[i]);
//	}
//	//printf("\n");
//	temp = arr[0];
//	for (1 = 0; i < 5; i++)
//	{
//		if (temp>arr[i])
//		{
//			temp = arr[i];
//			arr[i] = arr[i - 1];
//		}
//	}
//	return 0;
//}
//使用函数体进行排序，以及if语句进行排序。
//int sweap(int*x, int*y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//	return 0;
//}
//int main()
//{
//	int a, b, c,temp;
//	printf("请输入三个数的值并点击enter键\n");
//	scanf("%d%d%d", &a, &b, &c);
//	//if (a >b)
//	if (a <b)
//	{
//		sweap(&a, &b);
//		//temp = a; 
//		//a = b;
//		//b = temp;
//	}
//	if (a <c)
//	//if (a >c)
//	{
//		sweap(&a, &c);
//		/*temp = a;
//		a = c;
//		c = temp;*/
//	}
//	if (b < c)
//	//if (b > c)
//	{
//		sweap(&b, &c);
//		/*temp = b;
//		b = c;
//		c = temp;*/
//	}
//	printf("交换后的值为\n");
//		printf("%d %d %d \n", a, b, c);
//	return 0;
//}
//简单使用结构体
//struct stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	char id[20];
//};
//int main()
//{
//	struct stu s1 = { "张三", 20, "男", "201806020917" };
//	struct stu s2 = { "李四", 20, "男", "201806020916" };
//	printf("%s %d %s %s \n", s1.name, s1.age, s1.sex, s1.id);
//	//printf("%s %d %s %s \n", s2.name, s2.age, s2.sex, s2.id);
//	return 0;
//}
//判断一个数是否为奇数；
//int main()
//{
//	int i;
//	printf("请输入需要判断的数并点击enter键\n");
//	scanf("%d", &i);
//	if (1 == i % 2)
//	{
//		printf("该数为奇数\n");
//	}
//	else
//		printf("该数为偶数\n");
//	return 0;
//}
//输出1-100之间的奇数并统计个数；
//int main()
//{
//	int i, count = 0;
//	printf("1-100之间的奇数为：\n");
//	for (i = 1; i <= 100; i++)
//	{
//		if (1 == i % 2)
//		{
//			printf("%3d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i, count = 0;
//	printf("1-100之间的奇数为： \n");
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%2d ", i);
//		count++;
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//使用switch语句输出星期；
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:printf("星期一\n");
//		break;
//	case 2:printf("星期二\n");
//		break;
//	case 3:printf("星期三\n");
//		break;
//	case 4:printf("星期四\n");
//		break;
//	case 5:printf("星期五\n");
//		break;
//	case 6:printf("星期六\n");
//		break;
//	case 7:printf("星期七\n");
//		break;
//	default:printf("你是个傻子\n");
//		break;
//	}
//	return 0;
//}
//while循环打印1-10；
//int main()
//{
//	int i=1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	char i;
//	printf("请输入enter键点击开始\n");
//	scanf("%s", &i);
//	char arr1[] = { "520,YYD,1314zyq,love you" };
//	char arr2[] = { "########################" };
//	int left = 0;
//	int right = strlen(arr2)-1;
//	system("cls");
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		//arr2[right] = arr1[right];
//		left++;
//		//right--;
//		printf("%s\n", arr2);
//		Sleep(200);
//		system("cls");
//	}
//	return 0;
//}
//int main()
//{
//	int p;
//	printf("请输入enter键点击开始\n");
//	scanf("%d", &p);
//	system("cls");
//
//	printf("你以为这是个什么程序呢？");
//	Sleep(1500);
//	system("cls");
//
//	printf("for循环？函数调用？结构体？");
//	Sleep(1500);
//	system("cls");
//
//	printf("NO NO NO");
//	Sleep(1500);
//	system("cls");
//
//	printf("你看看就知道了呢");
//	Sleep(1500);
//	system("cls");
//
//	printf("听说有个女孩叫：");
//	Sleep(1500);
//	system("cls");
//
//	printf("云一丹");
//	Sleep(1500);
//	system("cls");
//
//	printf("听说她有个男朋有叫：");
//	Sleep(1500);
//	system("cls");
//
//	printf("庞浩文");
//	Sleep(1500);
//	system("cls");
//
//	printf("都说她男朋友特优秀");
//	Sleep(1500);
//	system("cls");
//
//	printf("是不是啊？");
//	Sleep(2500);
//	system("cls");
//
//	/*char arr1[] = { "是，特优秀" };
//	char arr2[] = { "          " };
//	int i;
//	for (i = 0; i <= 10; i++)
//	{
//		arr2[i] = arr1[i];
//		wprintf(L"%c", arr2);
//		Sleep(1000);
//	}*/
//	printf("是，特优秀。");
//	Sleep(3500);
//	system("cls");
//
//	printf("好了，就问到这儿了。");
//	Sleep(1500);
//	system("cls");
//
//	printf("你以为这个程序马上就要结束是不是？");
//	Sleep(1500);
//	system("cls");
//
//	printf("我就知道你要说是");
//	Sleep(4000);
//	system("cls");
//
//	printf("其实后面还有哦");
//	Sleep(1500);
//	system("cls");
//
//	printf("庞浩文托我（我就是程序体哦）");
//	Sleep(1500);
//	system("cls");
//
//	printf("给云一丹显示几句话");
//	Sleep(2500);
//	system("cls");
//
//	printf("他说：");
//	Sleep(2500);
//	system("cls");
//
//	printf("“云一丹，遇见你，很幸运，和你在一起，已经花光了我所有的运气，守护你，是我对你的承诺，因为，我爱你。”");
//	Sleep(10000);
//	system("cls");
//
//	printf("好了，该显示的已经显示完了");
//	Sleep(1500);
//	system("cls");
//
//	printf("我的使命结束了");
//	Sleep(1500);
//	system("cls");
//
//	printf("这次是真的结束了呢");
//	Sleep(1500);
//	system("cls");
//
//	printf("咱下次见哦");
//	Sleep(1500);
//	system("cls");
//
//	printf("Byebye~~~~");
//	Sleep(1500);
//	system("cls");
//
//	return 0;
//}