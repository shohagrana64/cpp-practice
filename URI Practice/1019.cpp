#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,hrs,mins,secs,temp;
    cin>>n;
    hrs=n/3600;
    temp=n%3600;
    mins=temp/60;
    temp=temp%60;
    secs=temp;
    cout<<hrs<<":"<<mins<<":"<<secs<<endl;
return 0;
	
}
