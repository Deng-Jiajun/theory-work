



////�������һ��4 * 5�ľ���
//#include<stdio.h>
//#include<time.h>
//#define row 5
//#define col 4
//int main()
//{
//	int i, j;
//	int a[row][col];
//	srand((unsigned)time(NULL));
//
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			a[i][j] = rand();
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//}




///*
//��rand����ģ��Ͷһ�����ӣ�����ѧ�����Ͻ�����ÿ����Ͷ����ֵ��1~6��
//��Ͷ��������ֵ֮��Ϊ2��12��Ƶ����С������ֵ֮��Ϊ7��Ƶ�����
//��Ͷ5000�Σ��ֱ��������ֵ֮��Ϊ2��7��12��Ƶ�ʡ�
//*/
//#include<stdio.h>
//#include<time.h>
//#define times 25000
//int main()
//{
//	int i, j;
//	int sum;
//	float sum_2 = 0, sum_7 = 0, sum_12 = 0;
//	srand((unsigned)time(NULL));
//
//	//�����ֵ����ֵ2500��
//	for (i = 0; i < times; i++)
//	{
//		sum = rand() % 6 + 1 + rand() % 6 + 1;
//		if (sum == 2)sum_2++;//��¼��Ϊ2��7��12�Ĵ���
//		if (sum == 7)sum_7++;
//		if (sum == 12)sum_12++;
//	}
//	//ֱ�������ʱ����Ƶ��
//	printf("f(2)=%.3f\tf(7)=%.3f\tf(12)=%.3f", sum_2 / times, sum_7 / times, sum_12 / times);
//	system("pause");
//}



///*
//����ȫƽ����: ����λ������100��999����Ѱ�ҷ������������������δ�С������������У�
//����Ϊ������һ��������ƽ������������λ������ͬ�����磺144��676�ȡ�
//Ҫ����������������������λ�����������������������������ĸ�����
//*/
//
//#include<stdio.h>
//int main()
//{
//	//100~999,Ϊ10~31��ƽ���ķ�Χ
//	int i, num, n = 0, n1, n2, n3;
//	printf("����λ�����е�����ȫƽ����Ϊ��\n");
//	for (i = 10; i < 32; i++)
//	{
//		num = i*i;
//		n1 = num % 10;
//		n2 = (num / 10) % 10;
//		n3 = num / 100;
//		
//		if (n1 == n2 || n2 == n3 || n1 == n3)
//		{
//			printf("%d\n", num);
//			n++;
//		}
//	}
//	printf("����ȫƽ������%d��\n", n);
//	system("pause");
//}



////�Ӽ�������һ���ַ���ͳ�������ж��ٵ��ʡ����赥��֮���Կո�ֿ���
//#include<stdio.h>
//#define SIZE 40
//int main()
//{
//	int letter=0,i = 0 ;
//	char a[SIZE];
//	printf("������һ���ַ�(���ʼ��Կո���)\n");
//	gets(a);
//
//	while (a[i] != '\0')
//	{	
//		//�ԡ���ĸ+�ո񡱵���ʽ�ж�Ϊһ�����ʽ���
//		if (((a[i] >= 'A'&&a[i] <= 'Z') || (a[i] >= 'a'&&a[i] <= 'z')) && (a[i + 1] == ' '))
//		letter++;
//		i++;
//	}
//	printf("�����ַ���%d������\n", letter+1);//���һ�����ʺ�û�пո񣬹�letter+1
//	system("pause");
//}

////�Ӽ�������һ���ַ���ͳ�������ж��ٵ��ʡ����赥��֮���Կո�ֿ���
//#include<stdio.h>
//#define SIZE 40
//int main()
//{
//	int state = 0, input = 0, letter = 0, i = 0, num = 0;
//	//char c, a[SIZE];
//	char a[SIZE] = "   This is  a   book.";
//	//input			000111101100100011110
//	//state			000111101100100011110
//	printf("������һ���ַ�(���ʼ��Կո���)\n");
//	gets(a);
//
//	while (a[i] != '\0')
//	{	
//		if ((a[i] >= 'A'&&a[i] <= 'Z') || (a[i] >= 'a'&&a[i] <= 'z'))
//			input = 1;
//		else
//			input = 0;
//		if (input == 0 && state == 1)
//			letter++;
//		state = input;
//		
//		i++;
//	}
//	printf("�����ַ���%d������\n", letter);
//	system("pause");
//}

