#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a;
	cout << "�����뻪���¶�";
	cin >> a;
	cout << "ת����������¶�Ϊ" <<setprecision(4)<<(a - 32) / 1.8 << endl;
	return 0;
}

