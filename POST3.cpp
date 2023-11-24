#include<iostream>

using namespace std;

class Post3
{
	private:
		int a;
		int b;
	public:
		Post3(int ca, int cb)
		{
			a = ca;
			b = cb;
		}
		
		int plus()
		{
			cout<<a+b;
		}
};

int main()
{
	int ca, cb;
	cin>>ca>>cb;
	Post3 a(ca, cb);
	a.plus();
} 
