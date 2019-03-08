#include <iostream> 
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	//global//
	
class cpe1b{
	public:
	void palindromic_prime(long x); 
	void wasteful_number(long x);
	long prime(long num); 
	long binary(long num1);
	long reverse(long num2);
	long digit(long num3);
	long primefactorization(long num4);
	long j,count,x;
	long temp, bin, base, rem; 
	long rev, temp2, key;
	long brian, digits;
	long factors,t,i;
	long rem1[100];
	long charl;
	};
			
int main() {
cpe1b guwapo;
		long num;
		long i;
		string str;
	cin>>str;
	cout << "The size of str is " << str.length() << " bytes.\n";
	
// EXAM
if (str.length()%2==0){
	for (i=2;i<=str.length();i++){
	guwapo.wasteful_number(i);
						}
	}
else{
	for (i=1;i<=str.length();i++){
	guwapo.palindromic_prime(i);
						}
	}
return 0;
			}


void cpe1b::palindromic_prime(long x){
	cout<<"\nPALINDROMIC PRIME???"<<endl;
	prime(x);
	cout<<"Number: "<<x<<endl;
}
void cpe1b::wasteful_number(long x){
	cout<<"\nWASTEFUL NUMBER???"<<endl;
	digit(x);
if (digits<factors){
	cout<<"Yes, It is a WASTEFUL NUMBER!"<<endl;	
	cout<<"Number: "<<x<<endl;
		}
else{
	cout<<"NOT a WASTEFUL NUMBER"<<endl;
	cout<<"Number: "<<x<<endl;
}
							}


long cpe1b::prime(long num){

/* PRIME */
count = 0;
	for (j=2;j<num;j++){
		if (num%j==0){
			count++;
			}
						}
if (count==0){
		cout<<"   PRIME"<<endl;
		binary(num);
			}		
else{
	cout<<"   COMPOSITE"<<endl;
		cout<<"NOT A PALINDROMIC PRIME"<<endl;
	}
							}
							
							
long cpe1b::binary(long num1){

/* BINARY */
/*	prlongf("PRIME: %ld \n",pdnum[i]); */
temp = num1;
bin=0;
base = 1;
	for (;temp>0;){
		rem=temp%2;
		bin=bin+rem*base;
		base = base*10;
		temp=temp/2;
		}
cout<<"   BINARY: "<<bin<<endl;
reverse(bin);
							}
							
							
long cpe1b::reverse(long num2){

/*REVERSE*/
key=num2;
temp2=0;
rev=0;
	for (;key!=0;){
		temp2=key%10;
		key=key/10;
		rev=temp2+(rev*10);
	}
cout<<"   REVERSE: ";
cout<<rev<<endl;
	if (rev==num2){
		cout<<"Yes, It is a PALINDROMIC PRIME!"<<endl;
	}
else{
	cout<<"NOT A PALINDROMIC PRIME!!"<<endl;
	}
							}
							
							
long cpe1b::digit(long num3){
brian=num3;
charl=num3;
digits = 0;

for (;brian!=0;){
		brian=brian/10;
		digits++;
	}
cout<<"Number of digit: "<<digits<<endl;
primefactorization(charl);
						}


long cpe1b::primefactorization(long num4){
x=num4;
factors=0;
i=2;
t=0;

for (;x!=0;) {
	if (x%i==0){
		x=x/i;
		rem1[t]=i;
		t++;
		factors++;
	if (x==1){
		break;
		}			
	}
else{
i++;
	}
			}
			
	cout<<"   Factor/s: ";
for (i=0;i<factors;i++){
	
	
	cout<<rem1[i]<<" ";
	}
cout<<"   \nNumber of factor/s: "<<factors<<endl;
								}

