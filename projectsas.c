#include<stdio.h>
#include<time.h>



//starts of my code

//functions :
//function 1.
void Add(){
	   printf("Add a new tach : \n");
};
//function 2.
void addnewtach(){
	printf("Add several new tasks : ");
	
};
//function 3.
void showlist(){
	 printf(" Show list of all tasks: ");
};
//function 4.
void edit(){
	  printf("Edit a task : ");
};
// function 5.
void remov(){
	    printf("Remove a task :  ");
};
//function 6.
void Search(){
	 printf("Search for task : ");
	
};
//function 7.
void Statistical(){
	 printf("Statistical : ");
};

int main(){
	int choice;
      
do{    
// menu of tastk :                 
	 printf("\t\t\t     ______________________________________________________\n");
        printf("\t\t\t                             TODO LIST MENU                          \n");
        printf("\t\t\t     ______________________________________________________\n");
        printf("\t\t\t          [1] Add a new tach.  \n");
        printf("\t\t\t          [2] Add several new tasks. \n");
        printf("\t\t\t          [3] Show list of all tasks. \n");
        printf("\t\t\t          [4] Edit a task. \n");
        printf("\t\t\t          [5] Remove a task.  \n");
        printf("\t\t\t          [6] Search for task. \n");
        printf("\t\t\t          [7] Statistical \n");
        printf("\t\t\t          [0] to leave. \n");
        printf("\t\t\t     ______________________________________________________\n");
        printf("type your choice [0-7] : ");
        scanf("\t%d",&choice);
        
        
        //switch case for choices :
        switch(choice){
        	
        	case 1 : Add();
        	break;
        	
        	case 2 : addnewtach();
        	break;
        	
        	case 3: showlist();
        	break;
        	
        	case 4: edit();
        	break;
        	
        	case 5: remov();
        	break;
        	
        	case 6: Search();
        	break;
        	
        	case 7: Statistical();
        	break;
        	
        	case 0: printf("you leave the menu list!\n");
        	break;
        	
        	default: printf("this choice in invalide");
        	
        		
		} 
}         
while(choice!=0);

	
	
	
}

