#include<stdio.h>

void main(){
	int choice;
	printf("What's your interest ?\n");
	printf("1.Movies\n");
	printf("2.Series\n");

	printf("Enter Your Choice :");
	scanf("%d",&choice);

	switch(choice){
		
		case 1:
			int movie;
			printf("Movie you wish to watch today\n");
			printf("1.Founder\n");
   			printf("2. Snowden\n");
   			printf("3.Jobs\n");
   			printf("4.Her\n");
			printf("5.Social Network\n");
                        printf("6.Wall-E\n");
			printf("Which Movie You Want To See:");
			scanf("%d",&movie);

			switch(movie){
				
				case 1:
					printf("User want to see 'Founder' movie\n");
					break;

				case 2:
					printf("User want to see 'Snowden' movie\n");
					break;

				case 3:
					printf("User want to see 'Jobs' movie\n");
					break;
			
				case 4:
					printf("User want to see 'Her' movie\n");
					break;

				case 5:
					printf("User want to see 'Social Network' movie\n");
					break;

				case 6:
					printf("User want to see 'Wall-E' movie\n");
					break;

				default :
                                        printf("You Choose Wrong Choice.\n");


			}
			break;
		
		case 2 :
			int series;
			printf("Best Series to watch\n");
                        printf("1.Silicon vally\n");
                        printf("2.Devs\n");
                        printf("3.the IT crowd\n");
                        printf("4.Mr Robot\n");
			printf("Which Series You Want To See : ");
			scanf("%d",&series);

			switch(series){

	       	                case 1:
                                        printf("User want to see 'Silicon vally' movie\n");
                                        break;

                                case 2:
                                        printf("User want to see 'Devs' movie\n");
                                        break;

                                case 3:
                                        printf("User want to see 'The IT Crowd' movie\n");
                                        break;

                                case 4:
                                        printf("User want to see 'Mr Robot' movie\n");
                                        break;

				default :
					printf("You Choose Wrong Choice.\n");
                                       
                        }


                        break;

		default :
			printf("You Entered Wrong Input.\n");	
		
	}

}
