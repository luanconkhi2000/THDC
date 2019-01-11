#include<iostream>
using namespace std;
int main()
{
	float s; //so tien gui ban dau 
	float lx; //lai xuat theo nam
	float kv; //so tien ki vong nhan duoc 
	int sn; //so nam can de dat so tien ki vong 
	cout<<"nhap vao so tien, lai xuat, so tien ki vong ";
	cin>>s>>lx>>kv;
	while(s<0||lx<0||kv<0||kv<s)
	{
		cout<<"ban da nhap sai xin moi nhap lai"<<endl;
		cout<<"nhap vao so tien, lai xuat, so tien ky vong ";
		cin>>s>>lx>>kv;
		
	}
	while ( s<= kv)
                {
                	s=s+(s*lx)/100;
                	sn++;
				}
				cout<<"sau"<<sn<<"nam thi ban da nhan duoc so tien la "<<kv<<endl;
		return 0;		
}
	
	
	
     

