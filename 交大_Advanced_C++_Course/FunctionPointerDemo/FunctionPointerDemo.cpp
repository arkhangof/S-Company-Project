// 這是一個 function pointer 的範例
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double pam (int);  // function prototype 
int main(int argc, _TCHAR* argv[])
{
	// Step 1: 宣告一個 function pointer
	double (*pf) (int);    

	pf=pam;

	// Step 2: 利用 function pointer 呼叫的範例
	int ans=(*pf)(123);

	cout << "ans="<<ans;
	return 0;
}

// pam function 定義
double pam (int x){
	return  x*2.0;
}