////ɾ���ַ���s�������ֵ������c��ͬ���ַ���
//#include<stdio.h>
//#define SIZE 40
//int main()
//{
//	int j,i = 0;
//	char c,a[SIZE];
//
//	printf("������һ���ַ���:\n");
//	gets(a);
//	printf("�������ַ�������Ҫɾȥ���ַ�\n");
//	c=getchar();
//	printf("ɾȥ�����ַ�ǰ���ַ�����\n");
//	puts(a);
//
//	while (a[i] != '\0')
//	{
//		while (a[i] == c)//�˴�����while��������if������������������ѡ���ַ�ֻ��ɾȥһ��
//		{
//			for (j=i; a[j] != '\0'; j++)
//			{
//				a[j] = a[j + 1];//Ԫ�ظ���
//			}
//		}
//		i++;
//	}
//	printf("ɾȥ�����ַ�����ַ�����\n");
//	puts(a);
//
//	system("pause");
//}


//���һ������MinCommonMultiple()��������������������С��������
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	printf("Enter tow integer m and n.");
//	scanf_s("%d %d", &m, &n);
//	printf("The lowest common multiple of m and n:%d\n", LCM(m,n));
//	system("pause");
//	return 0;
//}
//
////compute the greatest common divisor of m and n.
//int GCD(int m,int n)
//{
//	int t;
//	while (n != 0)
//	{
//		t = n;//save the value of n.
//		n = m%n;
//		m = t;//read the value of n.	
//	}
//	return (m);
//}
//
////compute the lowest common multiple 
//int LCM(int m, int n)
//{
//	return(m*n / GCD(m, n));
//}


////�������С��ƽ��ֵ
//#include<stdio.h>
//#include<math.h>
//#define SIZE 40
//int main()
//{
//	void selectmaxandmin(int a[SIZE]);
//	int i = 0;
//	int a[SIZE] = { 7805,352,352,57,95,124,421 };
//	while (a[i] != '\0')
//	{
//		printf("%d\t", a[i]);
//		i++;
//	}
//	printf("\n");
//	selectmaxandmin(a);
//
//	system("pause");
//	return 0;
//}
////������Ԫ�ص����ֵ����Сֵ��ƽ��ֵ
//void selectmaxandmin(int a[SIZE])
//{
//	int i = 0, max, min;
//	float sum = 0;
//	max = min = a[0];
//	while(a[i]!='\0')
//		{
//		//���ڴ����еļ��㷽ʽ�����˳������㣬
//		//������������и�����ʱ���¼��㷽ʽ�������
//		//Ϊ�˱����鷳������ʹ�����ַ�ʽ:
//		//		if (max < a[i])max = a[i];
//		//		if (min > a[i])min = a[i];
//			max = (max + a[i] + abs(max - a[i]))/2;
//			min = (min + a[i] - abs(min - a[i]))/2;
//			sum += a[i];
//			i++;
//		}
//	printf("max=%d\tmin=%d\taverages=%f\n", max, min,sum/i);
//}


////���õݹ���һ�������ĸ�λ����
//#include<stdio.h>
//int main()
//{
//	void c_digit(int n);
//	int n;
//
//	printf("Enter a integer:");
//	scanf_s("%d", &n);
//	printf("Every digit number:");
//	c_digit(n);
//
//	system("pause");
//	return 0;
//}
//
////compute digit number
//void c_digit(int n)
//{
//	int m;
//
//	m = n % 10;
//	n /= 10;
//
//	if (n != 0)
//		c_digit(n);
//
//	printf("%d ", m);
//}





