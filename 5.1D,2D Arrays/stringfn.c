#include<stdio.h> 
#include<string.h> 


void main() 
{
	
	char str1[10],str2[10],str3[10];
	
	int ch;
	char c;
	
	int result;
	
	printf("\nPls Enter String 1\n");
	gets(str1);
	printf("\nPls Enter String 2\n");
	gets(str2);
	
	
	do
	{
		printf("\nPress 1. for string Compare");
		printf("\nPress 2. for string Copy");
		printf("\nPress 3. for string Concaiting");
		printf("\nPress 4. for string Length");
		printf("\nPress 5. for string change");
		printf("\nPls Enter your Choice");
		scanf("%d",&ch);
	
	switch(ch)
	{
		
		case 1 :    // String Compare // BUIE - BUIE
					
						result = strcmp(str1,str2);
						if(result==0)
							printf("Strings are identical");
						else
							printf("Strings are not identical");
						break;
			
		case 2 :	// String Copy
						
						strcpy(str3,str1); // ------ BANKURA //  STRCPY(SA,SB)
						printf("First String is :");
						puts(str1);
						printf("Second String is :");
						puts(str2);
						printf("Third (copied from string 1) String is :");
						puts(str3);
						break;
        case 3 :    // String Concaiting   // Str 1 - BANKURA / Str 2 - BUIE
        				strcat(str1,str2);  // BANKURABUIE
        				puts(str1);
        				break;
   		case 4 :	// String length
   						puts(str1);
   						printf("\nLength Of String 1 is %d\n",strlen(str1));
   						puts(str2);
   						printf("\nLength Of String 1 is %d\n",strlen(str2));
   						break;
	    case 5 :	// String Change
	    				printf("\nPls Enter New String 1\n");
	    				fflush(stdin);
	    				gets(str1);
  						printf("\nPls Enter New String 2\n");
  						fflush(stdin);
	    				gets(str2);
	    				break;
	   
	  			
	} // End of switch
	
	printf("\nDo you wish to cont....");
	printf("\n Press Y to Cont or press any key to exit");
	fflush(stdin);
	scanf("%c",&c);
		
	} while(c=='Y' || c=='y');
	
	
	
}