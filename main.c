#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct address_book {
	char *name;
	char *surname;
	char *tel;
}addr;

int menu();
void add();
void mod();
void del();
void print();

void ver_char();
int arrow_keys();

int main(){
	
	int n;
	char c;
	
	do{
		n = menu();
		
		switch(n){				
			case 0: break;
				//add(); break;
			case 1: break;
				//mod(); break;
			case 2: break;
				//del(); break;
			case 3: break;
				//print(); break;
		}
		
	}while(n!= -1);
	
	return 0;
}
	
int menu(){
	
	int n=0;
	char* op[]={"Add a contact", "Modify a contact", "Delete a contact", "Print the address-book"};
	char c;
	
	do{
		system("cls");
		
		switch(n){
			case 0:
				printf("-> %s\n   %s\n   %s\n   %s\n", op[0], op[1], op[2], op[3]);
				break;
			case 1:
				printf("   %s\n ->%s\n   %s\n   %s\n", op[0], op[1], op[2], op[3]);
				break;
			case 2:
				printf("   %s\n   %s\n ->%s\n   %s\n", op[0], op[1], op[2], op[3]);
				break;
			case 3:
				printf("   %s\n   %s\n   %s\n ->%s\n", op[0], op[1], op[2], op[3]);
				break;
		}
		
		c = getch();
		
		switch(c){
			case 72:
				if(n>0) 
					--n;				
				break;
				
			case 80:
				if(n<3) 
					++n;				
				break;
				
			case 27:
				printf("\n\nDo you want to exit the program? ");
				
				do{
					scanf("%c", &c);
				}while((c!='y') && (c!='n'));
				
				if(c=='y')
					return -1;
		}
		
	}while(c!=13);	
	
	return n;
}

	
	
	
	
	
	
	
	
	
	