////	����10��ѧ��5�ſεĳɼ����ֱ��ú���ʵ�����й���
////	1.����ÿ��ѧ����ƽ����
////	2.����ÿ�ſε�ƽ����
////	3.�ҳ�����50����������ߵķ�������Ӧ�ĵ�ѧ���Ϳγ�
////	4.����ƽ���ַ���
//#include<stdio.h>
//#define STUDENT 10
//#define COURSE 5
//float all_grade[STUDENT][COURSE]/* = { {87,88,92,67,78},{88,86,87,98,90},{76,75,65,65,78},
//					{67,87,60,90,67} ,{77,78,85,64,56},{76,89,94,65,76},
//					{78,75,64,67,77},{77,76,56,87,85},{84,67,78,76,89},
//					{86,75,64,69,90} }*/;
//float a_s[10], a_c[5], l_g[3], g_v;
//int i, j;
//
//int main()
//{
//	void average_student(void);
//	void average_course(void);
//	void largest_grade(void);
//	void variance(void);
//
//	//input grades
//	for (i = 0; i < STUDENT; i++)
//	{
//		printf( "Input grade of student %d:\n",i + 1 );
//		for (j = 0; j < COURSE; j++)
//		{
//			scanf_s("%f", &all_grade[i][j]);
//		}
//		printf("\n");
//	}
//	average_student();
//	average_course();
//	largest_grade();
//	variance();
//	//first row
//	printf(" NO.\t");
//	for (i = 1; i <= 5; i++)
//	{
//		printf("cour%d\t",i);
//	}
//	printf("aver\n\n");
//	
//	//every sutdents grade and average grade.
//	for (i = 0; i < STUDENT; i++)
//	{
//
//		printf("NO%3d\t", i+1);
//		for (j = 0; j < COURSE; j++)
//		{
//			printf("%.2f\t", all_grade[i][j]);
//		}
//		printf("%.2f", a_s[i]);
//		printf("\n\n");
//	}
//
//	//every course average grade
//	printf("average:");
//	for(i=0;i<5;i++)
//	{
//		printf("%.2f\t", a_c[i]);
//	}
//	printf("\n");
//	//higest
//	printf("highest:%.2f\tNO. %.0f\tcourse %.0f\n", l_g[0], l_g[1], l_g[2]);
//	printf("variance:%.2f\n", g_v);
//	system("pause");
//}
////calculate students average grade
//void average_student(void)
//{
//	float sum = 0;
//	for (i = 0; i < STUDENT; i++)
//	{
//		for (j = 0; j < COURSE; j++)
//		{
//			sum += all_grade[i][j];
//		}
//		a_s[i] = sum / COURSE;
//		//printf("%.2f\t", a_s[i]);
//		sum = 0;
//	}
//}
//
////calculate courses average grade
//void average_course(void)
//{
//	float sum = 0;
//	for (i = 0; i < COURSE; i++)
//	{
//		for (j = 0; j < STUDENT; j++)
//		{
//			sum += all_grade[j][i];	//the loop condition changed��
//									//all_grade[j][i],not all_grade[i][j]
//		}
//		a_c[i] = sum / STUDENT;
//		//printf("%.2f\t", a_c[i]);
//		sum = 0;
//	}
//}
//
////find out the largest grade
//void largest_grade(void)
//{	
//	for (i = 0; i < STUDENT; i++)
//		for (j = 0; j < COURSE; j++)
//		{
//			if (l_g[0] < all_grade[i][j])
//			{
//				l_g[0] = all_grade[i][j];
//				l_g[1] = i+1;
//				l_g[2] = j+1;
//			}
//		}
//		//printf("%.2f %.2f %.2f ", l_g[0], l_g[1],  l_g[2] );
//}
// 
////calculate grade variance
//void variance(void)
//{
//	float sum1 = 0, sum2 = 0;
//	g_v = 0;
//	for (i = 0; i < STUDENT; i++)
//	{
//		sum1 += a_s[i] * a_s[i];
//		sum2 += a_s[i];
//	}
//	g_v = sum1 / STUDENT - (sum2/STUDENT)*(sum2 / STUDENT);
//		
//	//printf("%.2f\n", g_v);
//}





///*
//���ģ��ʵ�ֱȽ������ַ�����С�ĺ���strcmp()��
//��֪strcmp������ԭ�����£�
//int   strcmp(char *p1, char *p2) ����p1ָ���ַ���s1��p2ָ���ַ���s2��
//Ҫ��s1 == s2ʱ������ֵΪ0����s1>s2���򷵻�ֵ��һ����������
//��s1<s2���򷵻�ֵ��һ����������
//*/ 
//int strcmp(char *p1, char *p2)
//{
//	int i = 0, f = 0;
//	while (p1[i] != '\0'||p2[i] != '\0')
//	{
//		if (p1[i]>p2[i])
//		{
//			f = 1; break;
//		}
//		if (p1[i]<p2[i])
//		{
//			f = -1; break;
//		}
//		i++;
//	}
//	return(f);
//}
//#include<stdio.h>
////#include<string.h>
//int main()
//{
//	char s1[] = "ABCDEF";
//	char s2[] = "ABCDEF";
//	puts(s1);
//	puts(s2);
//	printf("%d\n", strcmp(s1, s2));
//	char s3[] = "ABCDE";
//	char s4[] = "ABCDEF";
//	puts(s3);
//	puts(s4);
//	printf("%d\n", strcmp(s3, s4));
//	char s5[] = "aBCDEF";
//	char s6[] = "ABCDEF";
//	puts(s5);
//	puts(s6);
//	printf("%d\n", strcmp(s5, s6));
//	system("pause");
//}

