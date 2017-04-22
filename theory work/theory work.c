



////随机产生一个4 * 5的矩阵。
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
//用rand函数模拟投一对骰子，从数学意义上讲，因每骰子投出的值在1~6，
//所投出的两个值之和为2和12的频率最小，两个值之和为7的频率最大。
//试投5000次，分别计算两个值之和为2、7、12的频率。
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
//	//随机赋值两个值2500次
//	for (i = 0; i < times; i++)
//	{
//		sum = rand() % 6 + 1 + rand() % 6 + 1;
//		if (sum == 2)sum_2++;//记录和为2、7、12的次数
//		if (sum == 7)sum_7++;
//		if (sum == 12)sum_12++;
//	}
//	//直接在输出时计算频率
//	printf("f(2)=%.3f\tf(7)=%.3f\tf(12)=%.3f", sum_2 / times, sum_7 / times, sum_12 / times);
//	system("pause");
//}



///*
//新完全平方数: 在三位整数（100～999）中寻找符合条件的整数并依次从小到大存入数组中，
//条件为它既是一个整数的平方数，又有两位数字相同，例如：144、676等。
//要求输出所有满足该条件的三位数整数，并输出满足该条件的整数的个数。
//*/
//
//#include<stdio.h>
//int main()
//{
//	//100~999,为10~31的平方的范围
//	int i, num, n = 0, n1, n2, n3;
//	printf("在三位整数中的新完全平方数为：\n");
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
//	printf("新完全平方数共%d个\n", n);
//	system("pause");
//}



////从键盘输入一行字符，统计其中有多少单词。假设单词之间以空格分开。
//#include<stdio.h>
//#define SIZE 40
//int main()
//{
//	int letter=0,i = 0 ;
//	char a[SIZE];
//	printf("请输入一行字符(单词间以空格间隔)\n");
//	gets(a);
//
//	while (a[i] != '\0')
//	{	
//		//以“字母+空格”的形式判断为一个单词结束
//		if (((a[i] >= 'A'&&a[i] <= 'Z') || (a[i] >= 'a'&&a[i] <= 'z')) && (a[i + 1] == ' '))
//		letter++;
//		i++;
//	}
//	printf("这行字符有%d个单词\n", letter+1);//最后一个单词后没有空格，故letter+1
//	system("pause");
//}

////从键盘输入一行字符，统计其中有多少单词。假设单词之间以空格分开。
//#include<stdio.h>
//#define SIZE 40
//int main()
//{
//	int state = 0, input = 0, letter = 0, i = 0, num = 0;
//	//char c, a[SIZE];
//	char a[SIZE] = "   This is  a   book.";
//	//input			000111101100100011110
//	//state			000111101100100011110
//	printf("请输入一行字符(单词间以空格间隔)\n");
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
//	printf("这行字符有%d个单词\n", letter);
//	system("pause");
//}

////删除字符串s中所出现的与变量c相同的字符。
//#include<stdio.h>
//#define SIZE 40
//int main()
//{
//	int j,i = 0;
//	char c,a[SIZE];
//
//	printf("请输入一个字符串:\n");
//	gets(a);
//	printf("请输入字符串中想要删去的字符\n");
//	c=getchar();
//	printf("删去给定字符前的字符串：\n");
//	puts(a);
//
//	while (a[i] != '\0')
//	{
//		while (a[i] == c)//此处因用while，而不是if，否则连续的两个被选中字符只会删去一个
//		{
//			for (j=i; a[j] != '\0'; j++)
//			{
//				a[j] = a[j + 1];//元素覆盖
//			}
//		}
//		i++;
//	}
//	printf("删去给定字符后的字符串：\n");
//	puts(a);
//
//	system("pause");
//}


//设计一个函数MinCommonMultiple()，计算两个正整数的最小公倍数。
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


////求最大最小，平均值
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
////求数组元素的最大值、最小值和平均值
//void selectmaxandmin(int a[SIZE])
//{
//	int i = 0, max, min;
//	float sum = 0;
//	max = min = a[0];
//	while(a[i]!='\0')
//		{
//		//由于代码中的计算方式进行了除法计算，
//		//当处理的数据有浮点数时以下计算方式会出现误差。
//		//为了避免麻烦，尽量使用这种方式:
//		//		if (max < a[i])max = a[i];
//		//		if (min > a[i])min = a[i];
//			max = (max + a[i] + abs(max - a[i]))/2;
//			min = (min + a[i] - abs(min - a[i]))/2;
//			sum += a[i];
//			i++;
//		}
//	printf("max=%d\tmin=%d\taverages=%f\n", max, min,sum/i);
//}


////利用递归求一个整数的各位数字
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





