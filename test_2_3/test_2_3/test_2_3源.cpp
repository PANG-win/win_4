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
//�궨���뺯���ӷ���
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
//�궨���뺯���˷���
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
//�������ʮ������ֵ��
//int main()
//{
//	int i, arr[10];
//	printf("������ʮ�����������enter��\n");
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("�������ֵΪ��\n");
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	//printf("\n");
//	printf("\n �������ֵΪ��\n");
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
//	//printf("������10�����ֲ����enter��\n");
//	printf("��������ֵΪ��\n");
//	for (i = 0; i < 10; i++)
//	{
//		//scanf("%d", &a[i]);
//		a[i] = i;
//		printf("%d  ", a[i]);
//	}
//	printf("\n");
//	printf("�������ֵΪ:\n");
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//ð������Ƚϴ�С��
//int main()
//{
//	printf("������������������enter��\n");
//	int arr[5], i,temp;
//	printf("����˳��Ϊ\n");
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
//ʹ�ú�������������Լ�if����������
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
//	printf("��������������ֵ�����enter��\n");
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
//	printf("�������ֵΪ\n");
//		printf("%d %d %d \n", a, b, c);
//	return 0;
//}
//��ʹ�ýṹ��
//struct stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	char id[20];
//};
//int main()
//{
//	struct stu s1 = { "����", 20, "��", "201806020917" };
//	struct stu s2 = { "����", 20, "��", "201806020916" };
//	printf("%s %d %s %s \n", s1.name, s1.age, s1.sex, s1.id);
//	//printf("%s %d %s %s \n", s2.name, s2.age, s2.sex, s2.id);
//	return 0;
//}
//�ж�һ�����Ƿ�Ϊ������
//int main()
//{
//	int i;
//	printf("��������Ҫ�жϵ��������enter��\n");
//	scanf("%d", &i);
//	if (1 == i % 2)
//	{
//		printf("����Ϊ����\n");
//	}
//	else
//		printf("����Ϊż��\n");
//	return 0;
//}
//���1-100֮���������ͳ�Ƹ�����
//int main()
//{
//	int i, count = 0;
//	printf("1-100֮�������Ϊ��\n");
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
//	printf("1-100֮�������Ϊ�� \n");
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%2d ", i);
//		count++;
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//ʹ��switch���������ڣ�
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:printf("����һ\n");
//		break;
//	case 2:printf("���ڶ�\n");
//		break;
//	case 3:printf("������\n");
//		break;
//	case 4:printf("������\n");
//		break;
//	case 5:printf("������\n");
//		break;
//	case 6:printf("������\n");
//		break;
//	case 7:printf("������\n");
//		break;
//	default:printf("���Ǹ�ɵ��\n");
//		break;
//	}
//	return 0;
//}
//whileѭ����ӡ1-10��
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
//	printf("������enter�������ʼ\n");
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
//	printf("������enter�������ʼ\n");
//	scanf("%d", &p);
//	system("cls");
//
//	printf("����Ϊ���Ǹ�ʲô�����أ�");
//	Sleep(1500);
//	system("cls");
//
//	printf("forѭ�����������ã��ṹ�壿");
//	Sleep(1500);
//	system("cls");
//
//	printf("NO NO NO");
//	Sleep(1500);
//	system("cls");
//
//	printf("�㿴����֪������");
//	Sleep(1500);
//	system("cls");
//
//	printf("��˵�и�Ů���У�");
//	Sleep(1500);
//	system("cls");
//
//	printf("��һ��");
//	Sleep(1500);
//	system("cls");
//
//	printf("��˵���и������нУ�");
//	Sleep(1500);
//	system("cls");
//
//	printf("�Ӻ���");
//	Sleep(1500);
//	system("cls");
//
//	printf("��˵��������������");
//	Sleep(1500);
//	system("cls");
//
//	printf("�ǲ��ǰ���");
//	Sleep(2500);
//	system("cls");
//
//	/*char arr1[] = { "�ǣ�������" };
//	char arr2[] = { "          " };
//	int i;
//	for (i = 0; i <= 10; i++)
//	{
//		arr2[i] = arr1[i];
//		wprintf(L"%c", arr2);
//		Sleep(1000);
//	}*/
//	printf("�ǣ������㡣");
//	Sleep(3500);
//	system("cls");
//
//	printf("���ˣ����ʵ�����ˡ�");
//	Sleep(1500);
//	system("cls");
//
//	printf("����Ϊ����������Ͼ�Ҫ�����ǲ��ǣ�");
//	Sleep(1500);
//	system("cls");
//
//	printf("�Ҿ�֪����Ҫ˵��");
//	Sleep(4000);
//	system("cls");
//
//	printf("��ʵ���滹��Ŷ");
//	Sleep(1500);
//	system("cls");
//
//	printf("�Ӻ������ң��Ҿ��ǳ�����Ŷ��");
//	Sleep(1500);
//	system("cls");
//
//	printf("����һ����ʾ���仰");
//	Sleep(2500);
//	system("cls");
//
//	printf("��˵��");
//	Sleep(2500);
//	system("cls");
//
//	printf("����һ���������㣬�����ˣ�������һ���Ѿ������������е��������ػ��㣬���Ҷ���ĳ�ŵ����Ϊ���Ұ��㡣��");
//	Sleep(10000);
//	system("cls");
//
//	printf("���ˣ�����ʾ���Ѿ���ʾ����");
//	Sleep(1500);
//	system("cls");
//
//	printf("�ҵ�ʹ��������");
//	Sleep(1500);
//	system("cls");
//
//	printf("�������Ľ�������");
//	Sleep(1500);
//	system("cls");
//
//	printf("���´μ�Ŷ");
//	Sleep(1500);
//	system("cls");
//
//	printf("Byebye~~~~");
//	Sleep(1500);
//	system("cls");
//
//	return 0;
//}