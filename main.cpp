#include <iostream>
#include "platform.h"


using namespace std;

int main()
{
#if VC
	cout << "111111111" << endl;
#elif GNUC
	cout << "222222222" << endl;
#endif
	return 0;
}
