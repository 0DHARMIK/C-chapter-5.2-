#include<iostream>
using namespace std;

class sub{
	public:
		int x;
		void setdata(int x)
		{
			this->x = x;
		}
		
		operator<(sub& sub)
		{
			return x < sub.x;
		}
};
main()
{
	sub s,s1,s2,s3;
	s.setdata(4);
	s.setdata(5);
	if(s<s1)
	{
		cout<<"s1 is big"<<endl;
	}
	else
	{
		cout<<"s is big"<<endl;
	}
}