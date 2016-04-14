#include<iostream>
using namespace std;


class Solution {
public:
	int addDigits(int num) 
	{
		if( num <= 0 )
			return 0;
		int result = 0;
		int temp = num;
		while( temp )
		{
			result += temp % 10;
			while( result > 9)
				result = result / 10 + result % 10;
			
			temp /= 10 ;
		}
		return result;
	}
};


/*

 ͨ����������������ҵ����ɣ��� result = ��num - 1��%9 + 1
 �� 
 int addDigits(int num) 
 {
		return ��num - 1��%9 + 1;
 }
*/

int main()
{
	Solution test;
	cout << test.addDigits( 10 ) << endl;
	return 0;
}