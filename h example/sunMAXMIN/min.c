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

