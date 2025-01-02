#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>
void wishme()
{
	
  time_t now = time(0);
    tm *time = localtime(&now);
    printf("\n Current date and time is : %s", ctime(&now));
    for(int j=1;j<4;j++)
	{
    	Beep(700,300);
	}
    
     if (time-> tm_hour >= 1 && time->tm_hour <= 6)
	{
	    	printf("\nIts quite late , Good night ");
	}
     else if (time-> tm_hour > 6 && time->tm_hour < 12)
	{
	    	printf("\nGood morning ");
	}
	 else if (time-> tm_hour >= 12 && time->tm_hour <= 16)
	{
	 	printf("\nGood afternoon ");
	}
	  else if (time-> tm_hour > 16 && time->tm_hour <= 19)
	{
	    	printf("\nGood evening ");
	}


}
int main()
{
   system("cls");
   printf("-----------------------------------------------------------------------------------------------------");
   printf("\n                           Hey, I am Virtual-X your virtual assistant                              ");
   printf("\n-----------------------------------------------------------------------------------------------------");
   printf("\n                                         WELCOME!                                                    ");
   printf("\n                                    I am here to help you                                           ");
   printf("\n-----------------------------------------------------------------------------------------------------");
   printf("\n-----------------------------------------------------------------------------------------------------");
   char psetting;
   char p[8],p1[8];
   char c[100];
   char ch[100]; 
   int x=1,y;
  for(x=1; x>0; x++ )
  {
  	printf("\nEnter password: ");
    gets(p);
	if (strcmp(p, "123") == 0)
  {
    printf("\nWelcome your access is granted ");
    wishme();
    for(y=1;y<2;y++)
	{
    	 printf("\n-----------------------------------------------------------------------------------------------------");
    	 printf("\n");
    	
	
	 while(1)
	 {
	 	 printf("\n-----------------------------------------------------------------------------------------------------");
		 printf("\nEnter your querry: ");
	 	 gets(c);
    	 if((strcmp(c,"hi" ) == 0) || (strcmp(c,"hello") == 0) || (strcmp(c,"hey") == 0))
    	 {
    	 	printf("\nHey , i hope you are good ");
		 }
		 
		 else if((strcmp(c,"exit" ) == 0) || (strcmp(c,"return") == 0) || (strcmp(c,"end") == 0))
    	 {
    	 	printf("\nThankyou ,have a nice day");
    	 	break;
		 }
		 
		 else if((strcmp(c,"open notepad"))==0 || (strcmp(c,"run notepad"))==0 || (strcmp(c,"open notes"))==0)
		 {
		 	printf("Sure! Opening Notepad...");
		 	system("C:\\Windows\\Notepad.exe");
		 	printf("\nDone!");
		 }
		 else if((strcmp(c,"open google"))==0 || (strcmp(c,"run google"))==0 || (strcmp(c,"open chrome"))==0 || (strcmp(c,"open google chrome"))==0 || ((strcmp(c,"run chrome"))==0 ))
		 {
		 	printf("Sure! Opening Google...");
		 	system("start https://www.google.com");
		 	printf("\nDone!");
		 }
		 else if((strcmp(c,"time"))==0)
		 {
		 	time_t now = time(0);
            tm *time = localtime(&now);
            printf("\n Current date and time is : %s", ctime(&now));
		 }
		 
		 
		  else if((strcmp(c,"open youtube"))==0 || (strcmp(c,"run youtube"))==0 || (strcmp(c,"turn on youtube"))==0 || (strcmp(c,"open yt"))==0)
		 {
		 	printf("Sure! Opening Youtube...");
		 	system("start https://www.youtube.com");
		 	printf("\nDone!");
		 }
		 else if((strcmp(c,"open instagram"))==0 || (strcmp(c,"run instagram"))==0 || (strcmp(c,"turn on instagram"))==0 || (strcmp(c,"open insta"))==0)
		 {
		 	printf("Sure! Opening Instagram...");
		 	system("start https://www.instagram.com");
		 	printf("\nDone!");
		 }
		 else if((strcmp(c,"open whatsapp"))==0 || (strcmp(c,"run whatsapp"))==0 || (strcmp(c,"turn on whatsapp"))==0 || (strcmp(c,"open whatsapp web"))==0)
		 {
		 	printf("Sure! Opening Whatsapp...");
		 	system("start https://web.whatsapp.com");
		 	printf("\nDone!");
		 }
		  else if((strcmp(c,"open facebook"))==0 || (strcmp(c,"run facebook"))==0 || (strcmp(c,"turn on facebook"))==0 || (strcmp(c,"open fb"))==0)
		 {
		 	printf("Sure! Opening Facebook...");
		 	system("start https://www.facebook.com");
		 	printf("\nDone!");
		 }
		 else if((strcmp(c,"open daraz"))==0 || (strcmp(c,"run daraz"))==0 || (strcmp(c,"turn on daraz"))==0 || (strcmp(c,"open daraz.pk"))==0)
		 {
		 	printf("Sure! Opening Daraz...");
		 	system("start https://www.daraz.pk");
		 	printf("\nDone!");
		 }
		else if((strcmp(c,"open wikipedia"))==0 || (strcmp(c,"run wikipedia"))==0 || (strcmp(c,"turn on wikipedia"))==0 || (strcmp(c,"open wiki"))==0)
		 {
		 	printf("Sure! Opening Wikipedia...");
		 	system("start https://www.wikipedia.org");
		 	printf("\nDone!");
		 }
		else if((strcmp(c,"open pinterest"))==0 || (strcmp(c,"run pinterest"))==0 || (strcmp(c,"turn on pinterest"))==0)
		 {
		 	printf("Sure! Opening Pinterest...");
		 	system("start https://www.pinterest.com");
		 	printf("\nDone!");
		 }
		 else if((strcmp(c,"open grammarly"))==0 || (strcmp(c,"run lygrammarly"))==0 || (strcmp(c,"turn on grammarly"))==0 || (strcmp(c,"open grammar"))==0)
		 {
		 	printf("Sure! Opening Grammarly...");
		 	system("start https://www.grammarly.com");
		 	printf("\nDone!");
		 }
		 else if((strcmp(c,"open github"))==0 || (strcmp(c,"run github"))==0 || (strcmp(c,"turn on github"))==0 || (strcmp(c,"launch github"))==0)
		 {
		 	printf("Sure! Opening Github...");
		 	system("start https://www.github.com");
		 	printf("\nDone!");
		 }
		 else if((strcmp(c,"open quora"))==0 || (strcmp(c,"run quora"))==0 || (strcmp(c,"turn on quora"))==0 || (strcmp(c,"launch quora"))==0)
		 {
		 	printf("Sure! Opening Quora...");
		 	system("start https://www.quora.com");
		 	printf("\nDone!");
		 }
		 else if((strcmp(c,"open google map"))==0 || (strcmp(c,"run google map"))==0 || (strcmp(c,"turn on google map"))==0 || (strcmp(c,"launch google map"))==0)
		 {
		 	printf("Sure! Opening Google Map...");
		 	system("start https://maps.google.com");
		 	printf("\nDone!");
		 }
		 else if((strcmp(c,"open fast university in google map")==0))
		 {
		 	printf("Sure! Opening Google Map...");
		 	system("start https://goo.gl/maps/eor7Ti2UQ2oTzwjNA");
		 	printf("\nDone!");
		 }
		 
		else
		  {
		  	printf("Sorry couldn't understand your querry please try again!!!");
		  }
	   }
   }
    break;
    
}
else
{
    printf("\nIncorrect password ");
}
}

	
  
  
	
	
	  
	  
  }
	



	   


   


