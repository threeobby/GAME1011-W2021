#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string m_name;
	int m_age;
public:
	//Constructor 
	Person() //Default Constructor 
	{
		m_name = "NONE";
		m_age = 0;
	}
	Person(string name1, int age1)
	{
		m_name = name1;
		m_age = age1;
	}
	int getAge()
	{
		return m_age;
	}
	string getName()
	{
		return m_name;
	}
};

struct Rectangle
{
	int width, height;
};

int main()
{
	Rectangle* pRect = nullptr;
	Person* pPerson = nullptr;

	Rectangle rect;
	pRect = &rect;

	pRect->height = 20;
	pRect->width = 5;

	cout << "Area of rectangle: " << pRect->width * pRect->height << endl;

	//dynamically allocated object access through pointers 
	pRect = new Rectangle;
	pRect->width = 6;
	pRect->height = 5;
	cout << "Area of rectangle: " << pRect->width * pRect->height << endl;
	delete pRect;
	pRect = nullptr;

	pPerson = new Person("Bobby Baxter", 20);

	cout << pPerson->getName() << " is " << pPerson->getAge() << " years old." << endl;
	delete pPerson;
	pPerson = nullptr;

	return 0;
}