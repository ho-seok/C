/*//������������ �̿��� �ʴ��� �ð�/��/�ʷ� ����//
#include <stdio.h>
#define SEC_PER_MINUTE 60 //60�ʴ�1���̴�
#define SEC_PER_HOUR 3600 //3600�ʴ�1�ð��̴�
#define MINUTE_PER_HOUR 60 //60���� 1�ð��̴�
int main(void)
	{
		int input, hour, minute, second;
		printf("�ʴ����� �ð��� �Է��Ͻÿ�:(32��������) ");
		scanf("%d", &input);

		hour = input / SEC_PER_HOUR;
		minute = input / SEC_PER_MINUTE - (hour * MINUTE_PER_HOUR);
		second = input % SEC_PER_MINUTE;
		printf("%d�ʴ� %d�� %d�� %d���Դϴ�. \n", input, hour, minute, second);
		return 0;
	}
*/


/*
#include<stdio.h>
#include<stdlib.h>

int main() {

	int nums[5] = { 0 };
	int max;
	int i;
	
	srand(time(0)); //���� ������ �ʱ�ȭ��Ű�� ����
	printf("5���� ������ �����մϴ�.\n");
	for ( i = 0; i < 5; i++)
	{
		nums[i] = (rand()%10)+1; // 1~10������ �������� rand�Լ��� ������ �����ڸ� �̿���
	}
	max = nums[0]; // ���� ù��°�� nums�� max�� ����
	for ( i = 1; i < 5; i++)
	{
		if (max < nums[i]) max = nums[i];
	}
	printf("���� ū ���� : %d�Դϴ�\n", max);
	return 0;
}
*/


/* a��b�� ġȯ�ϴ� ���
	int a = 2,b = 7;
	int temp;
	temp = a;
	a = b;
	b = temp;
*/


/*
#include<stdio.h> //�迭�� ������ ���ڸ� �ʱ�ȭ�� �Ŀ� �� ���ڵ��� ��ġ�� �ٲٴ� ���α׷�
int main()
{
	int ary[] = { 1,2,3,4,5 };
	int i, r, temp, size;

	size = sizeof(ary) / sizeof(ary[0]);

	printf("ó�� �迭�� ����� ��:");
	for ( i = 0; i < size; i++)
	{
		printf("%2d", ary[i]);
	}
	for ( i = 0; i < size-3; i++)
	{
		r = size - 1 - i; 
		temp = ary[i];
		ary[i] = ary[r];
		ary[r] = temp;
	}
	printf("\n�ٲ� �迭�� ����� ��:");
	for ( i = 0; i < size; i++)
	{
		printf("%2d", ary[i]);
	}
	return 0;
}
*/


/*
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void swap(int *, int *);
int main() {
	char how = 'y';
	while (how=='y')
	{
	int orgin[10] = { 0 };
	int result[10] = { 0 };
	int i, temp, j, size;
	size = sizeof(orgin) / sizeof(orgin[0]); // 4*10 / 4 sizeof������ �̿��� �迭ũ�⸦ �����Ҵ� size=10
	srand(time(NULL)); // ���� ������ �ʱ�ȭ
	printf("�ΰ��� �迭�� �̿��� �����Ʈ ���α׷�\n");
	printf("orign:");
	for (i = 0; i < 10; i++)       //���� �ٸ� �������� �ڵ�
	{
		orgin[i] = (rand() % 50) + 1; // 1~50���� ���������� orgin�迭�� ���� 
		for (j = 0; j < i; j++)
		{
			if (orgin[i] == orgin[j])
			{
				i--;
				break;
			}
		}
	}
	for (i = 0; i < 10; i++) //orgin[i]�迭�� ���δٸ� ����10���� �������ִµ� �װ��� 10���ݺ����� result[i]�� ����
	{
		printf(" %d ", orgin[i]);
		result[i] = orgin[i];
	}
	for (i = 0; i < size - 1; i++)  //��ȸ�� �Ұ��ΰ� 9ȸ��
	{
		for (j = 0; j < size - 1 - i; j++)    //��Ƚ�� ���� �ٱ⶧���� size-1-i �����Ʈ�� ��Ģ  9-i
		{
			if (result[j] > result[j + 1])
			swap(&result[j], &result[j + 1]);//��������:������ �� ũ�� ġȯ ��������:�������� �� ũ�� ġȯ
		}
	}
	printf("\nresult:");
	for (i = 0; i < 10; i++)
	{
		printf(" %d ", result[i]); //������������ ���ĵ� ���� ���
	}
	printf("\n�ѹ� �� �Ͻðڽ��ϱ�?(y/n)");
	scanf(" %c",&how);
	if (how == 'y')
	{
		system("cls");
	}
	else if (how == 'n') break;
}
	return 0;
}
void swap(int *xp, int *yp) {
	int temp;
	temp = *xp;
	*xp = *yp;
	*yp = temp;
}
*/


