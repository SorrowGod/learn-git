#include<iostream>
#include<string>
#include<list>
using namespace std;
class Person
{
public:
	Person(string name, int age, int hight)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Hight = hight;
	}
	string m_Name;
	int m_Age;
	int m_Hight;
};
bool compare(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Hight > p2.m_Hight;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
}
void test()
{
	list<Person>L;
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << "年龄：" << (*it).m_Age << "身高：" << (*it).m_Hight << endl;
	}
	cout << "---------------------------------------" << endl;
	cout << "排序后：" << endl;
	L.sort(compare);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << "年龄：" << (*it).m_Age << "身高：" << (*it).m_Hight << endl;
	}
}
int main()
{
	test();
	system("pause");
	return 0;
}