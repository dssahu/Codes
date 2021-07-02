#include <iostream>
using namespace std;

int main() {
long long int m,n,count=0,temp;
cin>>m>>n;
while(m!=0)
{
if(m==n)
{
    break;
}
else if(n>m)
   {
       temp=m;
       m=n;
       n=temp;
   }
       
     for(int i=(m-1);i>=1;i--)
        {
            if(m%i==0)
            {
                m=i;
                count++;
                break;
            }
        }

}
cout<<count;
return 0;
}