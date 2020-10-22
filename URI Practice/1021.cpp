#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){
	double n,fiftyc,twentyfivec,tenc,fivec,onec,temp;
    double hundred,fifty,twenty,ten,five,two,one;
    cin>>n;
    hundred=n/100;
    temp=fmod(n,100);
    fifty=temp/50;
    temp=fmod(temp,50);
    twenty=temp/20;
    temp=fmod(temp,20);
    ten=temp/10;
    temp=fmod(temp,10);
    five=temp/5;
    temp=fmod(temp,5);
    two=temp/2;
    temp=fmod(temp,2);
    one=temp/1;
    temp=fmod(temp,1);
    fiftyc=temp/.5;
    temp=fmod(temp,.5);
    twentyfivec=temp/.25;
    temp=fmod(temp,.25);
    tenc=temp/.1;
    temp=fmod(temp,.1);
    fivec=temp/.05;
    temp=fmod(temp,.05);
    onec=temp/.01;
    temp=fmod(temp,.01);

    cout<<"NOTAS:"<<endl;
    cout<<int(hundred)<<" nota(s) de R$ 100.00"<<endl;
    cout<<int(fifty)<<" nota(s) de R$ 50.00"<<endl;
    cout<<int(twenty)<<" nota(s) de R$ 20.00"<<endl;
    cout<<int(ten)<<" nota(s) de R$ 10.00"<<endl;
    cout<<int(five)<<" nota(s) de R$ 5.00"<<endl;
    cout<<int(two)<<" nota(s) de R$ 2.00"<<endl;
    
    cout<<"MOEDAS:"<<endl;
    cout<<int(one)<<" moeda(s) de R$ 1.00"<<endl;
    cout<<int(fiftyc)<<" moeda(s) de R$ 0.50"<<endl;
    cout<<int(twentyfivec)<<" moeda(s) de R$ 0.25"<<endl;
    cout<<int(tenc)<<" moeda(s) de R$ 0.10"<<endl;
    cout<<int(fivec)<<" moeda(s) de R$ 0.05"<<endl;
    cout<<int(onec)<<" moeda(s) de R$ 0.01"<<endl;

return 0;}