#include<iostream>
#include<cmath>
using namespace std;
int main()
{int p,q,t;
    cout<<"enter two paotive no's:";
    cin>>p>>q;
   	if (p%q==0)
   	{cout<<"lcm:"<<p;}
   	 	   
   	else if(q%p==0)  
	   {cout<<"lcm:"<<q;}
		 
	else if((p*q)%p-q==0)
	{
	 t=abs((p*q)/p-q);
     cout<<"lcm:"<<t<<endl;
    }
    else
    {
    	t=(p>q)? p:q;
    	do
    	{if(t%p==0&&t%q==0)
    	  {cout<<"lcm=="<<t;
    	   break;
		  }
		 else
		 {++t;
		 }
		}while(true);
        {return 0;
		}
	}
}

