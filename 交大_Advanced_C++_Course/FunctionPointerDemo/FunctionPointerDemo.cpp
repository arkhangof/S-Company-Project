// �o�O�@�� function pointer ���d��
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double pam (int);  // function prototype 
int main(int argc, _TCHAR* argv[])
{
	// Step 1: �ŧi�@�� function pointer
	double (*pf) (int);    

	pf=pam;

	// Step 2: �Q�� function pointer �I�s���d��
	int ans=(*pf)(123);

	cout << "ans="<<ans;
	return 0;
}

// pam function �w�q
double pam (int x){
	return  x*2.0;
}
