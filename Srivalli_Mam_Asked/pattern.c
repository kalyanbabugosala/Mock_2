void patternchar()
	{
	
		int j,r,sp;

		for(r=1;r<=5;r++)
		{
			char ch='a';
			for(sp=5;sp>=r;sp--)
		   	{
		   		printf(" ");
		   	}
		   	for(j=1;j<=r;j++)
		   	{
		   		printf("%c",ch);
		   		ch++;
		   	}
		   	printf("\n");
		   	
		}  
	
	}
