class Bank
{  
    float getRateOfInterest()
	{
		return 0;
	}  
}  
class SBI extends Bank
{  
    float getRateOfInterest()
	{
		return 8.4f;
	}  
}  
class ICICI extends Bank
{  
    float getRateOfInterest()
	{
		return 7.3f;
	}  
}  
class AXIS extends Bank
{  
    float getRateOfInterest()
	{
		return 9.7f;
	}  
}  
class Example2
{  
    public static void main(String args[])
	{  
		Bank b;  
		b=new SBI();  
		System.out.println("SBI Rate of Interest: "+b.getRateOfInterest());  
		b=new ICICI();  
		System.out.println("ICICI Rate of Interest: "+b.getRateOfInterest());  
		b=new AXIS();  
		System.out.println("AXIS Rate of Interest: "+b.getRateOfInterest());  
	}  
}  
/*
output : 

		SBI Rate of Interest: 8.4
		ICICI Rate of Interest: 7.3
		AXIS Rate of Interest: 9.7
*/