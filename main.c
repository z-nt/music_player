#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>

typedef struct User{
 char  name;
  int  pass;
}User;




// int add_user(char *name , int *pass){
//     User* newUser = calloc(sizeof(User),100);
//     newUser->name = name;
//     newUser->pass = pass;
//     return newUser;
// }



int main(void )
{
char *username;
int  *userpass;

    printf("**********Enter username and password:**********\n");
    fgets(username,20,stdin);
    scanf("%d",&userpass);


    printf("_______wellCome______\n");
    printf("%s\t",username);
   
    sleep(2);
    system("clear");
    

    printf("______you are in menu_____\n");
    
    int music_1 , music_2 , music_3 , music_4 , music_5;
    int number;
    printf("______Hit the music_____\n");

    printf("\t 1-music\n");
    printf("\t 2-music\n");
    printf("\t 3-music\n");
    printf("\t 4-music\n");
    printf("\t 5-music\n");

    printf("______Enter the number for play_______\n");
    
    
    scanf("%d",&number);
    
    
    printf("\n");

    if(number == 1){
        printf("\tEbi avaye seda\n");
        music_1 = number;   
    }
    if(number == 2){
        printf("\tgoogoosh shah mahi iran\n");
        music_2 = number;
        
    }
    if(number == 3){
        printf("\tmohsen yegane\n");
        music_2 = number;
        
    }
    if(number == 4){
        printf("\tchavoshi\n");
        music_4 = number;
        
    }
    if(number == 5){
        printf("\tshadmehr\n");
        music_5 = number;
    }
    
    printf("______enjoi of the music_______\n");





    return 0;
}