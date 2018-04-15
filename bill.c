#include <stdio.h>
    void main ()
    {
        int number[10];
        int i, j, a;
        printf("******This is the List of students with respective number of gifts picked randomly******** \n");
        for (i = 0; i < 10; ++i)
	        {
			number[i]=(1+rand()%30);
			}
		for (i = 0; i < 10; ++i) 
            {
			printf("Student %d gets %d gifts \n",(i+1),number[i]);
			}
            printf("\n");
            int x;
            printf("Computing");
			for(x=0;x<5;x++)
            {
            	printf(".");
            	sleep(1);
			}
			printf("DONE!\n");
			int maxnumb,max;
            printf("*****************  Generating order of billed students :-*****************");
			printf("\n");
		    for (i = 0; i < 10; i++) 
            {
			maxnumb=number[i];
		    for (j = 0; j < 10; j++) 
            {
			  if(maxnumb<number[j])
				{
				max=j;
				maxnumb=number[j];		 
				
				} 
			}
			printf("Student %d with %d gifts \n",(max+1),number[max]);
			number[max]=0;
			sleep(2);
		}
        
	} 
    
