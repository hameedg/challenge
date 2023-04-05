#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int countdigits(int x){
    int res=0;
    while(x >0)
    {
        x=x/10;
        res++;

    }
    return res;

}
bool palindrome(int x){
    int temp=x,rev=0;
    while(temp!=0)
    {
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
    }
    return (rev==x);

}

int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
//digits in a factorial
// the approach is simple as the concept is as
// log(1 to 9) =0 meaning number of digits=1
// log(10 to 99 )=1 meaning number of digits=2
 int digitsInFactorial(int N)
    {
        double sum = 0;
        //this is basically
        //log(n!)= log1 + log2 ......
        for(int i = 1; i <= N; i++)
            sum = sum + log10(i);//base 10
            
        return floor(sum) + 1;
    }
int fact_rec(int x){
    if(x==0) return 1;

    return x*fact_rec(x-1);
}
//trailing zero is actually a cool concept in which the naive method is considered by calculating the factorial which might encounter overflow at timws so better approach is simply considering number of 2's and 5's and 10's this makes 
int trailing(int x){
  int res=0;
  for(int i=5;i<=x;i=i*5){
    res=res+(x/i);

  } 
  return res;
}
//gcd
int gcd(int a,int b){

    //this also has a scratch method i.e. consider min of a and b then by further subtarction
    //logic
    //min(a,b) ----- while(res>0) ---- a%res ==0 && b%res ==0 break------ res- --
    //
    if(b==0) return a;
    else return gcd(b,a%b);
}
//lcm
int lcm(int a,int b){
    int c=gcd(a,b);
    return (a*b)/c;
}

// check for prime is in itself an important procedure for solving high level problems
// naive:: iterate the loop and later count each number whether it is divisible or not
// better:: as we know that for every to there has a fro in the same sense 
//            pair is key here as in 15 x 2 meaning 2 and 15 but to know if its not a prime 2 is enough
//  therefore the time complexity comes out to be sqrt(n)
//best :: removing 2 and 3 factors to make it simple and hop it for every 5th point as


//logic behind the case for explicity handelling 2 and 3 is 
//consider 84 as a given number
//now according to better algorithm √n are the minimum checks to configure that its not a prime √84=9.3 therefore we need atleast 10 checks
// 2 3 4 5 6 7 8 9 10
//but by further optimization i.e. removing factors of 2 and 3
//5 7 only (n%i) && (n%(i+2))
bool isPrime(int x){
    if(x==1) return false;
    if(x==2 || x==3) return true ;
    if(x%2==0 || x%3==0) return false;

    for(int i=5;i*i<=x;i=i+6){
        if(x%i==0 || x%(i+2)==0){
            return false;
        }
    }
    return true;
}
void prime_factors(int n){
    int x=n;
    while(x%2==0){
        cout<<2<<" ";
        x=x/2;
    }
    while(x%3==0){
        cout<<3<<" ";
        x=x/3;
    }
    for(int i=5;i*i<=x;i=i+6){
        while(x%i==0){
            cout<<i<<" ";
            x=x/i;
        }
        while(x%(i+2)==0){
            cout<<i+2<<" ";
            x=x/(i+2);
        }
    }
    if(x>3) cout<<x<<" ";
}
 void printDivisors(int n)
{
	int i = 1;
	for(i=1; i*i < n; i++)
	{
		if(n % i == 0)
		{
			cout<<i<<" ";
		}
	}

	for(; i >= 1; i--)
	{
		if(n % i == 0)
		{
			cout<<(n / i)<<" ";
		}
	}
}
int main()
{
    int n,a,b;
    cout<<"enter::";
    cin>>n>>a>>b;
    //cout<<(bool)palindrome(n);
    //cout<<countdigits(n);
    //cout<<factorial(n);
    //cout<<fact_rec(n);
    //cout<<trailing(n);
    //cout<<gcd(a,b);
    //cout<<lcm(a,b);
    //cout<<isPrime(n);
    //cout<<digitsInFactorial(n);
    //prime_factors(n);
    printDivisors(n);

 return 0;
}

//problems to revise from cpp programming are modulo sum and product
//handling overflow
//10^9 models
