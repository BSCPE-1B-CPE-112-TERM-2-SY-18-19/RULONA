#include <iostream>

using namespace std;
	class cpe1b{ 
		public:
			long wasteful_number(long num); 
			void exam(long num[1000],long size);
			void descend_sort(long num[1000],long size);
			long binary(long x);
			
			long i,num[100],size,temp; 
			long factor,digit,temp2,j,num1,x,t,rem;
			long bin,temp3,rem2,base;
	};
int main() 
	{
		long i,inp[1000],size; 
		cpe1b final; 
		cout<<"Enter Numbers: ";  
		size=0; 
		for(i=0;;i++){ 
			cin>>inp[i];
			if(inp[i]==0){
				break; 
			}
			size++; 
		}
	cout<<"Lenght: "<<size;
	if(final.wasteful_number(size)==1){
		cout<<" WASTEFUL ni sir!"<<endl;
	}
	else{
		cout<<" Dili ni WASTEFUL sir! "<<endl;
	}
	final.exam(inp,size);
	
	cout<<"Binary: ";
	for (i=0; i<size; i++)
		{
			final.binary(inp[i]);
			
			
							}					
	}						
	
	long cpe1b::wasteful_number(long temp) {	
	num1=temp;
	x=num1;
	digit=0;
	for (;num1!=0;)
		{
		num1=num1/10;
		digit++;
		}
	t=0;
	j=2;
	factor=0;
	for (;x!=0;)
		{
		if (x%j==0)
			{
			x=x/j;
			rem=j;
			t++;
			factor++;
			if (x==1)
				{
				break;
				}
			}
		else
			{
			j++;
			}
		}
	if(factor>digit){	
			return 1; 
		}else{
			return 0; 
		}
	}
	void cpe1b::exam(long num[1000],long size){
		cpe1b final;
		if(final.wasteful_number(size)==1){
			
			cout<<"Sorted: ";
			final.descend_sort(num,size);
			cout<<endl; 
		}
		else
		{
			cout<<"Di Sorted: ";
			for(i=0;i<size;i++)
				{
					cout<<" "<<num[i]<<endl;
				}
		}
}

	void cpe1b::descend_sort(long num[1000],long size)
		{
			long temp2;
			for(i=0;i<size;i++)
				{
					for(j=i+1;j<size;j++)
						{
							if(num[i]<num[j])
								{
									temp2=num[i];
									num[i]=num[j];
									num[j]=temp2;
								}
						}		
				cout<<" "<<num[i];
			}
		}
		
		long cpe1b::binary(long x){
				temp3=x;
				bin=0;
				base=1;
				
				for (;temp3>0;){
					rem2=temp3%2;
					bin=bin+rem2*base;
					base = base*10;
					temp3=temp3/2;
				}
			cout<<bin<<endl;
}
