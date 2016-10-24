
  //소수점 이하 자리수가 10자리 이상인 실수를 받고 KM , M , CM , MM 로 변환하기
void main(){
	char name[30];
	int number, km,m,cm,mm;
	double len ;
	printf("나(정수), 이름(문자열)을 입력하세요:");
	scanf("%d %s", &number, name);
	printf("소수점 이하 자리수가 10자리 이상인 실수를 입력하세요:");
	scanf("%lf", &len);  //123.987654km 

	km =(int)len;
    len = len - km;
	m = (int)(1000 * len); 
	len = 1000 * len - m;   
	cm = (int)(100 * len);
	len = 100 * len - cm;
	mm = (int)(10 * len);
		printf("===========================\n");
	    printf("나:%d, 이름:%s\n",number,name);
	    printf("%d km , %d m , %dcm , %d mm\n",km,m,cm,mm);
	    printf("===========================\n");
}







//  초 수를 입력해서 년,개월,일,시,분,초로 변환하기
int main(void) {
	int class_number,input, year, month, day, hour, min, sec,rest;
		char name[10];
		printf("나이 이름을 입력하시오:");
		scanf("%d %s",&class_number,name);
		printf("초 수를 입력하시오:");
		scanf("%d", &input);
		printf("나:%d , 이름:%s\n", class_number,name);
		year = input / (3600 * 24 * 365);
		rest = input % (3600 * 24 * 365);
		month = rest / (3600 * 24 * 30);
		rest = rest % (3600 * 24 * 30);
		day = rest / (3600 * 24);
		rest = rest % (3600 * 24);
		hour = rest / 3600;
		rest = rest % 3600;
		min = rest / 60;
		sec = rest % 60;
		printf("%d초는 %d년 %d개월 %d일 %d시 %d분 %d초 입니다.\n", 
		 input, year, month, day, hour, min, sec);
}








// 거리와 스피드를 입력받아서 걸리는 시간 , 시간 / 분 / 초로 구하기
#include <stdio.h>
int main(void) {

	int distance, speed;
	int hour, min;
	double time, sec;
	printf("거리와 속력을 입력하세요 : ");
	scanf("%d%d", &distance, &speed);// 거리와 스피드를 입력한다
	time = ((double)distance / speed)*3600.0;// 시간 = 속도/거리       t=s/v
	hour = time / 3600;
	time = time - (3600 * hour);
	min = time / 60;
	time = time - (60 * min);
	sec = time;
	printf("걸리는 시간은 : %d 시간, %d분,%.3lf초입니다.\n", hour, min, sec);
	return 0;
}









// 행성의 반지름과 속력받아서 걸리는 시간 , 시간 / 분 / 초로 구하기
void main() {
	int km,hour, radio, min;
	double time, sec, cir;
	printf("행성의 반지름과 속력입력:");
	scanf("%d%d", &radio,&km);

	cir = 1000*2 * 3.14*radio; //둘레 구하는
	time = cir / km;
	hour = time / 3600; //1시간값
	time = time - (3600 * hour);
	min = time / 60;
	time = time - (60 * min);
	sec = time;
	printf("걸리는시간: %d시간 %d분 %.3lf초걸립니다.\n", hour, min, sec);
	return 0;
}









//윤년과 평년 구하기
#include<stdio.h>
void main() {
	int y;
	scanf("%d", &y);
	//y%4=윤년 y%100=평년 y%400=윤년 퍼센트 x의5% x*5/100
	if ((!(y%4))&&((y%100)||!(y%400)))
	{
		printf("윤년\n");
	}
	else
	{
		printf("평년\n");
	}
	return 0;
}











// 
#include<stdio.h>
#include<Windows.h>
void main() {
	int num = 1;
	char yn;
	printf("[%d] - 나:21 이름:송호석\n", num);
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j < 9 - i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	printf("계속 하시겠습니까? (y/n)");
	scanf("%c", &yn);
	if (yn == 'y')
	{
		while (1)
		{
			
			system("cls");
			printf("[%d] - 나:21 , 이름:송호석\n", num++);
			for (int i = 0; i <= 9; i++)
			{
				for (int j = 0; j <= 9; j++)
				{
					if (j < 9 - i)
						printf(" ");
					else
						printf("*");
				}
				printf("\n");
			}
			printf("계속 하시겠습니까? (y/n)");
			scanf("%c", &yn);

		}

	}

}









