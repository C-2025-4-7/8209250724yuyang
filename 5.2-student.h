class Student
{
public:
	Student();
	Student(int nu, const char* nm, char se);
	void set_value(int nu, const char* nm, char se);
	void display();
private:
	int num;
	char name[20];
	char sex;
};
