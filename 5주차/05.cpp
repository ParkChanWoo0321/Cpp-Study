//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//#include <cmath>
//#include <cstdlib>
//#include <windows.h>
//#include <conio.h>
//#define ROW 3
//#define COL 4
//#define SIZE 5
//#define max 10
//#define PERSONS 30
//#define STARS 6
//#define N 6
//using namespace std;
//int main(void)
//{
//	// ���߹迭 ������ �̿��Ͽ� ���
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	cout << a << "\*" << a[0] << "\*" << &a[0][0] << endl;
//	cout << a + 1 << "\*" << a[1] << "\*" << &a[1][0] << endl;
//	cout << a + 2 << "\*" << a[2] << "\*" << &a[2][0] << endl;
//
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	cout << *a << "\*" << a[0] << "\*" << &a[0][0] << endl;
//	cout << *(a + 1) << "\*" << a[1] << "\*" << &a[1][0] << endl;
//	cout << *(a + 2) << "\*" << a[2] << "\*" << &a[2][0] << endl;
//
//	// for �� �̿�
//	int i, j;
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << *(a + i) + j << "\*" << &a[i][j] << "\t";
//			cout << *(*(a + i) + j) << "\*" << a[i][j] << endl;
//		}
//	}
//
//	int i, j;
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << (a + i) + j << "\*" << &a[i][j] << "\t";
//			cout << *(*(a + i) + j) << "\*" << a[i][j] << endl;
//		}
//	}
//
//	int i, j;
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int (*p)[3];
//	p = a;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << *(p + i) + j << "\*" << &a[i][j] << "\t";
//			cout << *(*(p + i) + j) << "\*" << a[i][j] << endl;
//		}
//	}
//
//	// �� ����� �� ���
//	int a[3][3] = { {10,20,30},{20,40,60},{10,30,50} };
//	int b[3][3] = { {1,2,3},{5,6,7},{9,10,11} };
//	int c[3][3];
//	int r, i;
//	for (r = 0; r < 3; r++)
//	{
//		for (i = 0; i < 3; i++)
//		{
//			c[r][i] = a[r][i] + b[r][i];
//		}
//	}
//	cout << "�� ����� ���� ����ϱ�";
//	cout << "\n==========================================\n";
//	for (r = 0; r < 3; r++)
//	{
//		for (i = 0; i < 3; i++)
//		{
//			cout << " " << c[r][i];
//		}
//		cout << endl;
//	}
//
//	// �� ����� ��
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int b[3][3] = { 9,8,7,6,5,4,3,2,1 };
//	int c[3][3];
//	int i, j, k;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			c[i][j] = 0;
//			for (k = 0; k < 3; k++)
//			{
//				c[i][j] += a[i][j] * b[k][j];
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		cout << a[i][0] << " " << a[i][1] << " " << a[i][2];
//		if (i == 1)
//			cout << "  *  ";
//		else
//			cout << "     ";
//		cout << b[i][0] << " " << b[i][1] << " " << b[i][2];
//		if (i == 1)
//			cout << "  *  ";
//		else
//			cout << "     ";
//		cout << c[i][0] << " " << c[i][1] << " " << c[i][2] << endl;
//	}
//
//	// ���� ���� �� ���ϱ�
//	int a[5][5] = { {35,28,67,73},{25,32,12,69},{97,56,14,23},{45,97,48,15} };
//	int i, j;
//	cout << "���� ǥ�� ���ο� ������, �׸��� ��� ���� ���մϴ�.\n";
//	cout << "\n\n--------------------------------------\n";
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			cout << "|  " << a[i][j] << "  ";
//		}
//		cout << "|";
//		cout << endl;
//	}
//	cout << "�� ǥ�� ���ο� ������, �׸��� ��� ����\n";
//	cout << "���� ��� ���� �������� ���մϴ�.\n";
//	cout << "\n\n--------------------------------------\n";
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			a[i][4] += a[i][j];
//			a[4][j] += a[i][j];
//			a[4][4] += a[i][j];
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			cout << "|  " << a[i][j] << "  ";
//		}
//		cout << "|";
//		cout << endl;
//	}
//
//	// ��ġ ��� ���ϱ�
//	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int i, j;
//	cout << "�� ��� ���\n";
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << "\t" << a[i][j];
//		}
//		cout << endl;
//	}
//	cout << "��ġ ��� ���\n";
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << "\t" << a[j][i];
//		}
//		cout << endl;
//	}
//
//	// ������ �̿��Ͽ� �� ���
//	int a = 5;
//	int* p;
//	int** pp;
//	p = &a;
//	pp = &p;
//	cout << " p : " << p << "\t &a : " << &a << endl;
//	cout << " *p : " << *p << "\t \t \t  a : " << a << endl;
//	cout << " pp : " << pp << "\t &p : " << &p << endl;
//	cout << " *pp : " << *pp << "\t p : " << p << endl;
//	cout << " **pp : " << **pp << "\t \t *p : " << *p << endl;
//
//	// ������ �̿��Ͽ� �迭 �� ���
//	int a = 10, b = 20, c = 30;
//	int* p[3] = { &a,&b,&c };
//	cout << p[0] << "\t" << &a << "\n" << p[1] << "\t" << &b << "\n" << p[2] << "\t" << &c << endl;
//
//	int a = 10, b = 20, c = 30;
//	int* p[3] = { &a,&b,&c };
//	cout << *p[0] << "\t" << *&a << "\n" << *p[1] << "\t" << *&b << "\n" << *p[2] << "\t" << *&c << endl;
//
//	// double ������ �迭
//	int i;
//	double data[10] = { 0,0 };
//	for (i = 2; i <= 11; i++)
//	{
//		data[i - 2] = 1.0 / (i * (i + 1));
//	}
//	for (i = 0; i <= 9; i++)
//	{
//		cout << "data[" << i << "] = " << data[i] << endl;
//	}
//
//	// �Է¹��� ���� �ִ� �ּڰ� ���ϱ�
//	int i, max1, min, a[10];
//	cout << "10���� ���� �Է��ϼ���. : ";
//	for (i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//	max1 = a[0];
//	min = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max1 <= a[i])
//			max1 = a[i];
//		if (min >= a[i])
//			min = a[i];
//	}
//	cout << "10���� �� �� �ִ밪�� " << max1 << "�̴�.\n";
//	cout << "10���� �� �� �ּҰ��� " << min << "�̴�.\n";
//
//	// �� �����ϱ�
//	int i, j, temp;
//	int a[] = { 45,34,76,39,97,65,71,54,23,11 };
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (a[i] > a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << a[i] << "   ";
//	}
//	cout << endl;
//
//	// ������ �빮�ڸ� �����Ͽ� �ᱣ�� ���
//	int i, rnd;
//	char alpha[26] = { 0 };
//	srand(time(NULL));
//	cout << "������ �빮��\n";
//	for (i = 1; i < 100; i++)
//	{
//		rnd = rand() % 26;
//		cout << (char)(rnd + 65);
//		if (i % 20 == 0)
//			cout << endl;
//		alpha[rnd] += 1;
//	}
//	cout << "\n���ڿ� �󵵼� \n";
//	for (i = 0; i < 26; i++)
//	{
//		cout << i + 65 << " : " << alpha[i];
//		if ((i + 1) % 3 == 0)
//			cout << endl;
//	}
//
//	// ���� �Է¹޾� �迭�� ������ �� ��� ���, �ִ� �ּڰ� ã��
//	int temp[31];
//	int i, min, max1, avg;
//	int days, sum_temp;
//	cout << "�� ���� ������ ?  ";
//	cin >> days;
//	for (i = 0; i < days; i++)
//	{
//		cout << i + 1 << " �� �� ����� �Է��Ͻÿ� : ";
//		cin >> temp[i];
//	}
//	sum_temp = 0;
//	for (i = 0; i < days; i++)
//	{
//		sum_temp += temp[i];
//	}
//	avg = sum_temp / days;
//	cout << "��� ��� : " << avg << endl;
//	min = 200;
//	max1 = 0;
//	for (i = 0; i < days; i++)
//	{
//		if (min > temp[i])
//			min = temp[i];
//		if (max1 < temp[i])
//			max1 = temp[i];
//	}
//	cout << "���� ��� : " << min << endl;
//	cout << "�ִ� ��� : " << max1 << endl;
//
//	// A ���� �����Ͽ� Z ���� ���
//	int i;
//	char c[26] = { 'A' };
//	for (i = 1; i <= 25; i++)
//	{
//		c[i] = c[0] + i;
//	}
//	for (i = 0; i < 26; i++)
//		cout << "c[" << i << "] = " << c[i] << endl;
//	cout << endl;
//
//	// ���,ǥ������ ���ϱ�
//	double a[max1];
//	double sum, sumsq, mean, stdev;
//	int i;
//	sum = sumsq = 0;
//	for (i = 0; i < max1; i++)
//	{
//		cin >> a[i];
//		sum = sum + a[i];
//		sumsq = sumsq + a[i] * a[i];
//	}
//	mean = sum / max1;
//	stdev = sqrt(sumsq / max1 - mean * mean);
//	cout << "��� = " << mean << endl;
//	cout << "ǥ������ = " << stdev << endl;
//
//	// ������ �Է¹޾� ����� ����ϴ� ���α׷�
//	int quiz[SIZE];
//	int i, count, sum;
//	double avg;
//	cout << SIZE << "���� ������ ������� �Է��Ͻÿ�.\n";
//	for (i = 0; i < SIZE; i++)
//	{
//		cout << i + 1 << "���� ���� ������? ";
//		cin >> quiz[i];
//	}
//	sum = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		sum = sum + quiz[i];
//	}
//	avg = (double)sum / SIZE;
//	count = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		if (quiz[i] < avg)
//			count++;
//	}
//	cout << "==============================\n";
//	cout << "  ��ȣ  ����  ��հ��� ����  \n";
//	cout << "==============================\n";
//	for (i = 0; i < SIZE; i++)
//	{
//		cout << "  " << i + 1 << "  " << quiz[i] << "  " << quiz[i] - avg << endl;
//	}
//	cout << "==============================\n";
//	cout << "��� : " << avg << "��\n";
//	cout << "==============================\n";
//	cout << "��չ̸� : " << count << "��\n";
//
//	// �� �� �� �� �Է¹޾� ���° �� ���� ���ϴ� ���α׷�
//	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int year, mon, day;
//	int i, tot = 0, totday, yun;
//	cout << "�� �� ���� �Է��Ͻÿ�. : ";
//	cin >> year >> mon >> day;
//	for (i = 1; i < mon; i++)
//	{
//		tot += month[i - 1];
//	}
//	totday = tot + day;
//	yun = (year % 4 == 0) && (year % 100 == 0) || (year % 400 == 0);
//	if (yun && mon > 2)
//		totday++;
//	cout << "������ " << totday << "��° ���Դϴ�.\n";
//
//	// ����� ��ġ�� ���ϴ� ���α׷�
//	int i, j;
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int b[3][3];
//	cout << "�� ��� ���\n";
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << "   " << a[i][j];
//		}
//		cout << endl;
//	}
//	for (j = 0; j < 3; j++)
//	{
//		for (i = 0; i < 3; i++)
//		{
//			b[j][i] = a[i][j];
//		}
//	}
//	cout << "��ġ ��� ���\n";
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << "   " << b[i][j];
//		}
//		cout << endl;
//	}
//
//	// ����� �� ���ϱ�
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int b[3][3] = { 9,8,7,6,5,4,3,2,1 };
//	int c[3][3];
//	int i, j, k;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			c[i][j] = 0;
//			for (k = 0; k < 3; k++)
//			{
//				c[i][j] += a[i][k] * b[k][j];
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		cout << "   " << a[i][0] << "   " << a[i][1] << "   " << a[i][2];
//		if (i == 1)
//			cout << "  *  ";
//		else
//			cout << "     ";
//		cout << "   " << b[i][0] << "   " << b[i][1] << "   " << b[i][2];
//		if (i == 1)
//			cout << "  =  ";
//		else
//			cout << "     ";
//		cout << "   " << c[i][0] << "   " << c[i][1] << "   " << c[i][2] << endl;
//	}
//
//	// ��� ���� �� �� ���ϱ�
//	int a[] = { 5,2,3,5,3,2,4,8,9,9,7 };
//	int sum = 0;
//	int i;
//	for (i = 0; i < 11; i++)
//	{
//		sum += a[i];
//	}
//	cout << "sum = " << sum << endl;
//
//	// �迭�ϱ�
//	int a[] = { 76,65,11,34,97,71,54,45,39,23 };
//	int i, j, temp;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (a[i] < a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << "   " << a[i];
//	}
//
//	// �Է¹��� ������ ���� �ٸ��� ����ϱ�
//	int a[5];
//	int i;
//	double sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		cin >> a[i];
//	}
//	for (i = 0; i < 5; i++)
//	{
//		switch (i + 1)
//		{
//		case 1:
//		case 2: sum += (a[i] * 0.3); break;
//		case 3:
//		case 4: sum += (a[i] * 0.1); break;
//		case 5: sum += (a[i] * 0.2); break;
//		}
//	}
//	cout << "����ġ�� �ο��� ������ " << sum << " �� �Դϴ�.\n";
//
//	// �� , �� ��� ���췮 ���ϱ�
//	int i;
//	double inches[] = { 50.6,41.9,28.6,30.3,37.8 };
//	double month[] = { 7.8,7.2,3.8,2.8,1.9,0.6,1.2,0.3,0.9,1.7,3.6,6.1 };
//	double sum = 0;
//	cout << "====================\n";
//	cout << "��\t���췮<inches>\n";
//	cout << "====================\n";
//	for (i = 0; i < 5; i++)
//	{
//		cout << 1995 + i << "��\t" << inches[i] << endl;
//		sum += inches[i];
//	}
//	cout << "\n\n" << i << "�� ��� ���췮�� " << sum / 5.0 << " inches.\n\n";
//	cout << "\t\t\t�� ��� ���췮\n";
//	cout << "=======================================================\n";
//	for (i = 0; i < 12; i++)
//	{
//		cout << i + 1 << "�� ";
//	}
//	cout << endl;
//	for (i = 0; i < 12; i++)
//	{
//		cout << month[i] << "  ";
//	}
//	cout << endl;
//
//	// �Է¹��� ���� �ִ�,�ּڰ� �׸��� �� ������ ��ġ ���ϱ�
//	int a[1000];
//	int i = 0, j, maxi = 0, idxm = 0, idxn = 0, mini = 0;
//	while (1)
//	{
//		cout << "������ �ڷᰪ�� �Է����ּ���. : ";
//		cin >> a[i];
//		if (a[i] == -1)
//			break;
//		i++;
//	}
//	maxi = a[0];
//	mini = a[0];
//	for (j = 0; j < i; j++)
//	{
//		if (maxi < a[j])
//		{
//			maxi = a[j];
//			idxm = j;
//		}
//		if (mini > a[j])
//		{
//			mini = a[j];
//			idxn = j;
//		}
//	}
//	cout << "�ִ밪�� " << maxi << "�̸� ��ġ�� " << idxm << "��° ���Դϴ�.\n";
//	cout << "�ּҰ��� " << mini << "�̸� ��ġ�� " << idxn << "��° ���Դϴ�.\n";
//
//	// �Է¹��� �� ��ġ�� �Բ� ���
//	int freq[101] = {};
//	int i, grade;
//	for (i = 0; i < 15; i++)
//	{
//		cin >> grade;
//		freq[grade]++;
//	}
//	for (i = 1; i < 101; i++)
//	{
//		cout << i << "\t" << freq[i] << endl;
//	}
//
//	// ����� �ܰ� ���� ���
//	int a[8][8] = {};
//	int i, j, sum = 0;
//	srand(time(NULL));
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			a[i][j] = rand() % 151;
//		}
//	}
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			cout << a[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	cout << "\n�ܰ� ��Ҹ� ����� �迭\n";
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			if (i == 0 || i == 7 || j == 0 || j == 7)
//			{
//				cout << a[i][j] << "\t";
//				sum += a[i][j];
//			}
//			else
//			{
//				cout << "\t";
//			}
//		}
//		cout << endl;
//	}
//	cout << "2���� �迭 �ܰ� ����� ���� " << sum << " �Դϴ�.\n";
//
//	// ������ �� �����Ͽ� ����ϱ�
//	int a[60] = {};
//	int b[10] = {};
//	int i, j, sum = 0;
//	int count = 0;
//	int maxnum1 = 0;
//	int maxnumcount1 = 0;
//	srand(time(NULL));
//	for (i = 0; i < 60; i++)
//	{
//		a[i] = rand() % 10;
//		sum += a[i];
//	}
//	cout << "����� " << sum / 60.0 << " �̴�.\n";
//	cout << "\n\n********\n";
//	cout << "  ����\n";
//	cout << "********\n";
//	cout << "--------------------------------------------------\n";
//	cout << "\t��\tȽ��\t������׷�\n";
//	cout << "\n\t\t\t 1 1 2 2";
//	cout << "\n\t\t\t1 5 0 5 0 5\n";
//	cout << "--------------------------------------------------\n";
//	for (i = 0; i < 60; i++)
//	{
//		b[a[i]]++;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << "\t" << i << "\t" << b[i] << "\t";
//		for (j = 0; j < b[i]; j++)
//			cout << "*";
//		cout << endl;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (maxnum1 < b[i])
//		{
//			maxnumcount1 = b[i];
//			maxnum1 = i;
//		}
//	}
//	cout << "--------------------------------------------------\n";
//	cout << "���������� ���� �� Ƚ���� ��Ÿ����.\n";
//	cout << " �м� ���, ���� ���� �󵵼��� �� " << maxnum1 << " ��<��> " << maxnumcount1 << " �� ��Ÿ����.\n";
//
//	// ��� ������ ������ ���ϱ�
//	int a[5][5] = { {35,28,67,73},{25,32,12,69},{97,56,14,23},{45,97,48,15} };
//	int i, j;
//	cout << "���� ǥ�� ���ο� ������, �׸��� ��� ���� ���մϴ�.\n";
//	cout << "\n\n--------------------------------------\n";
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			cout << "|  " << a[i][j] << "  ";
//		}
//		cout << "|";
//		cout << endl;
//	}
//	cout << "�� ǥ�� ���ο� ������, �׸��� ��� ����\n";
//	cout << "���� ��� ���� �������� ���մϴ�.\n";
//	cout << "\n\n--------------------------------------\n";
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			a[i][4] += a[i][j];
//			a[4][j] += a[i][j];
//			a[4][4] += a[i][j];
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			cout << "|  " << a[i][j] << "  ";
//		}
//		cout << "|";
//		cout << endl;
//	}
//
//	// ROW,COL �� �����Ͽ� ����ϱ�
//	int a[ROW][COL] = { {90,85,95,100},{75,95,80,90},{90,80,70,60} };
//	int r, c;
//	cout << "\n ���� for������ �迭�� ���";
//	cout << "\n----------------------------\n";
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << a[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//	// SIZE �� �����Ͽ� ����ϱ�
//	int freq[SIZE] = { 0 };
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		++freq[rand() % 6];
//	}
//	cout << "===============\n";
//	cout << "��     ��\n";
//	cout << "===============\n";
//	for (i = 0; i < SIZE; i++)
//	{
//		cout << i << "      " << freq[i] << endl;
//	}
//
//	// PERSONS, STARS �� �����Ͽ� ���
//	int survey[PERSONS] = { 1,3,2,5,3,2,1,2,3,4,5,2,3,3,2,1,4,5,2,3,5,1,3,4,2,3,1,4,2,3 };
//	int vote[STARS] = { 0 };
//	int i;
//	for (i = 0; i < PERSONS; i++)
//	{
//		vote[survey[i]]++;
//	}
//	cout << "������ ��ǥ�� \n";
//	cout << "====================\n";
//	for (i = 1; i < STARS; i++)
//	{
//		cout << "  " << i << "��  " << vote[i] << "ǥ\n";
//	}
//}
//
//// ��� ���� �ϴ� �Լ� ����� ����ϱ�
//#include <iostream>
//using namespace std;
//void prn(int* p)
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		cout << *(p + i) << "\t";
//	}
//	cout << endl;
//}
//void sort_d(int* p)
//{
//	int i, j, t;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//			if (*(p + i) > *(p + j))
//			{
//				t = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = t;
//			}
//		}
//	}
//}
//void prn1(int (*p)[3])
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << *(p + i) << "\t";
//		}
//		cout << endl;
//	}
//}
//void trans(int (*p)[3], int (*q)[3])
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			*(*(q + j) + i) = *(*(p + i) + j);
//		}
//	}
//}
//int main(void)
//{
//	int a[5] = { 3,5,2,4,1 };
//	cout << "���� ��\n";
//	prn(a);
//	sort_d(a);
//	cout << "���� ��\n";
//	prn(a);
//
//	int a[3][3] = {};
//	int b[3][3];
//	cout << "�� ���\n";
//	prn1(a);
//	trans(a, b);
//	prn1(a);
//}
//
//// ����� ���� ���ϴ� ���α׷�
//#include <iostream>
//using namespace std;
//void print(int c[][3])
//{
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << "|  " << c[i][j] << "  ";
//		}
//		cout << " |";
//		cout << endl;
//	}
//}
//void sum(int (*p)[3], int (*q)[3], int (*r)[3])
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			*(*(r + i) + j) = *(*(p + i) + j) + *(*(q + i) + j);
//		}
//	}
//}
//int main(void)
//{
//	int a[3][3] = { 25,13,32,10,54,53,54,19,46 };
//	int b[3][3] = { 14,11,34,21,23,67,83,33,56 };
//	int c[3][3];
//	sum(a, b, c);
//	print(a, b, c);
//}
//
//// �� �迭�� ���� �پ��� ������� ����Ͽ� ���
//#include <iostream>
//using namespace std;
//void scf(int(*p), int(*q), int(*r), int(*s))
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		cout << "�й� ���� ���� ���� ������ �Է��ϼ���. : ";
//		cin >> *(p + i) >> *(q + i) >> *(r + i) >> *(s + i);
//	}
//}
//void hap(int(*p), int(*q), int(*r), int(*s), double(*t))
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		*(s + i) = *(p + i) + *(q + i) + *(r + i);
//		*(t + i) = *(s + i) / 3;
//	}
//}
//void prnt(int(*p), int(*q), int(*r), int(*s), int(*t), double(*u))
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		cout << *(p + i) << "  " << *(q + i) << "  " << *(r + i) << "  " << *(s + i) << "  " << *(t + i) << "  " << *(u + i) << endl;
//	}
//}
//int main(void)
//{
//	int i, no[5], kor[5], eng[5], mat[5], tol[5];
//	double avg[5];
//	scf(no, kor, eng, mat);
//	hap(kor, eng, mat, tol, avg);
//	cout << "�й�  ����  ����  ����  ����  ���\n";
//	prnt(no, kor, eng, mat, tol, avg);
//}
//
//
//// �迭�� �հ� ��� ��� �Լ�
//#include <iostream>
//using namespace std;
//double average1(int n, int ary[])
//{
//	double sum = 0;
//	int i = 1;
//	for (i = 0; i < n; i++)
//	{
//		sum += ary[i];
//	}
//	return sum / n;
//}
//int sum1(int n, int ary[])
//{
//	int total = 0, i;
//	for (i = 0; i < n; i++)
//	{
//		total += ary[i];
//	}
//	return total;
//}
//int main(void)
//{
//	int data[] = { 14,28,57,94,19,9 };
//	int arrayszie = sizeof(data) / sizeof(data[1]);
//	cout << "�迭�� ���� " << sum1(arrayszie, data) << "�̸� ����� " << average1(arrayszie, data) << " �Դϴ�.\n";
//	average1(arrayszie, data);
//}
//
//// �迭�� ���޾� �Է¹ޱ�
//#include <iostream>
//using namespace std;
//void array_equal(int a[], int b[], int size)
//{
//	int n;
//	for (n = 0; n < size; n++)
//	{
//		b[n] < a[n];
//	}
//}
//int main(void)
//{
//	int a[100], b[100], size, n;
//	cout << "2���� �����迭�� �Է����ּ���(�Է��� ��ġ���� -1 �Է�)\n";
//	for (n = 0; 1; n++)
//	{
//		cout << "ù��° �迭�� " << n + 1 << "��° �� : ";
//		cin >> a[n];
//		if (a[n] == -1)
//			break;
//	}
//	size = n;
//	array_equal(a, b, n);
//	cout << "�ι�° �迭 : ";
//	for (n = 0; n < size; n++)
//	{
//		cout << b[n] << " ";
//	}
//	cout << endl;
//}
//
//// ������ �����Ͽ� ��� ���
//#include <iostream>
//using namespace std;
//double mean_f(int a[])
//{
//	double sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		sum += a[i];
//	}
//	return sum / 10.0;
//}
//int main(void)
//{
//	int a[10] = {};
//	int i;
//	srand(time(NULL));
//	cout << "\n�ʱ�ȭ �� �迭 ���\n";
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = rand() % 100;
//		cout << "\t" << a[i];
//	}
//	cout << "\na[]�� ���� �ּ� : " << &a[1] << endl;
//	cout << "\ndim[]�� ���� �ּ� : " << &a[1] << endl;
//	cout << "\na[]�� ���� �ּ� : " << &a[1] << endl;
//	cout << "\n��� = " << mean_f(a);
//}
//
//// ���� �Է¹޾� ���� ���� �Էµ� ���� �� ���� ���� ���ϱ�
//#include <iostream>
//using namespace std;
//void frqtest(int x[])
//{
//	int i;
//	int mostnum = 0;
//	int mostnumcount = 0;
//	for (i = 0; i < 10; ++i)
//	{
//		if (x[i] > mostnumcount)
//		{
//			mostnumcount = x[i];
//			mostnum = i;
//		}
//	}
//	cout << "\n0 ~ 9 �� ���� ���� ���� ���� " << mostnum << " �̰�, " << mostnumcount << " �� ���Խ��ϴ�.\n";
//}
//int main(void)
//{
//	int a[20];
//	int x[10] = { 0 };
//	int i;
//	for (i = 0; i < 20; i++)
//	{
//		cin >> a[i];
//		x[a[i]]++;
//	}
//	frqtest(x);
//}
//
//// �迭 �����ϴ� �Լ� ���� ���
//#include <iostream>
//using namespace std;
//int bubble_sort(int data[])
//{
//	int i, j, temp;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (data[i] > data[j])
//			{
//				temp = data[i];
//				data[i] = data[j];
//				data[j] = temp;
//			}
//		}
//	}
//	return data[10];
//}
//int main(void)
//{
//	int data[10] = { 23,37,12,88,72,96,33,51,63,90 };
//	int i;
//	bubble_sort(data);
//	for (i = 0; i < 10; i++)
//	{
//		cout << "\t" << data[i];
//	}
//	cout << endl;
//}
//
//// �迭 ���� �ϱ�
//#include <iostream>
//using namespace std;
//void print_list(int list[])
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		cout << list[i] << "  ";
//	}
//	cout << endl;
//}
//void selection_sort(int list[])
//{
//	int i, j, temp;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (list[i] > list[j])
//			{
//				temp = list[i];
//				list[i] = list[j];
//				list[j] = temp;
//			}
//		}
//	}
//}
//int main(void)
//{
//	int list[10] = { 3,2,9,7,1,4,8,0,6,5 };
//	int i;
//	cout << "������ �迭\n";
//	print_list(list);
//	cout << "���ĵ� �迭\n";
//	selection_sort(list);
//	for (i = 0; i < 10; i++)
//	{
//		cout << list[i] << "  ";
//	}
//	cout << endl;
//}
//
//// �迭���� �� ã��
//#include <iostream>
//using namespace std;
//int seq_search(int list[], int n, int key)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		if (n == list[i])
//		{
//			key = i;
//		}
//	}
//	return key + 1;
//}
//int main(void)
//{
//	int list[10] = { 1,5,6,8,2,7,3,9,4,0 };
//	int n, key = 0;
//	cout << "Ž���� ���� �Է��Ͻÿ�:";
//	cin >> n;
//	cout << "Ž�� ��� = " << seq_search(list, n, key) << endl;
//}
//	
//// �� ����� �հ� �� ���ϴ� �Լ�
//#include <iostream>
//using namespace std;
//void hap(int a[][3], int b[][3], int c[][3])
//{
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			c[i][j] = a[i][j] + b[i][j];
//		}
//	}
//}
//void print(int c[][3])
//{
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << "|  " << c[i][j] << "  ";
//		}
//		cout << " |";
//		cout << endl;
//	}
//}
//void cha(int a[][3], int b[][3], int c[][3])
//{
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			c[i][j] = a[i][j] - b[i][j];
//		}
//	}
//}
//int main(void)
//{
//	int a[4][3] = { {35,28,73},{25,32,69},{97,56,23},{45,97,15} };
//	int b[4][3] = { {125,28,56},{34,32,69},{57,56,59},{45,33,45} };
//	int c[4][3] = {};
//	int i, j, k;
//	cout << "���� �� ����� �հ� ���� ���ϴ� ���α׷��Դϴ�.\n";
//	cout << "---------------------- ------------------------\n";
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << "|  " << a[i][j] << "  ";
//		}
//		cout << "| ";
//		for (k = 0; k < 3; k++)
//		{
//			cout << "|  " << b[i][k] << "  ";
//		}
//		cout << "|";
//		cout << endl;
//	}
//	cout << "---------------------- ------------------------\n";
//	cout << "\n���� �� ��� ���� ��� ���Դϴ�.\n";
//	cout << "-------------------------\n";
//	hap(a, b, c);
//	print(c);
//	cout << "-------------------------\n";
//	cout << "\n���� �� ��� ���� ��� ���Դϴ�.\n";
//	cout << "-------------------------\n";
//	cha(a, b, c);
//	print(c);
//	cout << "-------------------------\n";
//}
//
//// ��ġ��� ���ϴ� �Լ�
//#include <iostream>
//using namespace std;
//void transpose(int a[][4], int b[][3])
//{
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			b[i][j] = a[j][i];
//		}
//	}
//}
//int main(void)
//{
//	int a[3][4] = { {2,1,5,3},{2,1,6,4},{4,2,5,5} };
//	int b[4][3];
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			cout << a[i][j]<<"\t";
//		}
//		cout << endl;
//	}
//	transpose(a, b);
//	cout << "����� ��ġ����� ������ �����ϴ�.\n";
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << b[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}
//
//// ��� �� ���ϱ�
//#include <iostream>
//using namespace std;
//void mult(int a[][3], int b[][2], int c[][2])
//{
//	int i, j, k;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			c[i][j] = 0;
//			for (k = 0; k < 3; k++)
//			{
//				c[i][j] += a[i][k] * b[k][j];
//			}
//		}
//	}
//}
//int main(void)
//{
//	int a[2][3] = { {1,2,3},{4,5,6} };
//	int b[3][2] = { {1,2},{3,4},{5,6} };
//	int c[2][2];
//	int i, j;
//	cout << "**** ��� A ****\n";
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << "    " << a[i][j];
//		}
//		cout << endl;
//	}
//	cout << "\n**** ��� B ****\n";
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			cout << "    " << b[i][j];
//		}
//		cout << endl;
//	}
//	cout << "\n**** C=A*B ****\n";
//	mult(a, b, c);
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			cout << "    " << c[i][j];
//		}
//		cout << endl;
//	}
//}
//
//// ��� �л� ǥ������ ���ϱ�
//#include <iostream>
//using namespace std;
//double mean_f(int a[])
//{
//	double sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		sum += a[i];
//	}
//	return sum / 10.0;
//}
//double std_dev(int dim[], int s)
//{
//	return sqrt(s);
//}
//int main(void)
//{
//	int a[10] = {};
//	int i,sum=0;
//	srand(time(NULL));
//	cout << "\n�ʱ�ȭ �� �迭 ���\n";
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = rand() % 100;
//		cout << "\t" << a[i];
//	}
//	cout << "\na[]�� ���� �ּ� : " << &a[1]<<endl;
//	cout << "\ndim[]�� ���� �ּ� : " << &a[1] << endl;
//	cout << "\na[]�� ���� �ּ� : " << &a[1] << endl;
//	for (i = 0; i < 10; i++)
//	{
//		sum += pow((a[i] - mean_f(a)), 2);
//	}
//	cout << "\n��� = " << mean_f(a)<<",  �л� = "<<sum/10.0<<" ǥ������ "<<std_dev(a,sum/10.0)<<" wn\n";
//	for (i = 0; i < 10; i++)
//	{
//		cout << "d[" << i << "] = arr[" << i << "] - " << mean_f(a) << " = " << a[i] - mean_f(a) << endl;
//	}
//}
//
//// ���Ƿ� �迭�� �� ���� �� �迭�ѵ� ���ϴ� �� ã��
//#include <iostream>
//using namespace std;
//void swap1(int* a, int* b) 
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int binary_search_index(int list[], int n, int key)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (list[mid] == key)
//			return mid + 1;
//		else if (list[mid] < key)
//			left = mid + 1;
//		else
//			right = mid - 1;
//	}
//	return -1;
//}
//int main(void)
//{
//	int n, key, min = 0;
//	int list[10] = {};
//	for (int i = 0; i < 10; i++)
//	{
//		list[i] = rand();
//		cout << "rand �Լ��� ���� ���� �� : " << list[i] << "\n";
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		min = i;
//		for (int j = i + 1; j < 10; j++)
//		{
//			if (list[j] < list[min]) {
//				min = j;
//			}
//		}
//		swap1(&list[i], &list[min]);
//	}
//	cout << "Ž���� ���� �Է��Ͻÿ�. : ";
//	cin >> key;
//	n = binary_search_index(list, 10, key);
//	cout << "Ž�� ��� : " << n;
//}
//
//// ��ǰ �ֹ��ϱ�
//#include <iostream>
//using namespace std;
//void display_service(void)
//{
//	cout << "\n>> ȯ���մϴ�.\n";
//	cout << "========================\n";
//	cout << "== 1. ��ǰ �ֹ��ϱ�   ==\n";
//	cout << "== 2. �ֹ��� Ȯ���ϱ� ==\n";
//	cout << "== 3. �����ϱ�        ==\n";
//	cout << "========================\n";
//	cout << "���ϴ� ���񽺸� �����ϼ���. ";
//}
//void clearning()
//{
//	system("cls");
//}
//void display_item(void)
//{
//	cout << "\n>> ��ǰ �ֹ� �����Դϴ�.\n";
//	cout << "========================\n";
//	cout << " 1. ��Ʈ         1000\n";
//	cout << " 2. ����          500\n";
//	cout << " 3. ���찳        300\n";
//	cout << " 4. ��            800\n";
//	cout << " 5. ����         1500\n";
//	cout << "========================\n";
//}
//void order_sheet(void)
//{
//	cout << "\n  ��ǰ �ֹ� ������\n";
//	cout << "=======================\n";
//	cout << " ��ǰ��   ����   ����\n";
//	cout << "-----------------------\n";
//}
//int main(void)
//{
//	char name[N][7] = { "","��Ʈ","����","�����","��","����" };
//	int unit_cost[N] = { 0,1000,500,300,800,1500 };
//	int number[N] = { 0 };
//	int cost[] = { 0 };
//	int count[] = { 0 };
//	int n, i = 0, j, sum = 0;
//	while (1)
//	{
//		display_service();
//		cin >> n;
//		if (n == 1)
//		{
//			clearning();
//			display_item();
//			cout << "���ϴ� ��ǰ�� ��ȣ��? ";
//			cin >> number[i];
//			cout << name[number[i]] << "��<��> �ֹ��� ������ ? ";
//			cin >> count[i];
//			cost[i] = unit_cost[number[i]] * count[i];
//			cout << "\n �ֹ��Ͻ� " << name[number[i]] << " " << count[i] << "���� �� " << cost[i] << "���Դϴ�.\n";
//			i++;
//			cout << "\n��� ���񽺸� ���Ͻø� �ƹ�Ű�� ��������.";
//			_getch();
//			clearning();
//			continue;
//		}
//		else if (n == 2)
//		{
//			clearning();
//			order_sheet();
//			for (j = 0; j < i; j++)
//			{
//				cout << " " << name[number[j]] << "\t  " << count[j] << "\t" << cost[j] << endl;
//				sum += cost[j];
//			}
//			cout << "-----------------------\n";
//			cout << "�Ѿ�\t\t" << sum << "��\n";
//			cout << "\n��� ���񽺸� ���Ͻø� �ƹ�Ű�� ��������.";
//			_getch();
//			clearning();
//			continue;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//// �Լ� �̿��Ͽ� ����ǥ �����
//#include <iostream>
//using namespace std;
//void swap1(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main(void)
//{
//	int a[10][10] = { {1,3,3,4,2,2,3,1,4,2},
//						 {1,4,3,2,2,2,3,1,4,1},
//						 {2,3,3,4,2,2,3,1,4,1},
//						 {1,3,3,2,2,1,3,3,4,1},
//						 {1,3,3,4,2,2,3,2,4,3},
//						 {1,2,3,2,2,4,3,2,4,3},
//						 {1,3,3,4,2,2,3,1,4,1},
//						 {1,3,3,4,3,2,3,1,4,1},
//						 {2,3,4,4,1,2,4,1,4,1},
//						 {2,4,1,2,2,3,4,1,4,1} };
//	int answer[10] = { 1,3,3,4,2,2,3,1,4,1 };
//	int grade1[10] = {};
//	int stu_num[10] = {};
//	int i, j, grade, min, rank = 0;
//	int maximum, count = 0;
//	cout << "\t\t�� ���׺� ä�� ��� ��\n";
//	cout << "====================================================\n";
//	cout << "����   ";
//	for (i = 0; i < 10; i++)
//	{
//		cout << i << "   ";
//	}
//	cout << "����\n";
//	cout << "====================================================\n";
//	for (i = 0; i < 10; i++)
//	{
//		cout << i + 1 << "��  ";
//		for (j = 0; j < 10; j++)
//		{
//			if (a[i][j] == answer[j])
//			{
//				cout << "O   ";
//				grade1[i]++;
//			}
//			else
//				cout << "X   ";
//		}
//		cout << grade1[i] << "��\n";
//
//		stu_num[i] = i + 1;
//	}
//	cout << "====================================================\n";
//	cout << "\n\t\t�� ���� �� ���� ��\n";
//	cout << "\t\t================\n";
//	cout << "\t\t��ȣ  ����  ����\n";
//	cout << "\t\t================\n";
//	for (i = 0; i < 10; i++)
//	{
//		maximum = i;
//		for (j = i + 1; j < 11; j++)
//		{
//			if (grade1[j] > grade1[maximum]) {
//				maximum = j;
//			}
//		}
//		swap1(&stu_num[i], &stu_num[maximum]);
//		swap1(&grade1[i], &grade1[maximum]);
//		if (i == 0) {
//			rank = i + 1;
//		}
//		else if (grade1[i] == grade1[i - 2]) {
//			rank = i - 1;
//		}
//		else if (grade1[i] == grade1[i - 1]) {
//			rank = i;
//		}
//		else
//			rank = i + 1;
//
//		cout << "\t\t" << stu_num[i] << "��   " << grade1[i] << "��   " << rank << "��\n";
//	}
//	cout << "\t\t================\n";
//}