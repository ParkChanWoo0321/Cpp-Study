//#include <iostream>
//using namespace std;
//int main(void)
//{
//	// ���ڿ� ���
//	char str[256] = "Apple";
//	const char* ptr = "Banana";
//	cout << "str = " << (int)str << "\t str = " << str << endl;
//	cout << "ptr = " << (int)ptr << "\t ptr = " << ptr << endl;
//	// str = "Grapes"
//	// ptr ���� �� ���
//	ptr = "Orange";
//	cout << "ptr = " << (int)ptr << "\t ptr = " << ptr << endl;
//}
//
//// pf�� ���� �����Ͽ� �Լ� �̸�ó�� �� �� ����
//#include <iostream>
//using namespace std;
//void(*pf)(void);
//void one()
//{
//	cout << "one \n";
//}
//void two()
//{
//	cout << "two \n";
//}
//void three()
//{
//	cout << "three \n";
//}
//int* func()
//{
//	int n;
//	cin >> n;
//	return &n;
//}
//char* func1(char* s)
//{
//	cout << s << endl;
//	return s;
//}
//int main(void)
//{
//	pf = one;
//	pf();
//	pf = two;
//	pf();
//	pf = three;
//	pf();
//
//	int* ip;
//	ip = func();
//	cout << *ip << endl;
//
//	char* str;
//	str = func1("ABC");
//	cout << str << endl;
//}
//
//// namecard ����ü ���� �� Ȱ���غ���
//#include <iostream>
//using namespace std;
//struct namecard
//{
//	string name;
//	string job;
//	string tel;
//	string email;
//};
//void structPrn(namecard temp)
//{
//	cout << "\n " << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email;
//}
//namecard Strcinput()
//{
//	namecard man;
//	cout << "�̸��� �Է��Ͻÿ�.";
//	cin >> man.name;
//	cout << "������ �Է��Ͻÿ�.";
//	cin >> man.job;
//	cout << "��ȣ�� �Է��Ͻÿ�.";
//	cin >> man.tel;
//	cout << "�̸����� �Է��Ͻÿ�.";
//	cin >> man.email;
//	return man;
//};
//int main(void)
//{
//	namecard man;
//	cout << "�̸��� �Է��ϼ��� => ";
//	cin >> man.name;
//	cout << "������ �Է��ϼ��� => ";
//	cin >> man.job;
//	cout << "����ó�� �Է��ϼ��� => ";
//	cin >> man.tel;
//	cout << "�̸����� �Է��ϼ��� => ";
//	cin >> man.email;
//	cout << "\n �Է¹��� �����͸� ����մϴ�.";
//	cout << "\n �̸�\t����\t����ó\t�̸���";
//	cout << "\n===============================";
//	cout << "\n " << man.name << "\t" << man.job << "\t" << man.tel << "\t" << man.email;
//	cout << "\n===============================";
//	cout << "\n sizeof(namecard) => " << sizeof(namecard);
//	cout << "\n ����ü ������ �޸� ������ => " << sizeof(namecard) << endl;
//
//	namecard man;
//	cout << "�̸��� �Է��ϼ��� => ";
//	cin >> man.name;
//	cout << "������ �Է��ϼ��� => ";
//	cin >> man.job;
//	cout << "����ó�� �Է��ϼ��� => ";
//	cin >> man.tel;
//	cout << "�̸����� �Է��ϼ��� => ";
//	cin >> man.email;
//
//	namecard man = { "������","MCSE��������","418-9876","freentour@naver.com" };
//	cout << "\n �Է¹��� �����͸� ����մϴ�.";
//	cout << "\n �̸�\t����\t����ó\t�̸���";
//	cout << "\n===============================";
//	cout << "\n " << man.name << "\t" << man.job << "\t" << man.tel << "\t" << man.email;
//	cout << "\n===============================";
//	cout << "\n sizeof(namecard) => " << sizeof(namecard);
//	cout << "\n ����ü ������ �޸� ������ => " << sizeof(namecard) << endl;
//
//	namecard x = { "������","MCSE��������","418-9876","freentour@naver.com" };
//	namecard y = { "������","��������","551-6986","hk@naver.com" };
//	/*namecard z = { "�赿��","��ȹA���븮","318-3961","ds@naver.com" };*/
//	namecard z;
//	z = x;
//	cout << "\n �̸�\t����\t\t����ó\t\t�̸���";
//	cout << "\n============================================================";
//	cout << "\n " << x.name << "\t" << x.job << "\t" << x.tel << "\t" << x.email;
//	cout << "\n " << y.name << "\t" << y.job << "\t" << y.tel << "\t" << y.email;
//	cout << "\n " << z.name << "\t" << z.job << "\t" << z.tel << "\t" << z.email;
//	cout << "\n============================================================";
//
//	namecard x[3] = { { "������","MCSE��������","418-9876","freentour@naver.com" } , { "������","��������","551-6986","hk@naver.com" },{ "�赿��","��ȹA���븮","318-3961","ds@naver.com" } };
//	for (int i = 0; i < 3; i++) cout << "\n " << x[i].name << "\t" << x[i].job << "\t" << x[i].tel << "\t" << x[i].email;
//
//	namecard x[3] = { { "������","MCSE��������","418-9876","freentour@naver.com" } ,
//	{ "������","��������","551-6986","hk@naver.com" },
//	{ "�赿��","��ȹA���븮","318-3961","ds@naver.com" } };
//	for (int i = 0; i < 3; i++)
//		cout << "\n " << x[i].name << "\t" << x[i].job << "\t" << x[i].tel << "\t" << x[i].email;
//
//	namecard x[3];
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "�̸��� �Է��Ͻÿ�.";
//		cin >> x[i].name;
//		cout << "������ �Է��Ͻÿ�.";
//		cin >> x[i].job;
//		cout << "��ȣ�� �Է��Ͻÿ�.";
//		cin >> x[i].tel;
//		cout << "�̸����� �Է��Ͻÿ�.";
//		cin >> x[i].email;
//	}
//	for (int i = 0; i < 3; i++)
//		cout << x[i].name << "\t" << x[i].job << "\t" << x[i].tel << "\t" << x[i].email << endl;
//
//	namecard x = { "������","MCSE��������","418-9876","freentour@naver.com" };
//	namecard y = { "������","��������","551-6986","hk@naver.com" };
//	namecard z = { "�赿��","��ȹA���븮","318-3961","ds@naver.com" };
//	cout << "\n �̸�\t����\t\t����ó\t\t�̸���";
//	cout << "\n============================================================";
//	structPrn(x);
//	structPrn(y);
//	structPrn(z);
//	cout << "\n============================================================\n";
//
//	namecard x, y, z;
//	x = Strcinput();
//	y = Strcinput();
//	z = Strcinput();
//	cout << "\n �̸�\t����\t\t����ó\t\t�̸���";
//	cout << "\n============================================================";
//	structPrn(x);
//	structPrn(y);
//	structPrn(z);
//	cout << "\n============================================================\n";
//
//	namecard x[3];
//	for (int i = 0; i < 3; i++)
//		x[i] = Strcinput();
//	cout << "\n �̸�\t����\t\t����ó\t\t�̸���";
//	cout << "\n============================================================";
//	for (int i = 0; i < 3; i++)
//		structPrn(x[i]);
//	cout << "\n============================================================\n";
//
//	namecard x = { "������","ġ���ǻ�","356-0868","eldy@naver.com" };
//	namecard y = { "������","�����̳�","345-0876","onejee@naver.com" };
//	namecard* p;
//	p = &x;
//	cout << "\n �̸�\t����\t\t����ó\t\t�̸���";
//	cout << "\n============================================================\n";
//	cout << p->name << "\t" << p->job << "\t" << p->tel << "\t" << p->email << endl;
//	p = &y;
//	cout << p->name << "\t" << p->job << "\t" << p->tel << "\t" << p->email << endl;
//	cout << "============================================================\n";
//	cout << "\n sizeof(x) => " << sizeof(x);
//	cout << "\n sizeof(p) => " << sizeof(p) << endl;
//}
//
//// ����ü�� �̿��Ͽ� ����ǥ �����
//#include <iostream>
//using namespace std;
//struct student
//{
//	int id;
//	string name;
//	int kor;
//	int math;
//	int eng;
//	int total;
//	double ave;
//	char grade;
//	int sukcha;
//};
//int main(void)
//{
//	struct student ST[5];
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		cout << "�й��� �Է��Ͻÿ�. : ";
//		cin >> ST[i].id;
//		cout << "�̸��� �Է��Ͻÿ�. : ";
//		cin >> ST[i].name;
//		cout << "���� ������ �Է��Ͻÿ�. : ";
//		cin >> ST[i].kor;
//		cout << "���� ������ �Է��Ͻÿ�. : ";
//		cin >> ST[i].math;
//		cout << "���� ������ �Է��Ͻÿ�. : ";
//		cin >> ST[i].eng;
//		ST[i].total = ST[i].kor + ST[i].math + ST[i].eng;
//		ST[i].ave = ST[i].total / 3.0;
//		switch ((int)(ST[i].ave) / 10)
//		{
//		case 10:
//		case 9: ST[i].grade = 'A'; break;
//		case 8: ST[i].grade = 'B'; break;
//		case 7: ST[i].grade = 'C'; break;
//		case 6: ST[i].grade = 'D'; break;
//		default: ST[i].grade = 'F'; break;
//		}
//	}
//	for(i=0;i<5;i++)
//	{
//		ST[i].sukcha = 1;
//		for (j = 0; j < 5; j++)
//		{
//			if (ST[i].ave < ST[j].ave)
//				ST[i].sukcha++;
//		}
//	}
//	cout << "��  ȣ  ��  ��  ����  ����  ����  �հ�  ��� ���� ����\n";
//	for (i = 0; i < 5; i++)
//	{
//		cout << ST[i].id << "  " << ST[i].name << "  " << ST[i].kor << "  " << ST[i].eng << "  " << ST[i].math << "  " << ST[i].total << "  " << ST[i].ave << "  " << (char)(ST[i].grade) << "  " << ST[i].sukcha << endl;
//	}
//}
