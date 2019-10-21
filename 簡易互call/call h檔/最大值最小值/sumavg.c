double avg(int *p)
{  
	int i;  double sum;  sum=0.0;  
	for (i=0; i<5; i++){    
		sum += *(p+i);  
	}  
	return sum/5;
} 

int sum(int t[])
{  
	int i, sum;  sum=0;    
	for (i=0; i<5; i++) {    
		sum += t[i];  
	}    
	return sum;
}
