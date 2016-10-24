//나머지연산을 이용한 초단위 시간/분/초로 변경//
#include <stdio.h>
#define SEC_PER_MINUTE 60 //60초는1분이다
#define SEC_PER_HOUR 3600 //3600초는1시간이다
#define MINUTE_PER_HOUR 60 //60분은 1시간이다
int main(void)
	{
		int input, hour, minute, second;
		printf("초단위의 시간을 입력하시요:(32억초이하) ");
		scanf("%d", &input);

		hour = input / SEC_PER_HOUR;
		minute = input / SEC_PER_MINUTE - (hour * MINUTE_PER_HOUR);
		second = input % SEC_PER_MINUTE;
		printf("%d초는 %d시 %d분 %d초입니다. \n", input, hour, minute, second);
		return 0;
	}






#include<stdio.h>
#include<stdlib.h>

int main() {

	int nums[5] = { 0 };
	int max;
	int i;
	
	srand(time(0)); //난수 생성시 초기화시키는 구문
	printf("5개의 난수를 생성합니다.\n");
	for ( i = 0; i < 5; i++)
	{
		nums[i] = (rand()%10)+1; // 1~10까지의 난수생성 rand함수에 나머지 연산자를 이용함
	}
	max = nums[0]; // 가장 첫번째의 nums를 max로 지정
	for ( i = 1; i < 5; i++)
	{
		if (max < nums[i]) max = nums[i];
	}
	printf("가장 큰 값은 : %d입니다\n", max);
	return 0;
}






 //a와b를 치환하는 방법
	int a = 2,b = 7;
	int temp;
	temp = a;
	a = b;
	b = temp;








#include<stdio.h> //배열에 임의의 숫자를 초기화한 후에 각 숫자들의 위치를 바꾸는 프로그램
int main()
{
	int ary[] = { 1,2,3,4,5 };
	int i, r, temp, size;

	size = sizeof(ary) / sizeof(ary[0]);

	printf("처음 배열에 저장된 값:");
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
	printf("\n바뀐 배열에 저장된 값:");
	for ( i = 0; i < size; i++)
	{
		printf("%2d", ary[i]);
	}
	return 0;
}










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
	size = sizeof(orgin) / sizeof(orgin[0]); // 4*10 / 4 sizeof연산을 이용해 배열크기를 동적할당 size=10
	srand(time(NULL)); // 난수 생성시 초기화
	printf("두개의 배열을 이용한 버블소트 프로그램\n");
	printf("orign:");
	for (i = 0; i < 10; i++)       //서로 다른 난수생성 코드
	{
		orgin[i] = (rand() % 50) + 1; // 1~50까지 난수생성후 orgin배열에 저장 
		for (j = 0; j < i; j++)
		{
			if (orgin[i] == orgin[j])
			{
				i--;
				break;
			}
		}
	}
	for (i = 0; i < 10; i++) //orgin[i]배열에 서로다른 난수10개가 생성되있는데 그값을 10번반복시켜 result[i]에 저장
	{
		printf(" %d ", orgin[i]);
		result[i] = orgin[i];
	}
	for (i = 0; i < size - 1; i++)  //몇회전 할것인가 9회전
	{
		for (j = 0; j < size - 1 - i; j++)    //비교횟수 점점 줄기때문에 size-1-i 버블소트의 법칙  9-i
		{
			if (result[j] > result[j + 1])
			swap(&result[j], &result[j + 1]);//오름차순:왼쪽이 더 크면 치환 내림차순:오른쪽이 더 크면 치환
		}
	}
	printf("\nresult:");
	for (i = 0; i < 10; i++)
	{
		printf(" %d ", result[i]); //오름차순으로 정렬된 값을 출력
	}
	printf("\n한번 더 하시겠습니까?(y/n)");
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











//포인터를 이용한 큰 수부터 차례로 출력 
#include<stdio.h>
void line_up(double *, double *, double *);
void exchange(double *, double *);

