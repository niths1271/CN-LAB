#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
#define bucketSize 500

void bucketInput(int a,int b) 
{
	if(a > bucketSize)
		cout<<"\n\t\tIncoming packet size "<<a<<" greater than bucket capacity so-PACKET REJECTED!!";
	else{
		sleep(5);
		while(a > b){
			cout<<"\n\t\t"<<"Packet of size "<<b<<" transmitted"<<"---Bytes Remaining to transmit= "<<a-b;
			a-=b;
			sleep(5);
		}
		if(a > 0) 
			cout<<"\n\t\t"<<"Packet of size "<<a<<" transmitted"<<"---Bytes Remaining to transmit= "<<0;
	}
}
int main() 
{
	int op,pktSize;
	cout<<"Enter output rate : "; 
	cin>>op;
	for(int i=1;i<=5;i++)					
	{
		sleep(rand()%10);
		pktSize=rand()%700;
		cout<<"\nPacket no "<<i<<"\tPacket size = "<<pktSize;
		bucketInput(pktSize,op);
	}
	cout<<endl;
	return 0;
}