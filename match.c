#include <stdio.h>
#include <conio.h>

int main() {
  char venue[50];
  char timing[50];
  char stadium[50];
  int team;
  char team1[50];
  char team2[50];
  char namesbt1[6][50];
  char namesbw1[5][50];
  char namesbt2[6][50];
  char namesbw2[5][50];
  int sbt1[6];
  int sbwt1[5];
  int sbt2[6];
  int sbwt2[5];
  int wic1[5];
  int wic2[5];
  int i;
  int toss;
  int overs;
 
  int extras1;
  int extras2;
  int size1;
  int size2;
  int size3;
  int size4;
  int size5;
  int size6;
  int sum3 =0;
  int sum4 = 0;
  int sum1 =0;
  int sum2 = 0;
  float rate1;
  float rate2;
  char manmatch[50];
 
    printf("*************CRICKET MATCH SUMMARY APP************\n");
  	
  	printf("Enter match venue: ");
  	fflush(stdin);
  	gets(venue);
  	printf("Enter stadium name: ");
  	fflush(stdin);
  	gets(stadium);
  	printf("Enter match timing: ");
  	fflush(stdin);
  	gets(timing);

    printf("Enter the Team 1 name: ");
   	gets(team1);
   // Remove the trailing newline
    printf("Team 1: %s\n", team1);
    printf("Enter 6 batsman names:\n");

    for (i = 0; i < 6; i++) {
      printf("Name %d: ", i + 1);
      	  fflush(stdin);	
	      gets(namesbt1[i]);
	      printf("Enter Score from %s : ",namesbt1[i]);
	      scanf("%d",&sbt1[i]);
    }
     printf("Enter 5 bowlers names:\n");
    for (i = 0; i < 5; i++) {
      printf("Name %d: ", i + 1);
      fflush(stdin);
      gets(namesbw1[i]);
      printf("Enter Score from %s : ",namesbw1[i]);
	  scanf("%d",&sbwt1[i]);
	  printf("Enter Wickets from %s : ",namesbw1[i]);
	  scanf("%d",&wic1[i]);
    }

    printf("\nEntered Batsmans:\n");

    for (i = 0; i < 6; i++) {
      printf("%d. %s\n", i + 1, namesbt1[i]);
    }
    printf("\nEntered Bowlers:\n");

    for (i = 0; i < 5; i++) {
      printf("%d. %s\n", i + 1, namesbw1[i]);
    }
    printf("Enter the Team 2 name: ");
    fflush(stdin);
    gets(team2);
    printf("Team 2: %s\n", team2);
    printf("Enter 6 batsman names:\n");

    for (i = 0; i < 6; i++) {
      printf("Name %d: ", i + 1);
      fflush(stdin);
      gets(namesbt2[i]);
      printf("Enter Score from %s : ",namesbt2[i]);
	  scanf("%d",&sbt2[i]);
 }
     printf("Enter 5 bowlers names:\n");
    for (i = 0; i < 5; i++) {
      printf("Name %d: ", i + 1);
      fflush(stdin);
      gets(namesbw2[i]);
      printf("Enter Score from %s : ",namesbw2[i]);
	  scanf("%d",&sbwt2[i]);
	  printf("Enter Wickets from %s : ",namesbw2[i]);
	  scanf("%d",&wic2[i]);
    }

    printf("\nEntered Batsmans:\n");

    for (i = 0; i < 6; i++) {
      printf("%d. %s\n", i + 1, namesbt2[i]);
    }
    printf("\nEntered Bowlers:\n");

    for (i = 0; i < 5; i++) {
      printf("%d. %s\n", i + 1, namesbw2[i]);
    }
  
  printf("Enter Winner of the toss (1|2) : ");
  scanf("%d",&toss);
  printf("Enter total overs of the match : ");
  scanf("%d",&overs);
  printf("Enter Extras of team 1 : ");
  scanf("%d",&extras1);
  printf("Enter Extras of team 2 : ");
  scanf("%d",&extras2);
  printf("Winner of the toss %d\n",toss);
  printf("Total overs of the match %d\n", overs);
  
  size1 = sizeof(sbt1) / sizeof(sbt1[0]); 
  size2 = sizeof(sbwt1) / sizeof(sbwt1[0]); 
  size3 = sizeof(sbt2) / sizeof(sbt2[0]); 
  size4 = sizeof(sbwt2) / sizeof(sbwt2[0]); 
  size5 = sizeof(wic1) / sizeof(wic1[0]); 
  size6 = sizeof(wic2) / sizeof(wic2[0]); 
 
  for (i = 0; i < size1; i++) {
        sum1= sum1 + sbt1[i];
    }

	for (i = 0; i < size2; i++) {
        sum1  = sum1 + sbwt1[i];
    }
    
    for (i = 0; i < size3; i++) {
        sum2 = sum2 + sbt2[i];
    }
	for (i = 0; i < size4; i++) {
        sum2 = sum2 + sbwt2[i];
    }
    
     for (i = 0; i < size5; i++) {
        sum3 =sum3 + wic1[i];
    }
	for (i = 0; i < size6; i++) {
        sum4 = sum4 + wic2[i];
}

printf("Score from team 1: %d\n",sum1);
printf("Score from team 2: %d\n",sum2);
printf("Wickets from team 1: %d\n",sum3);
printf("Wickets from team 2: %d\n",sum4);
sum1 = sum1 +extras1;
sum2 = sum2 + extras2;
rate1 = sum1/overs;
rate2 = sum2/ overs;
printf("\n*****************************************************\n");
printf("_____________________STATISTICS________________________\n");
printf("MATCH VENUE : %s\n", venue);
printf("STADIUM : %s\n", stadium);
printf("TIMING : %s\n", timing);
printf("Total Overs: %d\n", overs);
printf("Total Score from Team 1: %d\n", sum1);
printf("Total Score from Team 2: %d\n", sum2);
printf("Total Wickets from Team 1: %d\n", sum3);
printf("Total Wickets from Team 2: %d\n", sum4);
printf("RUNRATE of Team 1: %.1f\n",rate1);
printf("RUNRATE of Team 2: %.1f\n",rate2);
if (sum1 > sum2){
	printf("Winner of the match is Team %s\n", team1);
}
else if(sum2 > sum1){
	printf("Winner of the match is Team %s\n", team2);
}
else{
	printf("Match tied");
}
//printf("MAN OF THE MATCH : %s",manmatch);

return 0;

}
