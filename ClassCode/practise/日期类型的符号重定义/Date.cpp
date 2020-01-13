#include"L1.h"
ostream& operator<<(ostream& _cout, const Date& d)
{
	_cout << d._year << "-" << d._month << "-" << d._day << endl;
	return _cout;
}
istream& operator>>(istream& _cin, Date& d)
{
	_cin >> d._year >> d._month >> d._day;
	return _cin;
}
void testDate() {
	Date d(2020,1, 2);
	Date d2(2020, 1, 3);
	//cout <<"=="<<(d == d2)<< endl;
	//cout << "!=" << (d != d2) << endl;
	//cout << ">" << (d > d2) << endl;
	//cout << "<" << (d < d2) << endl;
	//cout << ">=" << (d >= d2) << endl;
	//cout << "<=" << (d <= d2) << endl;
}
int main() {
	testDate();
	return 0;
}
