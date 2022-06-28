#include<iostream>
#include<string>
using namespace std;

class Person
{
	protected:
		string Name;
		int Age;
		char gender;

	public:
		Person() {}
		Person(string a, int b, char c)
		{  
			a=Name;
			b=Age;
			c=gender;
		}
		string getName() { return Name;}
		int getAge() { return Age;}
		char getgender() {return gender;}

};

class Employee : public Person
{
    protected:
	    string emailid;
	    string role;
	    int salary;

    public:
	    Employee() {}
	    Employee(string a, int b, char c, string e, string r, int s):Person(a,b,c)
	{
		emailid=e;
		role=r;
		salary=s;
	}
	    void display()
	    {
		    cout<<"employee details"<<endl;
		    cout<<"name"<<Name<<endl;
		    cout<<"age"<<Age<<endl;
		    cout<<"gender"<<gender<<endl;
		    cout<<"email"<<emailid<<endl;
		    cout<<"role"<<role<<endl;
		    cout<<"salary"<<salary<<endl;
	    }

};

int main()
{
	Employee E("vishakha",25,'F',"vishakhas341","associate",25000);
	E.display();
	 return 0;
}

