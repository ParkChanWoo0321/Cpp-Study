#include <iostream> // ��������� ���Խ�Ű�� ����
#include <cstring>
#include <string> // string Ŭ������ ����ϱ� ���� ��� ����
#include <cmath>
using namespace std; // ���ӽ����̽��� ����
void main()
{
	// �޼��� ���
	cout << "�̸� : ������" << endl;
	cout << "�Ҽ� : �Ѻ��̵��" << endl;
	cout << "�̸��� : techsung@chol.com" << endl;
	cout << "����� " << 10 << "�� �ִ�.\n";
	cout << "����� �� ���� " << 500 << "���̴�.\n";

	// ���� ���� �� �Է¹��� �� ���
	int unit, count, total; // ���� ����
	cout << "��ǰ�� �ܰ��� �Է��Ͻÿ�->";
	cin >> unit;
	cout << "������ ������ �Է��Ͻÿ�->";
	cin >> count;
	total = unit * count; // Ű���忡�� �Է¹��� �����ͷ� �� �ݾ� ���ϱ�
	cout << "�� �ݾ�:" << total << "\n";

	// �Ҽ��� ���
	double pi = 3.141692;
	int r;
	double area;
	cout << "�������� �Է��Ͻÿ�. -> ";
	cin >> r;
	area = r * r * pi;
	cout << "�������� " << r << "�� ���� ������ " << area << "�̴�.\n";

	// ���� ���
	char c = 'A';
	cout << c << endl;
	cout << (int)c << endl;
	cout << 'A' + 1 << "\t";
	cout << (char)('A' + 1) << "\n";
	// �ҹ��ڿ� �빮�ڴ� �ƽ�Ű�ڵ� ���� 32 ���̰� ��
	cout << 'a' - 'A' << "\n";
	// �ҹ��ڿ��� 32�� ���� �빮�ڰ� ������
	cout << (char)('a' - 32) << "\n"; 

	// ���� 2�� ���
	char ch1 = 'A', ch2 = 'B'; // �޸� ���� ch1,ch2 �� ������ 65,66
	cout << "ch1(char): " << ch1 << "\t" << "ch2(char) : " << ch2 << endl;
	cout<<"ch1(int): "<<(int)ch1<< "\t" << "ch2(int): " << (int)ch2 << endl << endl;
	int i = ch1, j = ch2;
	cout << "i(int): " << i << "\tj(int): " << j << endl;
	cout << "i(char): " << (char)i << "\t" << "j(char): " << (char)j << endl;

	// ���ڿ� �پ��� ������� ���� �� ���
	char flowers1[5] = "rose";
	char flowers2[6] = {'l','i','l','a','c'};
	char flowers3[] = "tulip";
	cout << flowers1 << "\n";
	cout << flowers2 << "\n";
	cout << flowers3 << "\n";
	cout << strlen(flowers1) << "\n"; // ���ڿ��� ����
	cout << sizeof(flowers3) << "\n"; // �迭�� ũ��

	//#include <cstring> ���

	// Ư�� ���� �Է¹��������� ����
	char password[11];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	while (true)
	{
		cout << "��ȣ >>";
		cin >> password;
		if (strcmp(password, "C++") == 0)
		{
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�~~" << endl;
	}

	// ���� �Է¹ޱ�
	cout << "�ּҸ� �Է��ϼ���.>>";
	char address[100];
	cin.getline(address, 100, '\n');
	cout << "�ּҴ� " << address << "�Դϴ�.\n"; // �ּ� ���

	// ���ڿ� �Է¹ޱ�
	cout << "�̸��� �Է��ϼ���.>>";
	char name[11]; // �ѱ��� 5�� ����, ������ 10���� ������ �� �ִ�.
	cin >> name; // Ű����κ��� ���ڿ��� �д´�.
	cout << "�̸��� " << name << "�Դϴ�\n"; // �̸��� ����Ѵ�.

	// ���� ����� ���
	int money, day,total;
	cout << "���� �߱ٺ� �Է��ϼ���.:";
	cin >> money;
	cout << "�߱��� ��¥ ���� �Է��ϼ���.:";
	cin >> day;
	total = money * day;
	cout << "�Ѵ� �߱ٺ�� " << total << "���Դϴ�.\n";

	int time, money, total;
	cout << "�ٹ� �ð��� �Է��ϼ���. :";
	cin >> time;
	cout << "�ð��� �޿��� �Է��ϼ���. :";
	cin >> money;
	total = time*money;
	cout << "�� �޿��� " << total << "���Դϴ�.\n";
	
	// �Ҽ��� ����� ���
	int r,a;
	double b,c;
	cout << "�������� �Է��ϼ���. :";
	cin >> r;
	a = r * 2;
	b = 2 * r * 3.14;
	c = r * r * 3.14;
	cout << "���� �ѷ��� " << a << "�Դϴ�.\n";
	cout << "���� �ѷ��� " << b << "�Դϴ�.\n";
	cout << "���� ������ " << c << "�Դϴ�.\n";

	// ���� �Ѱ��� �Է¹ް� Ư���� ����Ͽ� ���
	int age, day;
	cout << "����� ���̸� �Է��ϼ���. :";
	cin >> age;
	day = age * 365;
	cout << "����� ��ƿ� ���� " << day << " ���Դϴ�.\n";

	// �Ҽ������� ����Ͽ� ���
	int r;	
	double area;
	cout << "���� �������� �Է��ϼ���. :";
	cin >> r;
	area = 0.75* r * r * r;
	cout << "���� ���Ǵ� " << area << "�Դϴ�.\n";

	// �Է¹��� ������ �ٸ� ������� ����Ͽ� ���
	int a, b, c,total;
	double aver;
	cout << "a�� ���� �Է��ϼ���. :";
	cin >> a;
	cout << "b�� ���� �Է��ϼ���. :";
	cin >> b;
	cout << "c�� ���� �Է��ϼ���. :";
	cin >> c;
	total = a + b + c;
	aver = total / 3;
	cout << "��� ���� ���� " << total << "�Դϴ�.\n"; 
	cout << "��� ���� ����� " << aver << "�Դϴ�.\n";
	
	// �Է¹��� ��, �ٸ� ������� ���� �� ���
	int a,b,c;
	cout << "�������� �Է��Ͻÿ�. :";
	cin >> a;
	b = a * a;
	c = a * a * a;
	cout << "�Է¹��� ������ ���� " << a << "�Դϴ�.\n";
	cout << "�Է¹��� ������ ���� �������� " << b << "�Դϴ�.\n";
	cout << "�Է¹��� ������ ���������� " << c << "�Դϴ�.\n";

	// �Է¹��� �� �Ҽ������� ����Ͽ� ���
	double F, C;
	cout << "ȭ���µ��� �Է��ϼ���. :";
	cin >> F;
	C = ((5.0 / 9) * F) - 32;
	cout << "���� �µ��� " << C << "�Դϴ�.\n";

	int inch = 10;
	double c;
	c = inch * 2.54;
	cout << "10��ġ�� " << c << "cm�̴�.\n";

	// ���� , �� �Է¹޾� ��� �� ���
	char name[10];
	int year;
	double GPA, score;
	cout << "�̸��� ? ";
	cin >> name;
	cout << "���г� ? ";
	cin >> year;
	cout << year<<"�г� ������ ? ";
	cin >> GPA;
	score = (GPA * 100) / 4.5;
	cout << "\n--------------------------\n";
	cout << " �̸�   �г�   ����(����)";
	cout << "\n--------------------------\n";
	cout << " " << name << "   " << year << "   " << GPA<<"(" << score << ")";
	cout << "\n--------------------------\n";

	// �� �Է¹޾� SWAP ����
	int s = 1, w = 2,te;
	cout << "s�� �ʱⰪ = " << s<<"\n";
	cout << "w�� �ʱⰪ = " << w<<"\n";
	cout << "================\n";
	te = s;
	s = w;
	w = te;
	cout << "s�� ��ȯ�� = " << s << "\n";
	cout << "w�� �ʱⰪ = " << w << "\n";

	// �� ��ȯ
	int mile, yard;
	double km;
	cout << "mile - > ";
	cin >> mile;
	cout << "yard - > ";
	cin >> yard;
	km = 1.609 * (mile + yard / 1760.0);
	cout << "������ ��� �Ÿ��� ȯ�� " << km << " km";

	// Ư�� �� ���� �� �Է¹��� ���� �߰��� ���
	int m = 8, n = 5, z;
	cout << "m�� �ʱⰪ " << m << "  n�� �ʱⰪ " << n << "\n";
	n += 3;
	m -= 1;
	z = m + n;
	cout << "z�� ���� " << z << "\n";

	// ���� ������ �Է¹ޱ�
	char c, d;
	cout << "�� ��° ���ڸ� �Է��ϼ���. ";
	cin >> c>>d;
	cout <<d<< "\t"<<c;

	// �Ҽ��� ���
	double a, b;
	cout << "������ ���� �Է��Ͻÿ�. :";
	cin >> a;
	b = a * 3.785;
	cout << a << "������ " << b << "���� �Դϴ�.\n";

	// ���׽� ���� �Է¹޾� ��� �� ���
	int a, b;
	cout << "���׽� 3x^2 * 7x + 11�� �̿��� x�� ���� �Է��Ͻÿ�. :";
	cin >> a;
	b = 3 * a * a + 7 * a + 11;
	cout << "���׽��� ����� ���� " << b << "�Դϴ�.\n";

	// �ҹ��ڸ� �빮�ڷ� ����
	char a;
	cout << "�ϳ��� �ҹ��ڸ� �Է��ϼ���. :";
	cin >> a;
	if (a >= 97)
		a -= 32;
	cout <<a<<"\n";
	
	// �빮�ڸ� �ҹ��ڷ� ����
	char a,b;
	cout << "�빮�ڸ� �Է��Ͻÿ�. :";
	cin >> a >> b;
	cout << a << "�� �ҹ��ڴ� " << char(a + 32) << "�̴�.\n";
	cout << b << "�� �ҹ��ڴ� " << char(b + 32) << "�̴�.\n";

	// �Ҽ��� ���
	double mile, km;
	cout << "";
	cin >> mile;
	km = mile * 1.609;
	cout << mile << " mile ��" << km << "km �̴�.\n";

	double speed, km,aver;
	cout << "�ڵ����� ��� ����ӵ��� �Է��Ͻÿ�. :";
	cin >> speed;
	cout << "������ �Ÿ��� �Է��Ͻÿ�. :";
	cin >> km;
	aver = km / speed;
	cout << km << "�Ÿ��� " << speed << "��� ����ӵ��� ���� " << aver << "�ð��� �ɸ���.\n";

	// �Ҽ��� ���
	int a, b;
	double answer;
	cout << "a�� b�� ���� �Է��ϼ��� .: ";
	cin >> a >> b;
	answer = (a - (b * 5.0)) / (b - (a * 5.0));
	cout.precision(2);
	cout << "����� " << answer << "�̴�.\n";

	// Ư�� �� ���
	double pound, g;
	cout << "�Ŀ�� ���� �Է��Ͻÿ�. :";
	cin >> pound;
	g = pound * 454;
	cout << pound << " �Ŀ�尪�� " << g << " �׷��Դϴ�.\n";

	// �� ���� ��ȯ
	double cm, m;
	cout << "����� �Է��Ͻÿ�. :";
	cin >> cm;
	m = cm * 3.3058;
	cout << cm << "���� �������ͷ� ȯ���ϸ� " << m << "�������Ͱ� �˴ϴ�.\n";

	int year,second;
	cin >> year;
	second = year * 31536000;
	cout <<year<<"���� �� " << second << "�� �Դϴ�.\n";

	double kg, pound;
	cout << "Kg���� �Է��ϼ���. :";
	cin >> kg;
	pound = kg * (1 / 0.453592);
	cout << "Kg���� �Ŀ�尪���� ����� ���� " << pound << " �Դϴ�.";
	
	// ��ȭ ��� ���
	double time, fee;
	cout << "�޴��� ��ȭ�ð��� �Է��ϼ���. :";
	cin >> time;
	fee = time * 500 + 3000;
	cout << time << "�ð����� ����� ��ȭ����� " << fee << "�� �Դϴ�.\n";

	// ������ �� �Է¹޾� ����� ���
	double x, y, z,a;
	cout << "x�� ���� �Է��Ͻÿ�. :";
	cin >> x;
	cout << "y�� ���� �Է��Ͻÿ�. :";
	cin >> y;
	cout << "z�� ���� �Է��Ͻÿ�. :";
	cin >> z;
	a = x * y + z;
	cout << "xy+z�� ����� ���� " << a << "�Դϴ�.\n";

	// Ư�� �� ���
	double time;
	time = 115000000 / 300000;
	cout << "�ʼ� 30��km�� ���� �¾翡�� ����Ͽ� ������ �����ϴ� �ð��� " << time << "�� �Դϴ�.\n";
	
	// ��� ���
	double kw, fee;	
	cout << "����� kw ���� �Է��Ͻÿ�. :";
	cin >> kw;
	fee=1390 + kw * 164.2;
	cout << "�������� " << fee << "�� �Դϴ�.\n";

	// �·� ���
	double win, lose, per;
	cout << "�¼��� �Է��ϼ���. :";
	cin >> win;
	cout << "�������� �Է��ϼ���. :";
	cin >> lose;
	per = win / (win + lose);
	cout << "�·��� " << per << "�Դϴ�.\n";

	// �ﰢ�� ���� ���
	int ac, ae, bc, de;
	cout << "�ﰢ���� �� AC�� �Է��Ͻÿ�. :";
	cin >> ac;
	cout << "�ﰢ���� �� AE�� �Է��Ͻÿ�. :";
	cin >> ae;
	cout << "�ﰢ���� �� BC�� �Է��Ͻÿ�. :";
	cin >> bc;
	de = (ae * bc)/ac;
	cout << "�ﰢ���� �� DE�� " << de << "�Դϴ�.\n";
	
	// Ư�� �� ���
	double money, time, per, a,b,c;
	cout << "�ð��� �޿��� �Է��Ͻÿ�. :";
	cin >> money;
	cout << "�ٹ��ð��� �Է��Ͻÿ�. :";
	cin >> time;
	cout << "���ݺ����� �Է��Ͻÿ�. :";
	cin >> per;
	a = time * money;
	b = a * per;
	c = a - b;
	cout << "�����޿� " << a << "���� ���ݰ��� ���� ���� �޿��� " << c << "�Դϴ�.\n";

	double a, b, c;
	cout << "ũ�⸦ �Է��Ͻÿ�. :";
	cin >> a;
	cout << "���̸� �Է��Ͻÿ�. :";
	cin >> b;
	c = a / b;
	cout << "�з��� ����� " << c << "�Դϴ�.\n";	
}