////	输入10个学生5门课的成绩，分别用函数实现下列功能
////	1.计算每个学生的平均分
////	2.计算每门课的平均分
////	3.找出所有50个分数中最高的分数所对应的的学生和课程
////	4.计算平均分方差
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
//			sum += all_grade[j][i];	//the loop condition changed，
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
//编程模拟实现比较两个字符串大小的函数strcmp()。
//已知strcmp函数的原型如下：
//int   strcmp(char *p1, char *p2) ，设p1指向字符串s1，p2指向字符串s2，
//要求当s1 == s2时，返回值为0；若s1>s2，则返回值是一个正整数；
//若s1<s2，则返回值是一个负整数。
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

////编写一程序，输入月份号，输出该月的英文月名
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

////将一个5×5的矩阵中最大的元素放在中心，4个角分别放4个最小的元素
////（顺序为从左到右，从上到下依次从小到大存放）写一个函数实现.
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
//	//找最大值、最小值
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
//	//变换最大值位置
//	t=*(a+12);
//	*(a+12) = *max;
//	*max = t;
//	//变换第一最小值位置
//	t = *a;
//	*a = *min;
//	*min = t;
//
//	//找第二最小值
//	min = a + 1;
//	for (i = 0; i<5; i++)
//		for (j = 0; j < 5; j++)
//			if (*(a + 5 * i + j) < *min&&(*(a + 5 * i + j)>*a))//比上一个找到的最小值大			
//				min = a + 5 * i + j;				
//	//变换第二最小值
//	t = *(a+4);
//	*(a+4) = *min;
//	*min = t;
//
//	////找第三最小值
//	min = a + 1;
//	for (i = 0; i<5; i++)
//		for (j = 0; j < 5; j++)		
//			if (*(a + 5 * i + j) < *min && (*(a + 5 * i + j)>*(a+4)))			
//				min = a + 5 * i + j;				
//	//变换第三最小值
//	t = *(a + 20);
//	*(a + 20) = *min;
//	*min = t;
//
//	////找第四最小值
//	min = a + 1;
//	for (i = 0; i<5; i++)
//		for (j = 0; j < 5; j++)
//			if (*(a + 5 * i + j) < *min && (*(a + 5 * i + j)>*(a + 20)))			
//				min = a + 5 * i + j;
//	//变换第四最小值
//	t = *(a + 24);
//	*(a + 24) = *min;
//	*min = t;
//}


////输入一个字符串，内有数字和非数字字符
////将其中连续的数字作为一个整数，依次存放到二维数组中
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
//			//此处将单个数字也纳入考虑范围
//			if (digit>=1&&s[i + 1] > '9' || s[i + 1] < '0' || s[i+1]=='\0')
//			{
//				a[n] = sum;
//				sum = 0;
//				digit = 0;
//
//				if(a[n]>9)//当a[n]为单个数字时，不进行n++，由下一个数字覆盖
//					n++;
//			}			
//		}
//	}
//	for (i = 0; i <n; i++)		//只输出a[0]~a[n-1]，当最后一个数字为单个数字，
//		printf("%d  ", a[i]);	//由于没有进行n++，故不输出
//		
//	system("pause");
//}


////编写一个能对任意m×n阶矩阵进行转置运算的函数Transpose()。
//#include<stdio.h>
//int *a,t,m, n, i, j,max;
//void Transpose(int *a,int max);
//void Output1(int *a);
//void Output2(int *a);
//void main()
//{
//	printf("转置一个m×n的矩阵,请输入m,n的值：");
//	scanf_s("%d %d",&m,&n);
//	max = m > n ? m : n;//获得m,n中较大的值
//	//创建一个max*max大小的一维数组
//	int *a = (int *)calloc(max*max, sizeof(int));
//
//	//获得矩阵
//	printf("输入%d个数:\n",m*n);
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
////对max*max大小的数组按照max*max矩阵的形式转置
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
//	printf("矩阵转置前：\n");
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
//	printf("矩阵转置后：\n");
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//			printf("%d\t", *(a + i*max + j));
//		printf("\n");
//	}
//}
//

////编程判断输入的一串字符是否为“回文”。
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
//		if (s[i] != s[~- num - i])//do not meet the palindromic structure，print"NO"directly and finish the loop
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




////结构体与文件
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
//	printf("输入%d组学生数据：名字、学号、年龄、地址\n", SIZE);
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
//	printf("\n结构体stu写入文件完成！\n");
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
//	printf("\n文件读取入stu1完成！\n");
//
//}
//void output(void)
//{
//	int i;
//	printf("\nstu1内容：\n");
//	for (i = 0; i < SIZE; i++)
//		printf("%s %d %d %s\n", stu1[i].name, stu1[i].num, stu1[i].age, stu1[i].addr);
//	system("pause");
//}


