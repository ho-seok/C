
  //�Ҽ��� ���� �ڸ����� 10�ڸ� �̻��� �Ǽ��� �ް� KM , M , CM , MM �� ��ȯ�ϱ�
void main(){
	char name[30];
	int number, km,m,cm,mm;
	double len ;
	printf("�й�(����), �̸�(���ڿ�)�� �Է��ϼ���:");
	scanf("%d %s", &number, name);
	printf("�Ҽ��� ���� �ڸ����� 10�ڸ� �̻��� �Ǽ��� �Է��ϼ���:");
	scanf("%lf", &len);  //123.987654km 

	km =(int)len;
    len = len - km;
	m = (int)(1000 * len); 
	len = 1000 * len - m;   
	cm = (int)(100 * len);
	len = 100 * len - cm;
	mm = (int)(10 * len);
		printf("===========================\n");
	    printf("�й�:%d, �̸�:%s\n",number,name);
	    printf("%d km , %d m , %dcm , %d mm\n",km,m,cm,mm);
	    printf("===========================\n");
}







//  �� ���� �Է��ؼ� ��,����,��,��,��,�ʷ� ��ȯ�ϱ�
int main(void) {
	int class_number,input, year, month, day, hour, min, sec,rest;
		char name[10];
		printf("�й��� �̸��� �Է��Ͻÿ�:");
		scanf("%d %s",&class_number,name);
		printf("�� ���� �Է��Ͻÿ�:");
		scanf("%d", &input);
		printf("�й�:%d , �̸�:%s\n", class_number,name);
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
		printf("%d�ʴ� %d�� %d���� %d�� %d�� %d�� %d�� �Դϴ�.\n", 
		 input, year, month, day, hour, min, sec);
}








// �Ÿ��� ���ǵ带 �Է¹޾Ƽ� �ɸ��� �ð� , �ð� / �� / �ʷ� ���ϱ�
#include <stdio.h>
int main(void) {

	int distance, speed;
	int hour, min;
	double time, sec;
	printf("�Ÿ��� �ӷ��� �Է��ϼ��� : ");
	scanf("%d%d", &distance, &speed);// �Ÿ��� ���ǵ带 �Է��Ѵ�
	time = ((double)distance / speed)*3600.0;// �ð� = �ӵ�/�Ÿ�       t=s/v
	hour = time / 3600;
	time = time - (3600 * hour);
	min = time / 60;
	time = time - (60 * min);
	sec = time;
	printf("�ɸ��� �ð��� : %d �ð�, %d��,%.3lf���Դϴ�.\n", hour, min, sec);
	return 0;
}









// �༺�� �������� �ӷ¹޾Ƽ� �ɸ��� �ð� , �ð� / �� / �ʷ� ���ϱ�
void main() {
	int km,hour, radio, min;
	double time, sec, cir;
	printf("�༺�� �������� �ӷ��Է�:");
	scanf("%d%d", &radio,&km);

	cir = 1000*2 * 3.14*radio; //�ѷ� ���ϴ�
	time = cir / km;
	hour = time / 3600; //1�ð���
	time = time - (3600 * hour);
	min = time / 60;
	time = time - (60 * min);
	sec = time;
	printf("�ɸ��½ð�: %d�ð� %d�� %.3lf�ʰɸ��ϴ�.\n", hour, min, sec);
	return 0;
}









//����� ��� ���ϱ�
#include<stdio.h>
void main() {
	int y;
	scanf("%d", &y);
	//y%4=���� y%100=��� y%400=���� �ۼ�Ʈ x��5% x*5/100
	if ((!(y%4))&&((y%100)||!(y%400)))
	{
		printf("����\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}











// 
#include<stdio.h>
#include<Windows.h>
void main() {
	int num = 1;
	char yn;
	printf("[%d] - �й�:16040023, �̸�:��ȣ��\n", num);
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
	printf("��� �Ͻðڽ��ϱ�? (y/n)");
	scanf("%c", &yn);
	if (yn == 'y')
	{
		while (1)
		{
			
			system("cls");
			printf("[%d] - �й�:16040023, �̸�:��ȣ��\n", num++);
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
			printf("��� �Ͻðڽ��ϱ�? (y/n)");
			scanf("%c", &yn);

		}

	}

}









