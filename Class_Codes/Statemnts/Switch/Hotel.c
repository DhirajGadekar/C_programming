#include<stdio.h>

void main(){
	
	printf("\n*** PARADISE BIRYANI HOUSE ***\n\n");

	int Choice;
	printf("1.BIRYANI \n");
	printf("2.STARTERS \n");
	printf("3.KEBABS \n");
        printf("4.CURRIES \n");
        printf("5.INDIAN BREADS \n\n");
	
	while(1){
	printf("Enter your Choice : ");
	scanf("%d",&Choice);

	switch(Choice){
		
		case 1:
			printf("\n\n*** BIRYANI ***\n\n");

			int biryani;
			printf("1.NON-VEG BIRYANI \n");
			printf("2.VEG BIRYANI \n\n");
							
			printf("Enter Your Choice : ");
			scanf("%d",&biryani);

			switch(biryani){
				
				case 1:
					int nvbiryani;
					
					printf("\n      NAME                                PRICE\n");

					printf("\n1.CHICKEN BIRYANI                  -      150.Rs\n");
                                        printf("2.MUTTON BIRYANI                   -      180.Rs\n");
                   	                printf("3.EGG BIRYANI                      -      120.Rs\n");
             		 	        printf("4.FAMILY PACK CHICKEN BIRYANI      -      500.Rs\n");
                		        printf("5.FAMILY PACK MUTTON BIRYANI       -      650.Rs\n");
                		        printf("6.SPECIAL CKICKEN BIRYANI          -      190.Rs\n");
 		                        printf("7.SPECIAL MUTTON BIRYANI           -      250.Rs\n\n");
                                        
				        printf("Enter your choice : ");
					scanf("%d",&nvbiryani);
					
					if(nvbiryani == 1){
                             			printf("\nYour order for 'CHICKEN BIRYANI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
					}	
					else if(nvbiryani == 2){
                                                printf("Your order for 'MUTTON BIRYANI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        }       
					else if(nvbiryani == 3){
                                                printf("Your order for 'EGG BIRYANI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        }       
					else if(nvbiryani == 4){
                                                printf("Your order for 'FAMILY PACK CHICKEN BIRYANI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        }       
					else if(nvbiryani == 5){
                                                printf("Your order for 'FAMILY PACK MUTTON BIRYANI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        }       
					else if(nvbiryani == 6){
                                                printf("Your order for 'SPECIAL CHICKEN BIRYANI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        }       
					else if(nvbiryani == 7){
                                                printf("Your order for 'SPECIAL MUTTON BIRYANI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        }       
					else{
                                                printf("You Enter Wrong Choice. \n");
                                        }       

					break;
				
				case 2:
					int vbiryani;
					
					printf("\n    NAME                         PRICE\n\n");

             	                        printf("1.VEG. BIRYANI             -     150.Rs\n");
                		        printf("2.VEG. FAMILY BIRYANI      -     450.Rs \n");
                		        printf("2.VEG. SPECIAL BIRYANI     -     180.Rs\n\n");

					printf("Enter Your Choice : ");
					scanf("%d",&vbiryani);
					
					if(vbiryani == 1){
                                                printf("\nYour order for 'VEG. BIRYANI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        }
                                        else if(vbiryani == 2){
                                                printf("\nYour order for 'VEG.FAMILY BIRYANI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You ! \n");
                                        }
                                        else if(vbiryani == 3){
                                                printf("\nYour order for 'VEG SPECIAL BIRYANI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        }
                                        else{
                                                printf("You Enter Wrong Choice. \n");
                                        }

	

					break;	
			}
			break;
		
		case 2:
			int starters;
			printf("\n\n*** STARTERS ***\n\n");

			printf("CATEGORY          NAME                     PRICE\n\n");
			printf("NON-VEG      1.CHICKEN CHILLI        -     164.Rs\n");
			printf("             2.CHICHEN 65            -     180.Rs \n");
			printf("             3.PEPPER CHICHEN        -     160.Rs \n");

			printf("VEG          4.PANEER 65             -     164.Rs\n");
			printf("             5.MANCHURIAN            -     145.Rs \n\n");
			
			printf("Enter Your Choice : ");	
			scanf("%d",&starters);

			switch(starters){

				case 1:
					printf("Your order for 'CHICKEN CHICKEN' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You ! \n");
					break;

				case 2:
					printf("Your order for 'CHICKEN 65' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");	
					break;

				case 3:
                                        printf("Your order for 'PEPPER CHICKEN' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        break;
		
				case 4:
                                        printf("Your order for 'PANEER 65' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        break;

				case 5:
                                        printf("Your order for 'VEG. MANCHURIAN' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        break;
				
				default:
					printf("You Enter Wrong Choice.\n");	

			}
			break;

		case 3:
                        int kebab;
                        printf("\n\n*** KEBABS ***\n\n");

                        printf("       NAME                           PRICE\n\n");
                        printf(" 1.CHICKEN TIKKA KEBAB          -     240.Rs\n");
                        printf(" 2.TANDOORI CHICKEN {HALF}      -     240.Rs \n");
                        printf(" 3.TANDOORI CHICKEN {FULL}      -     360.Rs \n");
                        printf(" 4.CHICKEN GARLIC KEBAB         -     240.Rs\n\n");

                        printf("Enter Your Choice : ");
                        scanf("%d",&kebab);


                        switch(kebab){

                                case 1:
                                        printf("Your order for 'CHICKEN TIKKA KEBAB' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You ! \n");
                                        break;

                                case 2:
                                        printf("Your order for 'TANDOORI CHICKEN {HALF}' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        break;

                                case 3:
                                        printf("Your order for 'TANDOORI CHICKEN {FULL}' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        break;

				case 4:
                                        printf("Your order for 'CHICKEN GARLIC KABAB' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        break;

                                default:
                                        printf("You Enter Wrong Choice.\n");
	

                        }
                        break;

		case 4:
                        int curries;
                        printf("\n\n*** CURRIES ***\n\n");

                        printf("                   NAME                           PRICE\n\n");
                        printf("NON-VEG      1.BUTTER CHICKEN BONLESS       -     240.Rs\n");
                        printf("VEG          2.NIZAMI HANDI                 -     240.Rs \n\n");

                        printf("Enter Your Choice : ");
                        scanf("%d",&curries);

                        switch(curries){

                                case 1:
                                        printf("Your order for 'BUTTER CHECKEN BONLESS' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        break;

                                case 2:
                                        printf("Your order for 'NIZAMI HANDI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        break;

                                default:
                                        printf("You Enter Wrong Choice.\n");

                        }
                        break;

		case 5:
                        int roti;
                        printf("\n\n*** INDIAN BREADS ***\n\n");

                        printf("       NAME                   PRICE\n");
			printf(" 1.ROTI                 -     24.Rs \n");
                        printf(" 2.MAKKI ROTI           -     36.Rs \n");
                        printf(" 3.TANDOORI ROTI        -     30.Rs\n");
                        printf(" 4.RUMALI RO            -     32.Rs \n\n");

                        printf("Enter Your Choice : ");
                        scanf("%d",&roti);


                        switch(roti){

				case 1:
                                        printf("Your order for 'ROTI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        break;

                                case 2:
                                        printf("Your order for 'MAKKI ROTI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        break;

				case 3:
                                        printf("Your order for 'TANDOORI ROT' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        break;

                                case 4:
                                        printf("Your order for 'RUMALI ROTI' has been successful. \nPlease wait,Your order will be placed on your table in just 10 minutes.\nThank You !\n");
                                        break;

                                default:
                                        printf("You Enter Wrong Choice.\n");
                        }
                        break;
	
	default:

                printf("You Enter Wrong Choice.\n");
		
	}
	}
	

}
