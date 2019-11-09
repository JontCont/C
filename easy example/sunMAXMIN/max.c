int max(int t[])
{  
	int i, max=0;
	for (i=0; i<5; i++) {    
		if(t[i]>max)
		max= t[i];
	}    
	return max;
}

