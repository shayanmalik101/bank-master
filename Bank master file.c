#include<stdio.h>
#include<string.h>
#include<math.h>

struct new_acc{
	
	char name[150];
	char fname[300];
	int age;
	char adress[100];
	char phone[20];
	char nic[16];
	int blance;
	char sign[200];
	int atmpin;
	int id;
	char type[20];
	
}

new_account()
{

    
	int a=1,i;
	char atm[5];
	
	struct new_acc x[a+1];
	a++;
	x[a].id=0001;
	fflush(stdin);
	printf("Enter your name:");
	gets(x[a].name);
	fflush(stdin);
	
	printf("Enter your father's name:");
	gets(x[a].fname);
	fflush(stdin);
	printf("Enter your age:");
	scanf("%d",&x[a].age);
	fflush(stdin);
	printf("Enter your adress:");
	gets(x[a].adress);
	//scanf("%s",&x[a].adress);
	fflush(stdin);
	printf("Enter your phone number:");
	gets(x[a].phone);
	//scanf("% d",&x[a].phone);
	fflush(stdin);
	printf("Enter your nic number:");
	scanf("%s",&x[a].nic);
	printf("Enter the type of account you want to open:");
	scanf("%s",&x[a].type);
	fflush(stdin);
	printf("signature(use a 10 digit pasward):");
	fflush(stdin);
	scanf("%s",&x[a].sign);
	fflush(stdin);
	printf("Enter the amount from whic you want to open the account (500+):");
	scanf("%d",&x[a].blance);
	printf("You want to avail atm card services (yes/no):");
	fflush(stdin);
    scanf("%s",&atm);
    
	if (strcmp(atm, "yes")==0)
	{   
	   fflush(stdin);
	   printf("\nEnter pin for ATM(4 digit) :");
	   scanf("%d",&x[a].atmpin);
    }
    FILE *outfile; 
      
    char txt[]=".txt";
    char filename[50];
    strcpy(filename,x[a].name);
	strcat (filename,txt);
	 
    outfile = fopen (filename, "w"); 
    if (outfile == NULL) 
    { 
        fprintf(stderr, "\nError opend file\n"); 
       
    } 
  
	fprintf(outfile,"%s\n%s\n%d\n%s\n%s\n%s\n%s\n%d\n%s\n%d\n%s\n",x[a].name,x[a].fname,x[a].age,x[a].adress,x[a].nic,x[a].type,x[a].sign,x[a].blance,atm,x[a].atmpin,x[a].phone);
     
      
    if(fwrite != 0)  
        printf("contents to file written successfully !\n"); 
    else 
        printf("error writing file !\n"); 
  
     
    fclose (outfile);
    	
}
start_page()
{
	int choice;
	static int count=0;
	if(count==0)
	{
	  printf("Mr/Mrs Walking in customer please let us know what services you want to avail in the bank \n\n\tPress (1) for DEPOSITS \n\tPress (2) for CASH WITHDRAWAL\n\tPress (3) for ACCOUNT DETAILS \n\tPress (4) for ATM\n\tPress (5) for LOAN REQUEST\n\tPress (6) for NEW ACCOUNT OPENING   ");
    }
	printf("\n\nEnter your desired choice please::");
    scanf("%d",&choice);
    
     
    switch(choice)
    {
        case 1:
        
		
		     
            break;
        case 2:
        
		
		     
            break;
        case 3:
        
		
		    
            break;
        case 4:
        
		
		     
            break;
        case 5:
        
		
		     
            break;
        case 6:
        	
   		new_account();
		        
            break;
        
        default:
            count++;
		    printf("/nError(404)! choice dosen't fall in the list \n\n");
		    if(count<3){
			
		    start_page();
		     }
		    else
		    {
			   printf("\n\tError(404)! Too much wrong entries \n\n\t!!!! PLEASE GET OUT OF THE BANK  !!!!");
		    }
    }
}
int main()
{
	start_page();
	
	return 0;
}

