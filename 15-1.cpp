#include <iostream>

using namespace std;

class Employee
{
	string name;
	string number;
	int date;
	
	public :
		
		Employee()
		{
			name = "Jepri";
			number = "";
			date = 0; 
			
		}
		
		Employee(string name, string number, int date)
		{
			this->name = name;
			this->number = number;
			this->date = date;
		}
		void setName(string name)
		{
			this->name = name;
		}
		void setNumber(string number)
		{
			this->number = number;
		}
		void setDate(int date)
		{
			this->date = date;
		}
		string ReturnName()
		{
			return name;
		}
		string ReturnNumber()
		{
			return number;
		}
		int ReturnDate()
		{
			return date;
		}	
};

class ProductionWorker : public Employee
{
	int shift;
	double rate;
	
	public :
		ProductionWorker()
		{
			shift = 0;
			rate = 0;
		}
		
		ProductionWorker(int shift, double rate)
		{
			this->shift = shift;
			this->rate = rate;
		}	
		
		void ShiftDetail()
		{
			if(this->shift == 1)
			{
				cout << "You worked the day shift." << endl;
			}
			if(this->shift == 2)
			{
				cout << "You worked the night shift." << endl;
			}
		}
		
		double rateo()
		{
			return rate;
		}
};

int main()
{
	ProductionWorker a(9,89);
	cout<<a.ReturnName();
	
	return 0;
}