/*
//�����͸� �̿��� ū ������ ���ʷ� ��� 
#include<stdio.h>
void line_up(double *, double *, double *);
void exchange(double *, double *);

int main() {
	double max, mid, min;
	
	printf("���� ������ �Է��ϼ���:");
	scanf("%lf%lf%lf", &max, &mid, &min);

	line_up(&max, &mid, &min);

	printf("ū ������ ���ʷ� ����ϸ�:%.0lf %.0lf% %.0lf\n", max, mid, min);
	return 0;	
}
void line_up(double *max, double *mid, double *min)
{
	if (*max < *mid) exchange(max, mid);
	if (*max < *min) exchange(max, min);
	if (*mid < *min) exchange(mid, min);
}
void exchange(double *xp ,double *yp)
{
	double temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}
*/


/*  �������Լ��̿��� ����� �Լ�
#include<stdio.h>
#include<Windows.h>
void sum(int *, int*);
void sum1(int *, int *);
void sum2(int *, int *);
void sum3(int *, int *);
int main() {
	int a, b,result;
	char how, HOW;
	HOW = 'y';
	while (HOW=='y'||HOW=='Y')
	{
		printf("�����Է�:");
		scanf("%d%c%d",&a,&how,&b);��
		switch (how)
		{
		case '+':printf("======���ϱ� ������ �����մϴ�.======\n");
			sum(&a, &b); getchar();
			scanf("%c", &HOW);
			break;
		case '-':printf("======���� ������ �����մϴ�.======\n");
			sum1(&a, &b); getchar();
			scanf("%c", &HOW);
			break;
		case '*':printf("======���ϱ� ������ �����մϴ�.======\n");
			sum2(&a, &b); getchar();
			scanf("%c", &HOW);
			break;
		case '/':printf("======������ ������ �����մϴ�.======\n");
			if(b == 0)printf("�߸��Է�\n");
			sum3(&a, &b); getchar();
			scanf("%c", &HOW);
			break;
		default:printf("�߸��Է�\n");
			printf("��������� �Ͻðڽ��ϱ�?(y/n)\n");
			break;
		}
		if (HOW == 'y' || HOW == 'Y')
		{
			system("cls");
		}
		else if (HOW == 'n' || HOW == 'N') {
			system("cls");
			printf("������ �����մϴ�\n");
		}
		else {
			system("cls"); printf("�߸��Է�\n");
		}
	}
	return 0;
}
void sum(int *pt, int *ptr)
{
	int re;
	re = *pt + *ptr;
	printf("%d+%d=%d�Դϴ�\n", *pt, *ptr,re);
	printf("������ ��� �Ͻðڽ��ϱ�?(y/n)");
}
void sum1(int *pt, int *ptr)
{
	int re;
	re = *pt - *ptr;
	printf("%d-%d=%d�Դϴ�\n", *pt, *ptr, re);
	printf("������ ��� �Ͻðڽ��ϱ�?(y/n)");
}
void sum2(int *pt, int *ptr)
{
	int re;
	re = *pt * *ptr;
	printf("%d*%d=%d�Դϴ�\n", *pt, *ptr, re);
	printf("������ ��� �Ͻðڽ��ϱ�?(y/n)");

}
void sum3(int *pt, int *ptr)
{
	int re;
	re = *pt / *ptr;
	printf("%d/%d=%d�Դϴ�\n", *pt, *ptr, re);
	printf("������ ��� �Ͻðڽ��ϱ�?(y/n)");
}
*/


/* 
#include<stdio.h>
#include<Windows.h>
int main() {
	int e=1;
	char how = 'y';
	while (how=='y')
	{
		printf("[%d] - �й�:16040023,�̸�:��ȣ�� \n",e++);
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (j < 9 - i)
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
		printf("��� �Ͻðڽ��ϱ�?(y/n)");
		scanf(" %c",&how);
		if (how=='y')
		{
			system("cls");
		}
		else break;
	}
	return 0;
}
*/


/*
#include <stdio.h>
#define SWAP(a,b) { int t;t=a;a=b;b=t; }
void SelectionSort(char *ar, int num)
{
	int minidx;
	int i, j;

	// �迭 ��ü ��ȸ.
	for (i = 0; i<num - 1; i++) {
		// i������ �ּҰ��� ã�´�.
		for (minidx = i, j = i + 1; j<num; j++) {
			if (ar[minidx] > ar[j]) {
				minidx = j;
			}
		}
		// �ּҰ��� �����װ� ��ȯ.
		if (minidx != i) {
			SWAP(ar[minidx], ar[i]);
		}
	}
}
*/