int main() {
	double max, mid, min;
	
	printf("숫자 세개를 입력하세요:");
	scanf("%lf%lf%lf", &max, &mid, &min);

	line_up(&max, &mid, &min);

	printf("큰 수부터 차례로 출력하면:%.0lf %.0lf% %.0lf\n", max, mid, min);
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








   //  포인터함수이용한 연산식 함수
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
		printf("수식입력:");
		scanf("%d%c%d",&a,&how,&b);ㄹ
		switch (how)
		{
		case '+':printf("======더하기 연산을 시작합니다.======\n");
			sum(&a, &b); getchar();
			scanf("%c", &HOW);
			break;
		case '-':printf("======빼기 연산을 시작합니다.======\n");
			sum1(&a, &b); getchar();
			scanf("%c", &HOW);
			break;
		case '*':printf("======더하기 연산을 시작합니다.======\n");
			sum2(&a, &b); getchar();
			scanf("%c", &HOW);
			break;
		case '/':printf("======나누기 연산을 시작합니다.======\n");
			if(b == 0)printf("잘못입력\n");
			sum3(&a, &b); getchar();
			scanf("%c", &HOW);
			break;
		default:printf("잘못입력\n");
			printf("연산을계속 하시겠습니까?(y/n)\n");
			break;
		}
		if (HOW == 'y' || HOW == 'Y')
		{
			system("cls");
		}
		else if (HOW == 'n' || HOW == 'N') {
			system("cls");
			printf("연산을 종료합니다\n");
		}
		else {
			system("cls"); printf("잘못입력\n");
		}
	}
	return 0;
}
void sum(int *pt, int *ptr)
{
	int re;
	re = *pt + *ptr;
	printf("%d+%d=%d입니다\n", *pt, *ptr,re);
	printf("연산을 계속 하시겠습니까?(y/n)");
}
void sum1(int *pt, int *ptr)
{
	int re;
	re = *pt - *ptr;
	printf("%d-%d=%d입니다\n", *pt, *ptr, re);
	printf("연산을 계속 하시겠습니까?(y/n)");
}
void sum2(int *pt, int *ptr)
{
	int re;
	re = *pt * *ptr;
	printf("%d*%d=%d입니다\n", *pt, *ptr, re);
	printf("연산을 계속 하시겠습니까?(y/n)");

}
void sum3(int *pt, int *ptr)
{
	int re;
	re = *pt / *ptr;
	printf("%d/%d=%d입니다\n", *pt, *ptr, re);
	printf("연산을 계속 하시겠습니까?(y/n)");
}










#include<stdio.h>
#include<Windows.h>
int main() {
	int e=1;
	char how = 'y';
	while (how=='y')
	{
		printf("[%d] - 학번:16040023,이름:송호석 \n",e++);
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
		printf("계속 하시겠습니까?(y/n)");
		scanf(" %c",&how);
		if (how=='y')
		{
			system("cls");
		}
		else break;
	}
	return 0;
}









#include <stdio.h>
#define SWAP(a,b) { int t;t=a;a=b;b=t; }
void SelectionSort(char *ar, int num)
{
	int minidx;
	int i, j;

	// 배열 전체 순회.
	for (i = 0; i<num - 1; i++) {
		// i이후의 최소값을 찾는다.
		for (minidx = i, j = i + 1; j<num; j++) {
			if (ar[minidx] > ar[j]) {
				minidx = j;
			}
		}
		// 최소값을 현재항과 교환.
		if (minidx != i) {
			SWAP(ar[minidx], ar[i]);
		}
	}
}










void main()
{
	char str[] = "winapi";

	printf("정렬 전의 문자열 : %s\n", str);
	SelectionSort(str, strlen(str));
	printf("정렬된 문자열 : %s\n", str);
}










#include<stdio.h>
void two(int *);
void five(int *);
void eight(int *);
void nine(int *);
int main() {
	int a,b;
	printf("2,5,8,9 중 단 입력:");
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
	default:printf("잘못입력함");
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










#include<stdio.h>
#include<Windows.h>
void sum2(int re) { 
	double ave;
	ave = re / 5;
	printf("평균:%.2lf", ave);
}
int sum(int a[]) {
	int re=0; //반드시 초기화를 해줘야됨
	printf("5개의 수 입력  ");
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
		printf("1.총합 2.평균  ");
		scanf("%d", &b);
		switch (b)
		{
		case 1: re = sum(a);
			printf("총합:%d\n",re);
			break;
		case 2:  sum2(sum(a)); //먼저 sum(a)함수 실행 후 sum2 함수에서 sum함수 리턴값을 받음 sum(int re)
			break;
		default:printf("잘못입력\n");
			break;
		}
		printf("한번 더 하시겠습니까?(y/n)");
		scanf(" %c",&how);
		if (how == 'y' || how == 'Y')
		{
			system("cls");
		}
		else if (how == 'n' || how == 'N') {
			system("cls");
			printf("종료\n");
			break;
		}
	}
	return 0;
}












#include <stdio.h> // sizeof 데이터크기 구하는 코드
void main()

{
int i;

printf("int=%d\n", sizeof(int));

printf("double=%d\n", sizeof(double));

printf("i=%d\n", sizeof(i));

printf("string=%d\n", sizeof("string"));

}











//정확한 1년을 일,시간,분,초로구하기

#include<stdio.h>
void main() {

double year_day, hour, min, sec;

year_day=365.2422;
hour = year_day * 24;
min = hour * 60;
sec = min * 60;

printf("1년은 정확히\n%f일\n%f시간\n%f분\n%f초입니다.\n", year_day, hour, min, sec);
}









#include<stdio.h>
void main() {
int* ptr;
int x = 10;
ptr = &x;
printf("ptr의 주소:%d\n",&ptr);
printf("ptr의 값:%d\n", ptr);
printf("ptr이 가르키는 값:%d\n", *ptr); //ptr안에 들어가있는 x의주소에 해당되는 메모리값을 가리킨다.
printf("x 의 값:%d\n", x);
printf("x 의 주소:%d\n", &x);

return 0;
}


