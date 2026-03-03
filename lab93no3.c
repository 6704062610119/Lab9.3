#include <stdio.h>
#include <string.h>  

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64]){
	int i;
	for(i=0;i<5;i++){
		if(!strcmp(login,logindb[i]) && !strcmp(passwd,passdb[i])){
			return 1;
		}
	}
	return 0;
	
}; 

int main() {
	char login[5][64]={"user1","user2","user3","user4","user5"};
	char password[5][64]={"pass1","pass2","pass3","pass4","pass5"};
	//implement here
	char login1[64], password1[64];
	printf("Enter login: ");
	gets(login1);
	printf("Enter password: ");
	gets(password1);
	if( checkLogin(login1, password1, login, password) == 1) {
	printf("Welcome\n");
		} else {
	printf("Incorrect login or password\n");
}
	
}

