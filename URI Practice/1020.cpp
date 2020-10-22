#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,years,months,days,temp;
    cin>>n;
    years=n/365;
    temp=n%365;
    months=temp/30;
    temp=temp%30;
    days=temp;
    cout<<years<<" ano(s)\n"<<months<<" mes(es)\n"<<days<<" dia(s)"<<endl;
return 0;
	
}
