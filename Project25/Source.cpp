#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	MySharedPtr<int> pt2(new int(234));

	MySharedPtr<int> pt = pt2;
	cout << pt.get() << '-' << pt.GetCount() << endl;
	cout << pt2.get() << '-' << pt2.GetCount() << endl;

}