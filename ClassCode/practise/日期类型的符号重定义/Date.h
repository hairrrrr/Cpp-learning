#include<iostream>
using namespace std;

class Date
{
	friend ostream& operator<<(ostream& _cout, const Date& d);
	friend istream& operator>>(istream& _cin, Date& d);
public:
	//���캯��Ϊ��ڣ�������ںϷ������涼�Ϸ�
	Date(int year = 2020, int month = 1, int day = 12)
	{
		//�ж�������Ч�Ժ���ȷ��
		if (year <= 0 || month <= 0 || month > 12 || day <= 0 || day > getDay(year, month))
		{
			this->_year = 1;
			this->_month = 1;
			this->_day = 1;
			cout << "���ڷǷ�����������Ϊ 1 - 1 - 1 ��" << endl;
		}
		this->_year = year;
		this->_month = month;
		this->_day = day;
	}
	int getDay(int year, int month)
	{
		static int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		int day = days[month - 1];
		if (month == 2)
		{
			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
				++day;
		}
		return day;
	}
	Date(const  Date& d)

		:_year(d._year)
		, _month(d._month)
		, _day(d._day)
	{}

	Date operator=(const Date& d) {
		if (this != &d) {//�ж����������Ƿ���ͬ������ͬ�ٽ��в���
			this->_year = d._year;
			this->_month = d._month;
			this->_day = d._day;
		}
		return *this;
	}
	//ע�⣺ ���ȺŵĲ��������� += -= ++��ǰ�ã� --��ǰ�ã����������������ͣ��ı���ԭ����ֵ�����������������
	//		 �����ȺŵĲ����� ���ǲ����������ͣ�����һ����ʱ�������޸���ʱ������ֵ�����������ʱ����
	Date& operator+=(int days)
	{
		if (days < 0)
			return *this -= (-days);
		_day += days;
		while (_day > getDay(_year, _month))
		{
			_day -= getDay(_year, _month);//�ȼ�ȥ����µ�������Ȼ���·ݼ�һ�����ж��·��Ƿ����12
			++_month;
			if (_month == 13)
			{
				_month = 1;
				++_year;
			}
		}
		return *this;
	}

	Date& operator-=(int days)//
	{
		if (days < 0)
			return *this += (-days);
		_day -= days;
		while (_day <= 0) {
			//tmp._day += getDay(tmp._year, tmp._month - 1);//�����1���أ���ôд�ǲ����ʵġ�
			_month--;
			if (_month == 0) {
				_month = 12;
				_year--;
				if (_year <= 0) {
					_year = 1;
					_month = 1;
					_day = 1;
					cout << "�����������ڴ���������Ϊ 1 - 1 - 1" << endl;
					break;
				}
			}	
			_day += getDay(_year, _month);
		}
		return *this;
	}

	Date operator+(int days)
	{	
		//̫���ڷ���
		/*Date tmp = *this;
		if (days < 0)
			return *this - (-days);
		tmp._day += days;
		while (tmp._day > getday(tmp._year,tmp._month))
		{
			tmp._day -= getday(tmp._year, tmp._month);//�ȼ�ȥ����µ�������Ȼ���·ݼ�һ�����ж��·��Ƿ����12
			++tmp._month;
			if (tmp._month == 13)
			{
				tmp._month = 1;
				++tmp._year;
			}
		}
		return tmp;*/
		//�Ż�
		Date tmp(*this);//��������ʱ������
		return tmp += days;
		//��ͬ��
		/*tmp += days;
		return tmp;*/
	}

	Date operator-(int days)
	{
		//Date tmp = *this;
		//tmp._day -= days;
		//while (tmp._day <= 0) {
		//	//tmp._day += getDay(tmp._year, tmp._month - 1);//�����1���أ�
		//	tmp._month--;//����С��0˵��ʱ�䵽���ϸ��£������ȼ�һ���£�Ȼ���ж��·��Ƿ�С�����0�����С�ڵ���0�������ϼ���֮���ϸ��£���������
		//	if (tmp._month == 0) {
		//		tmp._month = 12;
		//		tmp._year--;
		//		if (tmp._year <= 0) {
		//			tmp._year = 1;
		//			tmp._month = 1;
		//			tmp._day = 1;
		//			cout << "�����������ڴ���������Ϊ 1 - 1 - 1" << endl;
		//			break;
		//		}
		//	}
		//	tmp._day += getDay(tmp._year, tmp._month);
		//}
		//return tmp;
		Date tmp(*this);
		return tmp -= days;
	}

	//����ע��ǰ�õ�����õĲ�ͬ
	//ǰ�õ����Ƿ��ؼ�1���ֵ��Ҳ����*thisָ��
	//���õ����Ƿ��ؼ�1֮ǰ��ֵ��Ҳ���Ǵ�������ʱ����
	//++x
	Date& operator++(int days)
	{
		return *this += 1;//��λ���� �����+= ����� 
	}
	//x++
	Date operator++()
	{
		Date tmp(*this);
		*this += 1;
		return tmp;
	}
	//--x
	Date& operator--(int days)
	{
		return *this-= 1;
	}
	//x--
	Date operator--()
	{
		Date tmp(*this);
		*this -= 1;
		return tmp;
	}

	bool operator>(const Date& d)const
	{
		if (_year > d._year)
			return true;
		else if (_year == d._year)
		{
			if (_month > d._month)
				return true;
			else if (_month == d._month)
			{
				if (_day > d._day)
					return true;
			}
		}
		return false;
	}

	bool operator==(const Date& d)const
	{
		return (_year == d._year) && (_month == d._month) && (_day == d._day);
	}
	bool operator>=(const Date& d)const
	{
		return (*this > d) || (*this == d);
	}

	bool operator<(const Date& d)const
	{
		return !(*this >= d);
	}

	bool operator<=(const Date& d)const
	{
		return !(*this > d);
	}
	
	bool operator!=(const Date& d)const
	{
		return !(*this == d);
	}
private:
	int _year;
	int _month;
	int _day;
};
