//#include <iostream>
//#include <string>
//#include <stdlib.h>
//#include <conio.h>
//#include <time.h>
//#include <cmath>
//#include <iomanip>
//int main()
//{
//	// �� �������Ѽ� ����ϱ�
//	int total = 0;
//	int i;
//	for (i = 1; i <= 5; i++)
//	{
//		cout << "i =" << i << endl;
//		total += i;
//		cout << "total =" << total << endl;
//	}
//	cout << "1���� " << i - 1 << "������ �հ�� " << total << "�Դϴ�.\n";
//
//	// 4���� ����ǥ�� �Է¹ޱ�
//	// �й� �̸� ���� ���� ���� ���� �Է¹ޱ�
//	// �� ������ �հ�� ��հ� ���� ���ϱ�
//	int i, num, kor, eng, math, sum;
//	string name;
//	double avg;
//	char grade;
//	for (i = 0; i < 5; i++)
//	{
//		cout << "�й��� �Է��Ͻÿ�. :";
//		cin >> num;
//		cout << "�̸��� �Է��Ͻÿ�. :";
//		cin >> name;
//		cout << "���������� �Է��Ͻÿ�. :";
//		cin >> kor;
//		cout << "���������� �Է��Ͻÿ�. :";
//		cin >> eng;
//		cout << "������ �Է��Ͻÿ�. :";
//		cin >> math;
//		sum = kor + eng + math;
//		avg = sum / 3.0;
//		switch ((int)avg / 10)
//		{
//		case 10: grade = 'A'; break;
//		case 9: grade = 'B'; break;
//		case 8: grade = 'C'; break;
//		case 7: grade = 'D'; break;
//		case 6: grade = 'E'; break;
//		default: grade = 'F'; break;
//		}
//		cout << "�й�" << num << "�� �л� " << name << "�� ���� �հ�� " << sum << "����� " << avg << "�̰�, ������ " << grade << "�̴�.\n";
//	}
//
//	// ���ϴ� ������ ���
//	int dan;
//	cout << "���ϴ� ���� �Է��ϼ��� -> ";
//	cin >> dan;
//	for (int j = 1; j < 10; j++)
//		cout << dan << "*" << j << " = " << dan * j << endl;
//	for (int dan = 1; dan <= 9; dan++)
//		for (int j = 1; j < 10; j++)
//			cout << dan << " * " << j << " = " << dan * j << endl;
//
//	// 1�ܺ��� 9�ܱ��� ��� �� ���
//	cout << "������\n";
//	for (int i = 1; i <= 7; i += 3)
//	{
//		cout << i << "��\t" << i + 1 << "��\t" << i + 2 << "��\n";
//		for (int j = 1; j <= 9; j++)
//		{
//			cout << i << "*" << j << "=" << i * j << "\t";
//			cout << i + 1 << "*" << j << "=" << (i + 1) * j << "\t";
//			cout << i + 2 << "*" << j << "=" << (i + 2) * j << "\n";
//		}
//	}
//
//	// ���տ� ���� ����� �� ��� ���
//	// for�� 3��
//	int johab;
//	cout << "������ �����ϴ� ���� ������ �����ϴ�.\n";
//	for (int i = 1; i < 6; i++)
//	{
//		for (int j = 1; j < 6; j++)
//		{
//			for (int k = 1; k < 6; k++)
//			{
//				johab = 2 * i + 3 * j + 5 * k;
//				if (johab >= 23 && johab <= 25)
//				{
//					cout << "2g �� " << i << "�� 3g �� " << j << "�� 5g �� " << k << "��\n\n";
//				}
//			}
//		}
//	}
//
//	// ���ǿ� �´� ��� �� ���� ���
//	int total = 0;
//	int i = 1;
//	while (i <= 10)
//	{
//		total += i;
//		i++;
//	}
//	cout << "1-10������ ���� " << total << endl;
//
//	// 0�� �ƴ� �ٸ� �� ��� �Է¹ޱ�
//	int num;
//	while (1)
//	{
//		cout << "���� �Է��ϼ���.(0�� �Է��ϸ� ����) : ";
//		cin >> num;
//		if (num == 0)
//			break;
//		else
//			cout << num << "�� �Է��ϼ̱���.\n";
//	}
//	cout << num << "�� �Է��Ͽ��⿡ �ݺ����� ����Ǿ����ϴ�.\n";
//
//	// Ȧ���� ���� ����ϱ�
//	int total = 0;
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i % 2 == 0)
//			break;
//		total += i;
//	}
//	cout << total << endl;
//
//	// ���� ���� �Է� ���������� ���� ����
//	double l, km;
//	char a;
//	while (1)
//	{
//		cout << "������ ���� �Է��Ͻÿ�. <l> : ";
//		cin >> l;
//		cout << "����Ÿ��� �Է��Ͻÿ�. <km> : ";
//		cin >> km;
//		cout << "�����" << km / l << "km/l �Դϴ�.\n";
//		cout << "�ٽ� ����Ͻðڽ��ϱ�?<Y/N> : ";
//		cin >> a;
//		if (a == 'N' || a == 'n')
//			break;
//	}
//
//	// ���ϴ� ������ ���ϴ� ��ŭ �����Ͽ� �� ������ ���
//	int a, b;
//	double d, e, f = 0, g;
//	char c;
//	cout << "*********************************************\n";
//	cout << "McDovell's Restauarant\n";
//	cout << "*********************************************\n";
//	cout << "Make your Selection from the menu below :\n";
//	cout << "1.Regular Hamburger           $ 0.89\n";
//	cout << "2.Regular Cheeseburger        $ 0.99\n";
//	cout << "3.Fish Sandwich               $ 1.29\n";
//	cout << "4.Half-pounder with cheese    $ 2.49\n";
//	cout << "5.French fries                $ 0.79\n";
//	cout << "6.Large soft drink            $ 0.99\n";
//	cout << "*********************************************\n";
//	while (1)
//	{
//		cout << "Select 1,2,3,4,5 or 6 -->";
//		cin >> a;
//		cout << "�ֹ��� ������ �Է��Ͻÿ�. -->";
//		cin >> b;
//		switch (a)
//		{
//		case 1: d = 0.89; break;
//		case 2: d = 0.99; break;
//		case 3: d = 1.29; break;
//		case 4: d = 2.49; break;
//		case 5: d = 0.79; break;
//		case 6: d = 0.99; break;
//		}
//		e = d * b;
//		f += e;
//		cout << "�߰��� �ֹ��Ͻðڽ��ϱ�?<Y/N>";
//		cin >> c;
//		if (c == 'N' || c == 'n')
//			break;
//	}
//	g = f * 0.055;
//	cout << "Please pay [ $" << f - g << "  ]\n";
//	cout << "Thank you for eationg at McDowell's.\n";
//
//	int a, b, e, f = 0, g = 0;
//	char c;
//	while (1)
//	{
//		cout << "����� � ������ �����Ͻʴϱ�?\n";
//		cout << "1.���  2.�ٳ���  3.������\n";
//		cout << "���ϴ� ������ ��ȣ�� �Է��Ͻÿ�. ->";
//		cin >> a;
//		cout << "����� ������ ������ ������ �Է��Ͻÿ�. ->";
//		cin >> b;
//		switch (a)
//		{
//		case 1:e = 500; break;
//		case 2:e = 800; break;
//		case 3:e = 1000; break;
//		}
//		f = e * b;
//		g += f;
//		cout << "-�߰�-��� �ٸ� ������ ������ ���Ͻø� 'y'��, �ƴϸ� 'n'�� �Է��Ͻÿ�. ->";
//		cin >> c;
//		if (c == 'n' || c == 'N')
//			break;
//	}
//	cout << "����� ������ ������ " << g << "�� �Դϴ�.\n";
//
//	// ������ �Ǵ��Ͽ� �ٸ� ���� ���
//	int a, b;
//	char c, d;
//	double e, f, g = 0, h = 0;
//	cout << "������\n";
//	cout << "1. ���� <25000��> 2. �λ� <18000��> 3. ���� <12000��> 4. �뱸<20000��>\n";
//	while (1)
//	{
//		cout << "������ ��ȣ�� �Է��Ͻÿ�. -> ";
//		cin >> a;
//		cout << "�����ϰ��� �ϴ� ǥ�� ������ �Է��Ͻÿ�. -> ";
//		cin >> b;
//		cout << "��̸� 'Y', �л��ΰ�� 'N'�� �Է��Ͻÿ�. -> ";
//		cin >> c;
//		switch (a)
//		{
//		case 1:e = 25000; break;
//		case 2:e = 18000; break;
//		case 3: e = 12000; break;
//		case 4: e = 20000; break;
//		}
//		if (c == 'y' || c == 'y')
//		{
//			cout << "�����̹Ƿ� �������� �ʽ��ϴ�.\n";
//			f = e;
//		}
//		else
//			f = e * 0.5;
//		h = f * b;
//		g += h;
//		cout << "�� �����Ͻðڽ��ϱ�?<Y/N>";
//		cin >> d;
//		if (d == 'n' || d == 'N')
//			break;
//	}
//	cout << "���� ����� <  " << g << "��  >�Դϴ�.\n";
//
//	// 100000 �Ǳ� ������ �ݺ��Ͽ� ����� �� �� ��� ���
//	double a = 1, b, c = 0;
//	while (1)
//	{
//		b = 4.0 / a;
//		b *= -1;
//		a += 3.0;
//		c += b;
//		if (a < 100000)
//			break;
//	}
//	cout << c << endl;
//
//	// ��� �� ��� �� �� ���
//	int i;
//	cout << "���󰡰�\t\t30���ϰ���\n";
//	for (i = 10000; i <= 20000; i += 1000)
//		cout << i << "�� \t\t " << i * 0.7 << "��\n";
//
//	// * ���
//	int i, j, k;
//	for (i = 1; i < 6; i++)
//	{
//		cout << "���� #" << i << "�� ����:";
//		cin >> k;
//		for (j = 1; j < k + 1; j++)
//			cout << "*";
//		cout << "\n";
//	}
//
//	// ���� ���� �� ���
//	int i;
//	cout << "����\t30%\t50%\t70%\n";
//	for (i = 10000; i <= 50000; i += 5000)
//		cout << i << "\t" << i * 0.7 << "\t" << i * 0.5 << "\t" << i * 0.3 << endl;
//
//	// ���� �� ������ �� ���
//	int a, i, sum = 0;
//	cout << "������ �Է��Ͻÿ�. :";
//	cin >> a;
//	cout << "--\t--------------------\n";
//	cout << "  \t1���� " << a << "������ ��\n";
//	cout << "--\t--------------------\n";
//	for (i = 1; i <= a; i++)
//	{
//		sum += i;
//		cout << i << "\t\t" << sum << endl;
//	}
//
//	// ���� ���� �� �ϳ��� ���
//	int i;
//	double a, d = 1, e = 0;
//	cout << "====================\n";
//	cout << "����\t������\n";
//	cout << "====================\n";
//	for (i = 1; i <= 10; i++)
//	{
//		a = (1 + 0.07);
//		a *= a;
//		d = 10000000 * a;
//		cout << i << "\t" << d << endl;
//	}
//
//	// ���� ���
//	int i, k, j;
//	char l;
//	for (i = 0; i < 31; i++)
//	{
//		for (j = i; j < 30; k++)
//		{
//			cout << " ";
//		}
//		for (k = 0; j <= i; k++)
//		{
//			l = 172;
//			cout << (char)'l';
//			l--;
//		}
//		cout << "\n";
//	}
//
//	// 9999 ���� ���� 3�� ��� �ִ� ���
//	int i = 1;
//	int sum = 0;
//	while (1)
//	{
//		sum += i * 3;
//		if (sum > 9999)
//			break;
//		i++;
//	}
//	cout << "�ִ� i = " << i - 1 << ", sum = " << sum - (i * 3) << endl;
//
//	double pi = 4.0, sign = -1, n = 3;
//	while (n < 100000) {
//		{
//			pi += sign * (4.0 / n);
//			sign *= -1;
//			n += 2;
//		}
//	}
//	cout << "n = " << n - 2 << " pi = " << pi << endl;
//
//	// �׸��Ҷ����� ���α׷� ���� ����
//	int a;
//	double r;
//	char d;
//	cout << "=========================\n";
//	cout << "== 1. ���� �ѷ� ���ϱ� ==\n";
//	cout << "== 2. ���� ���� ���ϱ� ==\n";
//	cout << "== 3. ���� ���� ���ϱ� ==\n";
//	cout << "== 4. �׸��α�         ==\n";
//	cout << "=========================\n";
//	while (1)
//	{
//		cout << "�� ���ϴ� ������? ";
//		cin >> a;
//		if (a == 4)
//			cout << "���α׷��� �����ϴ�.\n";
//		break;
//		cout << "\n>> ��������? ";
//		cin >> r;
//		switch (a)
//		{
//		case 1:cout << "\n>> �������� " << r << "�� ���� �ѷ��� " << 2.0 * 3.14 * r << endl; break;
//		case 2:cout << "\n>> �������� " << r << "�� ���� ���̴� " << r * r * 3.14 << endl; break;
//		case 3:cout << "\n>> �������� " << r << "�� ���� ���Ǵ� " << (3.0 / 4.0) * 3.14 * r * r * r << endl; break;
//		}
//		cout << ">> ����� Ȯ�������� �ƹ�Ű�� ��������.";
//		cin >> d;
//	}
//
//	// ó������ ���� �Է��� �� ������ �ܷ��� ������� ���� ���
//	int a, i;
//	double b = 100;
//	cout << "���� ���� ���� 100.0 mg �Դϴ�.\n";
//	cout << "\n�� ��° �Ǵ³��� ���� �ּ� �ܷ��� ���ұ��? ";
//	cin >> a;
//	for (i = 14; i <= a; i += 14)
//	{
//		b /= 2;
//		cout << i << "�ϱ����� ���� �ּ� �ܷ��� " << b << " mg �̻�\n";
//	}
//	cout << "\n>>�׷��Ƿ� " << a << "�� °���� " << b << "mg �̻� �����ֽ��ϴ�.\n";
//
//	// �������� �� �Է� ���� �� ��� �ᱣ�� ���
//	double a, b, c, k;
//	cout << "�� ���� �Է��Ͻÿ�. : ";
//	cin >> a >> b >> c;
//	k = b * b - 4 * a * c;
//	cout << "�Ǻ����� �� = " << k << endl;
//
//	int a = 6, b = 2, z;
//	z = (a + b) * (a + b);
//	cout << "<" << a << " + " << b << ">^2 = " << z << endl;
//
//	int x, y;
//	cout << "�� ���� �Է��Ͻÿ�. : ";
//	cin >> x >> y;
//	cout << x << " * " << y << " = " << x * y << endl;
//	cout << x << " + " << y << " = " << x + y << endl;
//	cout << x << " - " << y << " = " << x - y << endl;
//	cout << x << " / " << y << " = " << x / y << endl;
//
//	int a, b;
//	cout << "������ �Է��Ͻÿ�. : ";
//	cin >> a;
//	int i, sum;
//	if (a <= 0)
//	{
//		cout << "���� : �Է��� ���� 0 ���� �Դϴ�.\n";
//		exit(0);
//	}
//	sum = 0;
//	for (i = 1; i <= a; i++)
//		sum += i;
//	cout << "1���� " << a << "������ ���� " << sum << "�Դϴ�.\n";
//
//	double a, p, d = 0;
//	int n;
//	cout << "�� ���� �Է��ϼ���. : ";
//	cin >> a >> n;
//	double result;
//	int i;
//	result = 1.0;
//	for (i = 0; i < n; i++)
//		result *= a;
//	d = result;
//	cout << "power<" << a << "," << n << "> = " << d << endl;
//
//	int x, y, z, d;
//	cout << "�� ������ �Է��Ͻÿ�. : ";
//	cin >> x >> y >> z;
//	if (x > y) {
//		if (x > y)
//			d = x;
//		else
//			d = z;
//	}
//	else if (y > z)
//		d = y;
//	else
//		d = z;
//	cout << x << " " << y << " " << z << " �� ���� ū ���� " << d << "�̴�.\n";
//
//	// ���� �� ���� �� �� ��ŭ * ���
//	int i;
//	int car1_dist = 0, car2_dist = 0;
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 6; i++)
//	{
//		car1_dist += rand() % 100;
//		car2_dist += rand() % 100;
//		cout << "CAR #" << 1 << ":";
//		for (i = 0; i < car1_dist / 10; i++)
//		{
//			cout << "*";
//		}
//		cout << "\n";
//		cout << "CAR #" << 2 << ":";
//		for (i = 0; i < car2_dist / 10; i++)
//		{
//			cout << "*";
//		}
//		cout << "\n";
//		cout << "--------------------\n";
//		_getch();
//	}
//
//	// �������� 0 �̸� ��� �ƴϸ� ����� �ƴ�
//	int a, b, c;
//	cout << "����� �Ǵ��� �� ������ �Է����ּ���\n";
//	cout << "ù��° ���� : ";
//	cin >> a;
//	cout << "�ι�° ���� : ";
//	cin >> b;
//	c = a % b;
//	if (c == 0)
//		cout << a << "�� " << b << "�� ����Դϴ�.\n";
//	else
//		cout << a << "�� " << b << "�� ����� �ƴմϴ�.\n";
//
//	// �� ������ �Ÿ� ���ϱ�
//	double x1, x2, y1, y2;
//	cout << "ù��° ��ǥ���� �Է����ּ��� : ";
//	cin >> x1 >> x2;
//	cout << "�ι�° ��ǥ���� �Է����ּ���. : ";
//	cin >> y1 >> y2;
//	double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//	cout << "�� �������� �Ÿ��� " << d << "�Դϴ�.\n";
//
//	// ������ �� ���
//	int a, b, i, sum = 0;
//	cout << "�� ���� �Է��Ͻÿ�. : ";
//	cin >> a >> b;
//	for (i = 1; i <= a; i++)
//		sum += pow(i, b);
//	cout << "1^" << b << " + -- + " << a << "^" << b << "������ ������ �� = " << sum << endl;
//
//	// ���� ���� ���
//	double a, b, c;
//	double x1, x2;
//	cout << "3���� ���� �Է� : ";
//	cin >> a >> b >> c;
//	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2.0 * a);
//	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2.0 * a);
//	if ((b * b - 4 * a * c) < 0)
//		cout << "���� �����ϴ�.\n";
//	else
//		cout << "������������ ���� " << x1 << " " << x2 << "�Դϴ�.\n";
//
//	// ���� �� ���� �� ���� ���α׷� ���� ����
//	double a, c;
//	int b;
//	char d;
//	while (1)
//	{
//		cout << "����Ͻ� �Ǽ����� �Է����ּ��� : ";
//		cin >> a;
//		cout << "�������� �Է����ּ��� :";
//		cin >> b;
//		c = pow(a, b);
//		cout << c << endl;
//		cout << "�ٽ� ����Ͻðڽ��ϱ�? <Y/N> : ";
//		cin >> d;
//		if (d == 'N' || d == 'n')
//			break;
//	}
//	
//	// ���ǿ� �´� ���� ���
//	int a;
//	cout << "������ �Է����ּ���. : ";
//	cin >> a;
//	if (a % 2 == 0)
//		cout << "�־��� ������ ¦���Դϴ�.\n";
//	else
//		cout << "�־��� ������ Ȧ���Դϴ�. \n";
//	if (a < 0)
//	{
//		cout << "�־��� ������ ���밪�� " << a * -1 << "�Դϴ�.\n";
//		cout << "�־��� ������ �����Դϴ�.\n";
//	}
//	else
//	{
//		cout << "�־��� ������ ���밪�� " << a << "�Դϴ�.\n";
//		cout << "�־��� ������ ����Դϴ�.\n";
//	}
//	
//	int a, b, d;
//	double c;
//	cout << "1.���� ����  2.�ﰢ���� ����  3.�簢���� ����\n";
//	cout << "���ϰ��� �ϴ� ������ ��ȣ�� �Է��Ͻÿ�. -->";
//	cin >> a;
//	if (a == 1)
//	{
//		cout << "�������� �Է��Ͻÿ�.-->";
//		cin >> b;
//		c = b * b * 3.14;
//		cout << "���� ���̴� " << c << "�Դϴ�.\n";
//	}
//	else if (a == 2)
//	{
//		cout << "�ﰢ���� ���̿� �غ��� �Է��Ͻÿ�. -->";
//		cin >> b >> d;
//		c = b * d * 0.5;
//		cout << "�ﰢ���� ���̴� " << c << "�Դϴ�.\n";
//	}
//	else
//	{
//		cout << "�簢���� ���̿� �غ��� �Է��Ͻÿ�. -->";
//		cin >> b >> d;
//		c = b * d;
//		cout << "�簢���� ���̴� " << c << "�Դϴ�.\n";
//	}
//
//	// pow �̿�
//	int i;
//	double a;
//	cout << "====================\n";
//	cout << "����\t������\n";
//	cout << "====================\n";
//	for (i = 1; i <= 10; i++)
//	{
//		a = 10000000.0 * pow(1.0 + 0.07, i);
//		cout << i << "\t" << a << endl;
//	}
//
//	char a = 'a';
//	char b;
//	int n = 26;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//			cout << " ";
//		for (b = 'a'; b <= a; b++)
//			cout << b;
//		cout << "\n";
//		a++;
//	}
//
//	// �ҹ��ڸ� �빮�ڷ� ����
//	char a;
//	while (1)
//	{
//		cout << "���ĺ� �ҹ��ڸ� �Է��Ͻÿ�. : ";
//		cin >> a;
//		if (a < 96)
//			continue;
//		else
//			cout << "��ȯ�� �빮�ڴ� " << char(a - 32) << "�Դϴ�.\n";
//
//		if (a == 27)
//			break;
//	}
//
//	int i, j, num;
//	for (i = 2; i <= 100; i++)
//	{
//		num = true;
//		for (int j = 2; j * j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				num = false;
//				break;
//			}
//		}
//		if (num)
//			cout << i << " ";
//	}
//	cout << "\n";
//
//	// �޷� ���
//	int day = 31;
//	int START_DAY = 1;
//	int date;
//	cout << "\n  ��  ��  ȭ  ��  ��  ��  ��\n";
//	cout << "============================\n";
//	for (date = 0; date < 3; date++)
//		cout << "    ";
//	for (date = 3; START_DAY <= day; date++)
//	{
//		cout << setw(3) << START_DAY << " ";
//		if ((date + 1) % 7 == 0)
//			cout << "\n";
//		START_DAY++;
//	}
//	cout << "\n============================\n";
//
//	// tan �Լ� Ȱ��
//	double a, b;
//	cout << "�غ��� ���̿� ���̸� �Է��Ͻÿ�. : ";
//	cin >> a >> b;
//	cout << "�ﰢ���� ���̴� " << a * tan(48) << "�Դϴ�.\n";
//}
//
//// ���ϱ� �Լ� ����
//#include <iostream>
//using namespace std;
//void sum(int a, int b)
//{
//	cout << "a + b = " << a + b << endl;
//}
//int main(void)
//{
//	int a = 10, b = 20;
//	sum(a, b);
//}
//
//// �Լ� ���ϰ� ���
//#include <iostream>
//using namespace std;
//int sum(int a, int b)
//{
//	int sum;
//	a += 10;
//	b += 20;
//	sum = a + b;
//	cout << a << b << endl;
//	return sum;
//}
//int main(void)
//{
//	int a = 10, b = 20;
//	int k;
//	k = sum(a, b);
//	cout << a << b << k << endl;
//}
//
//// int �� void �� �Լ� ȣ��
//#include <iostream>
//using namespace std;
//int myAbs(int x)
//{
//	int y;
//	if (x < 0)
//		y = -x;
//	else
//		y = x;
//	return y;
//}
//void myAbs1(int x)
//{
//	int y;
//	if (x < 0)
//		y = -x;
//	else
//		y = x;
//	cout << "���� ������ " << y << "�̴�.\n";
//}
//int main(void)
//{
//	int a, result;
//	cout << "\n������ �ϳ��� �Է��ϼ���. ->";
//	cin >> a;
//	result = myAbs(a);
//	cout << "���� ������ " << result << "�̴�.\n";
//	myAbs1(a);
//}
//
//// �� ���� �� ū �� ����
//#include <iostream>
//using namespace std;
//int max(int x, int y)
//{
//	return ((x > y) ? x : y);
//}
//int main(void)
//{
//	int a, b;
//	cout << "\n�������� �� �� �Է��ϼ���. => ";
//	cin >> a >> b;
//	cout << "�ִ� => " << max(a, b) << endl;
//}
//
//// �Լ��� ���� ���
//#include <iostream>
//using namespace std;
//void sub1()
//{
//	cout << "C";
//}
//void sub2()
//{
//	cout << "PROGRAMMING\n";
//}
//int main(void)
//{
//	sub1();
//	cout << "  ";
//	sub2();
//}
//
//// �� ��� �� ����ϴ� �Լ� ȣ��
//#include <iostream>
//using namespace std;
//void det(double a, double b, double c)
//{
//	double d;
//	d = b * b - 4 * a * c;
//	cout << "�Ǻ����� �� = " << d << endl;
//}
//int main(void)
//{
//	double x,y,z,k,d=0;
//	cout << "�� ���� �Է��Ͻÿ�. :";
//	cin >> x >> y >> z;
//	det(x, y, z);
//}
//
//#include <iostream>
//using namespace std;
//void mul(int a, int b)
//{
//	int c;
//	c = (a + b) * (a + b);
//	cout << "< " << a << " + " << b << " >^2 = " << c << endl;
//}
//int main(void)
//{
//	int x = 6, y = 2;
//	mul(x, y);
//}
//// 2���� ���� �Է¹޾� ��� �� ����
//#include <iostream>
//using namespace std;
//void mul(int a, int b, int& c)
//{
//	c = a * b;
//}
//void add(int a, int b, int& c)
//{
//	c = a + b;
//}
//void subt(int a, int b, int& c)
//{
//	c = a - b;
//}
//void div(int a, int b, int& c)
//{
//	c = a / b;
//}
//int main(void)
//{
//	int x,y,c;
//	cout << "�� ���� �Է��Ͻÿ�. : ";
//	cin >> x >> y;
//	mul(x, y, c);
//	cout << x << " * " << y << " = " << c << endl;
//	add(x, y, c);
//	cout << x << " + " << y << " = " << c << endl;
//	subt(x, y, c);
//	cout << x << " - " << y << " = " << c << endl;
//	div(x, y, c);
//	cout << x << " / " << y << " = " << c << endl;
//}
//
//// ������ �ƴ� ��� �����޼��� ��� �� ���α׷� ����
//#include <iostream>
//using namespace std;
//int p_sum(int n)
//{
//	int i, sum;
//	if (n <= 0)
//	{
//		cout << "���� : �Է��� ���� 0 ���� �Դϴ�.\n";
//		exit(0);
//	}
//	sum = 0;
//	for (i = 1; i <= n; i++)
//		sum += i;
//	return sum;
//}
//int main(void)
//{
//	int a,b;
//	cout << "������ �Է��Ͻÿ�. : ";
//	cin >> a;
//	b=p_sum(a);
//	cout << "1���� " << a << "������ ���� " << b << "�Դϴ�.\n";
//}
//// �ᱣ���� �� ���� ��Ų �� ����
//#include <iostream>
//using namespace std;
//void power(double base, int exp, double& d)
//{
//	double result;
//	int i;
//	result = 1.0;
//	for (i = 0; i < exp; i++)
//		result *= base;
//	d = result;
//}
//int main(void)
//{
//	double a,p,d=0;
//	int n;
//	cout << "�� ���� �Է��ϼ���. : ";
//	cin >> a >> n;
//	power(a, n,d);
//	cout << "power<"<<a << "," << n << "> = " << d << endl;
//}
//
//#include <iostream>
//using namespace std;
//void prime(int n, int& d)
//{
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			d = 0;
//	}
//	d = 1;
//}
//int main(void)
//{
//	int i,d;
//	for (i = 2; i <= 100; i++)
//	{
//		prime(i, d);
//		if (d)
//			cout << i<<" ";
//	}
//}
//
//// ���Ƿ� �� ���� �� �� �� ��ŭ * ���
//#include <iostream>
//using namespace std;
//void disp_car(int car_number, int distance)
//{
//	int i;
//	cout << "CAR #" << car_number << ":";
//	for (i = 0; i < distance / 10; i++)
//	{
//		cout << "*";
//	}
//	cout << "\n";
//}
//int main(void)
//{
//	int i;
//	int car1_dist = 0, car2_dist = 0;
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 6; i++)
//	{
//		car1_dist += rand() % 100;
//		car2_dist += rand() % 100;
//		disp_car(1, car1_dist);
//		disp_car(2, car2_dist);
//		cout << "--------------------\n";
//		_getch();
//	}
//}
//
//// ��� �Ǻ� �Լ�
//#include <iostream>
//using namespace std;
//void bs(int a, int b)
//{
//	int c;
//	c = a % b;
//	if (c == 0)
//		cout << a << "�� " << b << "�� ����Դϴ�.\n";
//	else
//		cout << a << "�� " << b << "�� ����� �ƴմϴ�.\n";
//}
//int main(void)
//{
//	int a, b;
//	cout << "����� �Ǵ��� �� ������ �Է����ּ���\n";
//	cout << "ù��° ���� : ";
//	cin >> a;
//	cout << "�ι�° ���� : ";
//	cin >> b;
//	bs(a, b);
//}
//	
//// �Ÿ� ���ϴ� �Լ�
//#include <iostream>
//using namespace std;
//void gs(double x1, double x2, double y1, double y2)
//{
//	double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//	cout << "�� �������� �Ÿ��� " << d << "�Դϴ�.\n";
//}
//int main(void)
//{
//	double x1, x2, y1, y2,d;
//	cout << "ù��° ��ǥ���� �Է����ּ��� : ";
//	cin >> x1 >> x2;
//	cout << "�ι�° ��ǥ���� �Է����ּ���. : ";
//	cin >> y1 >> y2;
//	gs(x1, x2, y1, y2);
//}
//
//// �������� �Լ� ���� �� ���� ȣ��
//#include <iostream>
//using namespace std;
//void sa(int n, int m)
//{
//	double d = (n + m) / 2.0;
//	cout << "���,����,��ȭ����� ���� ���� ������ �����ϴ�.\n";
//	cout << "������ = " << d;
//}
//void gi(int n, int m)
//{
//	double d = sqrt(n * m);
//	cout << " ������� = " << d;
//}
//void zo(int n, int m)
//{
//	double d = (2.0 * n * m) / (n + m);
//	cout << " ��ȭ��� = " << d << endl;
//}
//int main(void)
//{
//	double x, y;
//	double sa, gi, zo;
//	cout << "�� ���� �Է��Ͻÿ�. -->";
//	cin >> x >> y;
//	sa(x, y);
//	gi(x,y);
//	zo(x,y);
//}
//	
//// �Լ� �ȿ��� �ٸ� �Լ� ȣ��
//#include <iostream>
//using namespace std;
//void power(int n, int k, int& all)
//{
//	all = pow(n, k);
//}
//void sumofpower(int n, int k)
//{
//	int i;
//	int sum = 0;
//	int all = 0;
//	for (i = 1; i <= n; i++)
//	{
//		power(i, k, all);
//		sum += all;
//	}
//	cout << "1^" << n << " + -- + " << k << "^" << n << "������ ������ �� = " << sum << endl;
//}
//int main(void)
//{
//	int a, b,i,sum;
//	cout << "�� ���� �Է��Ͻÿ�. : ";
//	cin >> a >> b;
//	sumofpower(a, b);
//}
//
//// ��� �Ͽ� ����
//#include <iostream>
//using namespace std;
//void ec(int a, int b, int c, double& x1)
//{
//	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2.0 * a);
//}
//void ec1(int a, int b, int c, double& x2)
//{
//	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2.0 * a);
//}
//int main(void)
//{
//	int a, b, c;
//	double x1=0, x2=0;
//	cout << "3���� ���� �Է� : ";
//	cin >> a >> b >> c;
//	ec(a, b, c,x1);
//	ec1(a, b, c,x2);
//	if ((b * b - 4 * a * c) < 0)
//		cout << "���� �����ϴ�.\n";
//	else
//		cout << "������������ ���� " << x1 << " " << x2 << "�Դϴ�.\n";	
//}
//
//// pow �Լ� ���
//#include <iostream>
//using namespace std;
//double db(double a, int b)
//{
//	return pow(a, b);
//}
//int main(void)
//{
//	double a,c;
//	int b;
//	char d;
//	while (1)
//	{
//		cout << "����Ͻ� �Ǽ����� �Է����ּ��� : ";
//		cin >> a;
//		cout << "�������� �Է����ּ��� :";
//		cin >> b;
//		c = db(a, b);
//		cout << c << endl;
//		cout << "�ٽ� ����Ͻðڽ��ϱ�? <Y/N> : ";
//		cin >> d;
//		if (d == 'N' || d == 'n')
//			break;
//	}
//}
//
//// int �� void �� �Լ� ���
//#include <iostream>
//using namespace std;
//int event(int n)
//{
//	if (n % 2 == 0)
//		return 1;
//	else
//		return 0;
//}
//int absolute(int n)
//{
//	if (n < 0)
//		return n * -1;
//	else
//		return n;
//}
//int sign(int n)
//{
//	if (n < 0)
//		return -1;
//	else if (n == 0)
//		return 0;
//	else
//		return 1;
//}
//void event1(int n)
//{
//	if (n % 2 == 0)
//		cout << "�־��� ������ ¦���Դϴ�.\n";
//	else
//		cout << "�־��� ������ Ȧ���Դϴ�.\n";
//}
//void absolute1(int n)
//{
//	if (n < 0)
//		cout << "�־��� ������ ���밪�� " << n * -1 << "�Դϴ�.\n";
//	else
//		cout << "�־��� ������ ���밪�� " << n << "�Դϴ�.\n";
//}
//void sign1(int n)
//{
//	if (n < 0)
//		cout << "�־��� ������ �����Դϴ�.\n";
//	else if (n == 0)
//		cout << "�־��� ������ 0 �Դϴ�.\n";
//	else
//		cout << "�־��� ������ ����Դϴ�.\n";
//}
//int main(void)
//{
//	int a,b;
//	cout << "������ �Է����ּ���. : ";
//	cin >> a;
//	b = event(a);
//	if (b == 1)
//	cout << "�־��� ������ ¦���Դϴ�.\n";
//	else
//	cout << "�־��� ������ Ȧ���Դϴ�. \n";
//	b = absolute(a);
//	cout << "�־��� ������ ���밪�� " << b << "�Դϴ�.\n";
//	b = sign(a);
//	if (b == -1)
//		cout << "�־��� ������ �����Դϴ�.\n";
//	else if(b==0)
//		cout << "�־��� ������ 0 �Դϴ�.\n";
//	else
//		cout << "�־��� ������ ����Դϴ�.\n";
//	int a,b;
//	cout << "������ �Է����ּ���. : ";
//	cin >> a;
//	event1(a);
//	absolute1(a);
//	sign1(a);
//}
//
//// �Է� ���� ���� ���� �ٸ� �Լ� ���
//#include <iostream>
//using namespace std;
//void sp(int n)
//{
//	cout << "���� ���̴� " << n * n * 3.14 << "�Դϴ�.\n";
//}
//void tr(int n, int m)
//{
//	cout << "�ﰢ���� ���̴� " << n * m * 0.5 << "�Դϴ�.\n";
//}
//void qu(int n, int m)
//{
//	cout << "�簢���� ���̴� " << n * m << "�Դϴ�.\n";
//}
//int main(void)
//{
//	int a, b,d;
//	double c;
//	cout << "1.���� ����  2.�ﰢ���� ����  3.�簢���� ����\n";
//	cout << "���ϰ��� �ϴ� ������ ��ȣ�� �Է��Ͻÿ�. -->";
//	cin >> a;
//	if (a == 1)
//	{
//		cout << "�������� �Է��Ͻÿ�.-->";
//		cin >> b;
//		sp(b);
//	}
//	else if (a == 2)
//	{
//		cout << "�ﰢ���� ���̿� �غ��� �Է��Ͻÿ�. -->";
//		cin >> b >> d;
//		tr(b, d);
//	}
//	else
//	{
//		cout << "�簢���� ���̿� �غ��� �Է��Ͻÿ�. -->";
//		cin >> b >> d;
//		qu(b, d);
//	}
//}
//
//#include <iostream>
//using namespace std;
//void many(int a, int b)
//{
//	cout << "�� ���̴� " << a - b << " �Դϴ�.\n";
//}
//void mann(int a, int b)
//{
//	cout << "�� ���̴� " << a - b - 1 << " �Դϴ�.\n";
//}
//int main(void)
//{
//	int a,b,d;
//	char c;
//	cout << "����⵵�� �Է����ּ��� : ";
//	cin >> a;
//	cout << "�¾ �⵵�� �Է����ּ��� : ";
//	cin >> b;
//	cout << "������ ��������? <Y/N> : ";
//	cin >> c;
//	switch (c)
//	{
//	case 'y':
//	case 'Y': many(a, b); break;
//	case 'n':
//	case 'N': mann(a, b); break;
//	}
//}
//
//// ¦���� ����ϴ� �Լ� ����
//#include <iostream>
//using namespace std;
//void prime(int n)
//{
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return;
//	}
//	cout << i << " ";
//}
//int main(void)
//{
//	int i;
//	for (i = 2; i <= 100; i++)
//		prime(i);
//}
//
//// pow , fabs �Լ� Ȱ��
//#include <iostream>
//using namespace std;
//void bcd(double a)
//{
//
//	double b = a / 2.0;
//	double c;
//	while (1)
//	{
//		c = 0.5 * (b + a / b);
//		if (fabs(c - b) < pow(10, -6))
//			break;
//		b = c;
//	}
//	cout << "�Լ��� ���� ���� " << a << "�� ������ = " << c << endl;
//	cout << "���̺귯�� �Լ� sqrt(" << a << ") = " << sqrt(a) << endl;
//}
//int main(void)
//{
//	double a;
//	double b,c;
//	cout << "�������� ���� ���ڸ� �Է��ϼ���: ";
//	cin >> a;
//	bcd(a);
//}
//
//// int , void �� �Լ� Ȱ��
//#include <iostream>
//using namespace std;
//double height(double len, double deg)
//{
//	return len * tan(deg);
//}
//void height1(double len, double deg)
//{
//	double height = len * tan(deg);
//	cout << "�ﰢ���� ���̴� " << height << "�Դϴ�.\n";
//}
//int main(void)
//{
//	double a, b, c;
//	cout << "�غ��� ���̿� ���̸� �Է��Ͻÿ�. : ";
//	cin >> a >> b;
//	c = height(a, b);
//	cout << "�ﰢ���� ���̴� " << c << "�Դϴ�.\n";
//
//	double a,b,c;
//	cout << "�غ��� ���̿� ���̸� �Է��Ͻÿ�. : ";
//	cin >> a >> b;
//	height1(a, b);
//}