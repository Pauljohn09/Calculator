/*
 * IncFile1.h
 *
 * Created: 22-08-2024 10:45:01
 *  Author: YADHU KRISHNA T
 */ 


#ifndef INCFILE1_H_
#define INCFILE1_H_
void mul()
{
	int a[32];
	int b[32];
	int n;
	int i=0;
	int r;
	while(n!=0)
	{
		r=n%2;
		a[i]=r;
		n=n/2;
		i++;
	}
	for(int j=n-i;j>0;j--)
	{
		b[j]=a[i];
	} 
	
	
}




#endif /* INCFILE1_H_ */