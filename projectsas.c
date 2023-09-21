#include<stdio.h>
#include<time.h>
#include <string.h>
#include <stdlib.h>
int counter = 0;
 

//starts of my code



	
  	//struct
struct Task {
    int id;
    char title[30]; // to add a title to your task 
    char description[320]; // to write a description to your todo task   
    char status[20];   // "to be completed", "in progress", "finalized"
    //struct of deadlines
//for calling struct of deadline
struct deadline{
    int day;
	int month;
	int year;
	}deadline;

}; 

//for calling a strucs.
struct Task task[1000];

//for counting how much tasks i adds.


//functions :
//function 1.
void Add(){
	

	//output and input
	   printf("Add a task : \n");
	   //add id 
	   task[counter].id = counter + 1;
	   //add title 
	   getchar();
	   printf("your title  : ");
	   gets(task[counter].title);
	   //add description
	   getchar();
	   printf("your description : ");
	   gets(task[counter].description);
	   // status
	   strcpy(task[counter].status,"TO DO\n");
	   	//add deadline 
       printf("type your deadline : \n");
       printf("day : ");
       scanf("%d",&task[counter].deadline.day);
       printf("month : ");
       scanf("%d",&task[counter].deadline.month);
       printf("year : ");
       scanf("%d",&task[counter].deadline.year);
       
	  
	   counter++;

	   	
	   }
	    
	   
	   
	   
	   
	  	   

//function 2.
void addnewtasks(){
	
	printf("Add several new tasks : ");
	
	
}
//function 3.
void showlist(){  // i <  counter
int i;

	 for(i=0 ; i<counter; i++){
	 printf("_______________Show list of all tasks_______________ \n");
	 printf("this is your id : %d\n",task[i].id);
	 printf("this is your title : %s \n",task[i].title);
	 printf("this is your description : %s\n ",task[i].description);
	 printf("status: %s ",task[i].status);
	 printf("deadline : %d / %d / %d",task[i].deadline.day , task[i].deadline.month , task[i].deadline.year);
	 } 
	 
	
     
 }
//function 4.
void edit(){
	  printf("Edit a task : ");
}
// function 5.
void remov(){
	    printf("Remove a task :  ");
}
//function 6.
void Search(){
	 int i;
	 int uid;
	 printf("Search for task : ");
	 scanf("%d",&uid);

	 for(i=0 ; i<counter; i++){
	 	if(task[i].id==uid){
	 		 printf("your task :\n");
	 printf("this is your id : %d\n",task[i].id);
	 printf("this is your title : %s \n",task[i].title);
	 printf("this is your description : %s\n ",task[i].description);
	 printf("status: %s ",task[i].status);
	 printf("deadline : %d / %d / %d",task[i].deadline.day , task[i].deadline.month , task[i].deadline.year);	
	 		

		 }
		   
		 	
		 }
    
	 } 
	

//function 7.
void Statistical(){
	 printf("Statistical : ");
}

int main(){
	//variable of choices
	int choice;
      
do{    
// menu of tastk :                 
	    printf("\t\t\t______________________________________________________\n");
        printf("\t\t\t                             TODO LIST MENU                          \n");
        printf("\t\t\t______________________________________________________\n");
        printf("\t\t\t          [1] Add a new task.  \n");
        printf("\t\t\t          [2] Add several new tasks. \n");
        printf("\t\t\t          [3] Show list of all tasks. \n");
        printf("\t\t\t          [4] Edit a task. \n");
        printf("\t\t\t          [5] Remove a task.  \n");
        printf("\t\t\t          [6] Search for task. \n");
        printf("\t\t\t          [7] Statistical \n");
        printf("\t\t\t          [0] to leave. \n");
        printf("\t\t\t______________________________________________________\n");
        printf("type your choice [0-7] : ");
        scanf("\t%d",&choice);
        
        
        //switch case for choices that we have in our menu :
    switch(choice){
        	
        	case 1 : Add();
        	break;
        	
        	case 2 : addnewtasks();
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
// for if he find 0 he will quit the programe       
while(choice!=0);

	
	
	
}