////��дһ���������·ݺţ�������µ�Ӣ������
//#include<stdio.h>
//void main()
//{
//	char*month_name[13] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
//	int n=1; 
//
//	while (1)
//	{		
//		printf("Input month:");
//		scanf_s("%d", &n);
//		if (n >= 1 && n <= 12)
//			printf("%s\n", *(month_name + n - 1));
//		else
//			printf("Input wrong.\n");
//	}
//	system("pause");
//}

////��һ��5��5�ľ���������Ԫ�ط������ģ�4���Ƿֱ��4����С��Ԫ��
////��˳��Ϊ�����ң����ϵ������δ�С�����ţ�дһ������ʵ��.
//#include<stdio.h>
//void main()
//{
//	int i, j;
//	int matrix[5][5] = { 35,34,33,32,31,30,29,28,27,26,25,
//		24,23,22,21,20,19,18,17,16,15,14,13,12,11 };
//	void change(int *a);
//
//	printf("Before change :\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}
//
//	change(matrix);
//
//	printf("\nAfter change :\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//}
//
//void change(int *a) 
//{
//	int i, j,t,*max,*min;
//
//	//�����ֵ����Сֵ
//	min = max = a;
//	for(i=0;i<5;i++)
//		for (j = 0; j < 5; j++)
//		{
//			if (*(a+5*i+j) > *max) 			
//				max = a + 5 * i + j;
//			
//			if (*(a + 5 * i + j) < *min)			
//				min = a + 5 * i + j;			
//		}
//	//�任���ֵλ��
//	t=*(a+12);
//	*(a+12) = *max;
//	*max = t;
//	//�任��һ��Сֵλ��
//	t = *a;
//	*a = *min;
//	*min = t;
//
//	//�ҵڶ���Сֵ
//	min = a + 1;
//	for (i = 0; i<5; i++)
//		for (j = 0; j < 5; j++)
//			if (*(a + 5 * i + j) < *min&&(*(a + 5 * i + j)>*a))//����һ���ҵ�����Сֵ��			
//				min = a + 5 * i + j;				
//	//�任�ڶ���Сֵ
//	t = *(a+4);
//	*(a+4) = *min;
//	*min = t;
//
//	////�ҵ�����Сֵ
//	min = a + 1;
//	for (i = 0; i<5; i++)
//		for (j = 0; j < 5; j++)		
//			if (*(a + 5 * i + j) < *min && (*(a + 5 * i + j)>*(a+4)))			
//				min = a + 5 * i + j;				
//	//�任������Сֵ
//	t = *(a + 20);
//	*(a + 20) = *min;
//	*min = t;
//
//	////�ҵ�����Сֵ
//	min = a + 1;
//	for (i = 0; i<5; i++)
//		for (j = 0; j < 5; j++)
//			if (*(a + 5 * i + j) < *min && (*(a + 5 * i + j)>*(a + 20)))			
//				min = a + 5 * i + j;
//	//�任������Сֵ
//	t = *(a + 24);
//	*(a + 24) = *min;
//	*min = t;
//}


////����һ���ַ������������ֺͷ������ַ�
////������������������Ϊһ�����������δ�ŵ���ά������
//#include<stdio.h>
//#include<string.h>
//void main()
//{
//	int i, n = 0, sum = 0, a[20],digit=0;
//	char s[50];// = "A123x456 17960?302tab5876";
//	gets(s);
//	puts(s);
//
//	for (i = 0; s[i]!='\0'; i++)
//	{
//		if ((s[i] >= '0') && (s[i] <= '9'))
//		{
//			sum *= 10;
//			sum += s[i] - 48;
//			digit++;
//
//			//�˴�����������Ҳ���뿼�Ƿ�Χ
//			if (digit>=1&&s[i + 1] > '9' || s[i + 1] < '0' || s[i+1]=='\0')
//			{
//				a[n] = sum;
//				sum = 0;
//				digit = 0;
//
//				if(a[n]>9)//��a[n]Ϊ��������ʱ��������n++������һ�����ָ���
//					n++;
//			}			
//		}
//	}
//	for (i = 0; i <n; i++)		//ֻ���a[0]~a[n-1]�������һ������Ϊ�������֣�
//		printf("%d  ", a[i]);	//����û�н���n++���ʲ����
//		
//	system("pause");
//}


