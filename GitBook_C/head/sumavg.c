int max(int t[])
{  
	int i, max=0;
	for (i=0; i<5; i++) {    
		if(t[i]>max)
		max= t[i];
	}    
	return max;
}

int min(int t[])
{  
	int i, min;
	min=t[0];
	for (i=0; i<5; i++) {    
		if(t[i] < min)
			min= t[i];
	}    
	return min;
} 

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
