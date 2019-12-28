void BubSort(int A[], int n)  
{
	int i, j , k,t=1, Temp;
    for (i=n-1; i>0; i--)
    {
		for (j =0; j <=i; j++)
			if (A[j] > A[j+1])
			{ 
				Temp = A[j];
				A[j] = A[j+1];
				A[j+1] = Temp;
			}          
	}
}