////��дһ���ܶ�����m��n�׾������ת������ĺ���Transpose()��
//#include<stdio.h>
//int *a,t,m, n, i, j,max;
//void Transpose(int *a,int max);
//void Output1(int *a);
//void Output2(int *a);
//void main()
//{
//	printf("ת��һ��m��n�ľ���,������m,n��ֵ��");
//	scanf_s("%d %d",&m,&n);
//	max = m > n ? m : n;//���m,n�нϴ��ֵ
//	//����һ��max*max��С��һά����
//	int *a = (int *)calloc(max*max, sizeof(int));
//
//	//��þ���
//	printf("����%d����:\n",m*n);
//	for (i = 0; i < m; i++)
//		for (j = 0; j < n; j++)		
//			scanf_s("%d", a + i*max + j);
//
//	Output1(a);
//	Transpose(a,max);
//	Output2(a);
//
//	system("pause");
//}
//
//
////��max*max��С�����鰴��max*max�������ʽת��
//void Transpose(int *a ,int max)
//{
//	for (i = 0; i < max; i++)
//		for (j=i+1; j < max; j++)
//		{
//			t = *(a + i*max + j);
//			*(a + i*max + j) = *(a + j*max + i);
//			*(a + j*max + i) = t;
//		}
//}
//void Output1(int *a)
//{
//	printf("����ת��ǰ��\n");
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//			printf("%d\t", *(a + i*max + j));
//		printf("\n");
//	}
//}
//
//void Output2(int *a)
//{
//	printf("����ת�ú�\n");
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//			printf("%d\t", *(a + i*max + j));
//		printf("\n");
//	}
//}
//

////����ж������һ���ַ��Ƿ�Ϊ�����ġ���
//#include<stdio.h>
//#include<string.h>
//void Input(char *s);
//void Judge_plalindrome(char *s);
//void main() 
//{	
//	char s[100];
//	Input(s);	
//	Judge_plalindrome(s);
//	system("pause");
//}
//void Judge_plalindrome(char *s) 
//{
//	
//	int i=0, num=0, tmp=0;
//	num=strlen(s);
//	for (i = 0; i < num / 2; i++)
//	{
//		if (s[i] != s[~- num - i])//do not meet the palindromic structure��print"NO"directly and finish the loop
//		{
//			printf("NO\n");
//			break;
//		}
//		if (s[i] == s[~- num - i])//record number of elements following palindromic structure
//			tmp++;
//	}
//	if (tmp == num / 2)//every 
//		printf("YES\n");
//}
//void Input(char *s) 
//{
//	printf("Enter a tring,juge it's plalindrome or not:\n");
//	gets(s);
//}




////�ṹ�����ļ�
//#include<stdio.h>
//#include<stdlib.h>
//#define SIZE 4
//struct student_type
//{
//	char name[10];
//	int num;
//	int age;
//	char addr[15];
//};
//	
//
//void save(void);
//void read(void);
//void output(void);
//struct student_type stu[SIZE];
//struct student_type stu1[SIZE];
//void main(void)
//{
//	int i;
//	printf("����%d��ѧ�����ݣ����֡�ѧ�š����䡢��ַ\n", SIZE);
//	for (i = 0; i < SIZE; i++)		
//		scanf("%s %d %d %s,", stu[i].name, &stu[i].num, &stu[i].age, stu[i].addr);
//	save();
//	read();
//	output();
//}
//void save(void)
//{
//	FILE *fp;
//	int i,count=1;
//	if ((fp = fopen("in.txt", "wb")) == NULL)
//	{
//		printf("can't open file\n");
//		return;
//	}
//	for (i = 0; i < SIZE; i++)
//		if (fwrite(&stu[i], sizeof(struct student_type), count, fp) != count)
//			printf("file write error\n");
//	fclose(fp);
//	printf("\n�ṹ��stuд���ļ���ɣ�\n");
//}
//void read(void) 
//{
//	FILE *fp;
//	int i, count = 1;
//	if ((fp = fopen("in.txt", "rb")) == NULL)
//	{
//		printf("can't open file\n");
//		return;
//	}
//	for (i = 0; i < SIZE; i++)
//		if (fread(&stu1[i], sizeof(struct student_type), count, fp) != count)
//			printf("file read error\n");
//	fclose(fp);
//	printf("\n�ļ���ȡ��stu1��ɣ�\n");
//
//}
//void output(void)
//{
//	int i;
//	printf("\nstu1���ݣ�\n");
//	for (i = 0; i < SIZE; i++)
//		printf("%s %d %d %s\n", stu1[i].name, stu1[i].num, stu1[i].age, stu1[i].addr);
//	system("pause");
//}