/*
void main()
{
	char str[] = "winapi";

	printf("���� ���� ���ڿ� : %s\n", str);
	SelectionSort(str, strlen(str));
	printf("���ĵ� ���ڿ� : %s\n", str);
}
*/


/*
#include<stdio.h>
void two(int *);
void five(int *);
void eight(int *);
void nine(int *);
int main() {
	int a,b;
	printf("2,5,8,9 �� �� �Է�:");
	scanf("%d",&a);
	switch (a)
	{
	case 2:two(&a);
		break;
	case 5:five(&a);
		break;
	case 8:eight(&a);
		break;
	case 9:nine(&a);
		break;
	default:printf("�߸��Է���");
		break;
	}
	return 0;
}
void two(int *a) {
	for (int i = 1; i < 10; i++)
	{
		for (int j = 2; j <= 5; j++)
		{
			if (j==5)
			{
				printf("\n");
				break;
			}
			printf("%d*%d=%d ", j, i, j*i);
		}
	}
}
void five(int *a) {
	for (int i = 1; i < 10; i++)
	{
		for (int j = 5; j <= 8; j++)
		{
			if (j == 8) {
				printf("\n");
				break;
			}
			printf("%d*%d=%d ",j,i,j*i);
		}
	}
}
void eight(int *a) {
	int i, j;
	for ( i = 1; i < 10; i++)
	{
		for ( j = 8; j <=10 ; j++)
		{
			if (j==10)
			{
				j -= 8;
				printf("%d*%d=%d\n", j, i, j*i);
				break;
			}
			printf("%d*%d=%d ", j, i, j*i);
		}
	}
}
void nine(int *a) {
	int i, j;
	for ( i = 1; i < 10; i++)
	{
		for ( j = 9; j <= 10; j++)
		{
			if (j==10)
			{
				j -= 8;
				printf("%d*%d=%d ", j, i, j*i);
				j++;
				printf("%d*%d=%d\n", j, i, j*i);
				break;
			}
			printf("%d*%d=%d ", j, i, j*i);
		}
	}
}
*/


/*
#include<stdio.h>
#include<Windows.h>
void sum2(int re) { 
	double ave;
	ave = re / 5;
	printf("���:%.2lf", ave);
}
int sum(int a[]) {
	int re=0; //�ݵ�� �ʱ�ȭ�� ����ߵ�
	printf("5���� �� �Է�  ");
	for (int i = 0; i < 5; i++)
	{
		
		scanf("%d",&a[i]);
		re += a[i];
	}
	return re;
}
int main() {
	char how='y';
	double ave;
	int re,b;
	while (how == 'y')
	{
		int a[5] = { 0 };
		printf("1.���� 2.���  ");
		scanf("%d", &b);
		switch (b)
		{
		case 1: re = sum(a);
			printf("����:%d\n",re);
			break;
		case 2:  sum2(sum(a)); //���� sum(a)�Լ� ���� �� sum2 �Լ����� sum�Լ� ���ϰ��� ���� sum(int re)
			break;
		default:printf("�߸��Է�\n");
			break;
		}
		printf("�ѹ� �� �Ͻðڽ��ϱ�?(y/n)");
		scanf(" %c",&how);
		if (how == 'y' || how == 'Y')
		{
			system("cls");
		}
		else if (how == 'n' || how == 'N') {
			system("cls");
			printf("����\n");
			break;
		}
	}
	return 0;
}
*/

/*
#include <stdio.h> // sizeof ������ũ�� ���ϴ� �ڵ�
void main()

{
int i;

printf("int=%d\n", sizeof(int));

printf("double=%d\n", sizeof(double));

printf("i=%d\n", sizeof(i));

printf("string=%d\n", sizeof("string"));

}
*/


//��Ȯ�� 1���� ��,�ð�,��,�ʷα��ϱ�
/*
#include<stdio.h>
void main() {

double year_day, hour, min, sec;

year_day=365.2422;
hour = year_day * 24;
min = hour * 60;
sec = min * 60;

printf("1���� ��Ȯ��\n%f��\n%f�ð�\n%f��\n%f���Դϴ�.\n", year_day, hour, min, sec);
}
*/


/*
#include<stdio.h>
void main() {
int* ptr;
int x = 10;
ptr = &x;
printf("ptr�� �ּ�:%d\n",&ptr);
printf("ptr�� ��:%d\n", ptr);
printf("ptr�� ����Ű�� ��:%d\n", *ptr); //ptr�ȿ� ���ִ� x���ּҿ� �ش�Ǵ� �޸𸮰��� ����Ų��.
printf("x �� ��:%d\n", x);
printf("x �� �ּ�:%d\n", &x);

return 0;
}
*/

