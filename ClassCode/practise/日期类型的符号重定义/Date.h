#include<iostream>
using namespace std;

class Date
{
	friend ostream& operator<<(ostream& _cout, const Date& d);
	friend istream& operator>>(istream& _cin, Date& d);
public:
	//构造函数为入口，入口日期合法，后面都合法
	Date(int year = 2020, int month = 1, int day = 12)
	{
		//判断日期有效性和正确性
		if (year <= 0 || month <= 0 || month > 12 || day <= 0 || day > getDay(year, month))
		{
			this->_year = 1;
			this->_month = 1;
			this->_day = 1;
			cout << "日期非法，日期重置为 1 - 1 - 1 ！" << endl;
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
		if (this != &d) {//判断两个对象是否相同，不相同再进行操作
			this->_year = d._year;
			this->_month = d._month;
			this->_day = d._day;
		}
		return *this;
	}
	//注意： 带等号的操作符比如 += -= ++（前置） --（前置），我们用引用类型，改变它原本的值，返回这个引用类型
	//		 不带等号的操作符 我们不用引用类型，创建一个临时变量，修改临时变量的值，返回这个临时变量
	Date& operator+=(int days)
	{
		if (days < 0)
			return *this -= (-days);
		_day += days;
		while (_day > getDay(_year, _month))
		{
			_day -= getDay(_year, _month);//先减去这个月的天数，然后月份加一，再判断月份是否大于12
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
			//tmp._day += getDay(tmp._year, tmp._month - 1);//如果是1月呢？这么写是不合适的。
			_month--;
			if (_month == 0) {
				_month = 12;
				_year--;
				if (_year <= 0) {
					_year = 1;
					_month = 1;
					_day = 1;
					cout << "减数天数过于大，日期重置为 1 - 1 - 1" << endl;
					break;
				}
			}	
			_day += getDay(_year, _month);
		}
		return *this;
	}

	Date operator+(int days)
	{	
		//太过于繁琐
		/*Date tmp = *this;
		if (days < 0)
			return *this - (-days);
		tmp._day += days;
		while (tmp._day > getday(tmp._year,tmp._month))
		{
			tmp._day -= getday(tmp._year, tmp._month);//先减去这个月的天数，然后月份加一，再判断月份是否大于12
			++tmp._month;
			if (tmp._month == 13)
			{
				tmp._month = 1;
				++tmp._year;
			}
		}
		return tmp;*/
		//优化
		Date tmp(*this);//拷贝到临时变量上
		return tmp += days;
		//等同于
		/*tmp += days;
		return tmp;*/
	}

	Date operator-(int days)
	{
		//Date tmp = *this;
		//tmp._day -= days;
		//while (tmp._day <= 0) {
		//	//tmp._day += getDay(tmp._year, tmp._month - 1);//如果是1月呢？
		//	tmp._month--;//天数小于0说明时间到了上个月，这里先减一个月，然后判断月份是否小与等于0，年份小于等于0，最后加上减过之后（上个月）的天数。
		//	if (tmp._month == 0) {
		//		tmp._month = 12;
		//		tmp._year--;
		//		if (tmp._year <= 0) {
		//			tmp._year = 1;
		//			tmp._month = 1;
		//			tmp._day = 1;
		//			cout << "减数天数过于大，日期重置为 1 - 1 - 1" << endl;
		//			break;
		//		}
		//	}
		//	tmp._day += getDay(tmp._year, tmp._month);
		//}
		//return tmp;
		Date tmp(*this);
		return tmp -= days;
	}

	//这里注意前置的与后置的不同
	//前置的我们返回加1后的值，也就是*this指针
	//后置的我们返回加1之前的值，也就是创建的临时变量
	//++x
	Date& operator++(int days)
	{
		return *this += 1;//进位问题 会调用+= 来解决 
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
