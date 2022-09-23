#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>


void create ();
void display();
void search();
void modify();
void append();
void sort();

typedef struct student {
    int rn ;
    char name[20];
    float marks;
    
} STUD ;

int n=0;
STUD record[20];
int main() {
    // Write C code here
    //no. of students = i
    
    
    int ch ;
    
    while(1){
    printf("\nEnter the choice\n");
    printf("\n1:create\n2:Display\n3:Search\n4:Modify\n5:Append\n6:Sort\n7:Exit\n");
    scanf("%d",&ch);
    switch (ch){
        case 1:create();
        break;
        case 2: display();
        break;
        case 3: search();
        break;
        case 4: modify();
        break;
       /* case 5 : append();
        break;
        case 6: sort();
        break;*/
        default:
        exit(0);
        
    }
    if (n==20){
        break;
    }
     
    }
    

    return 0;
}

//function for creating students records
void create (){
    int total_student;
    printf("\nenter the no. of students records to be entered \n");
    scanf("%d",&total_student);
    
    for (int i =0;i<total_student;i++){
        printf("\nEnter the roll no of student\n");
        scanf("%d",&record[i].rn);
        printf("\nEnter the name of student\n");
        scanf("%s",&record[i].name);
        printf("\nEnter the marks obtained by student\n");
        scanf("%f",&record[i].marks);
    }
    n+=total_student;
    
    
}


//function for counting total no of values in database
/*int count(){
    int count;
    for (int i=0;i<1000;i++){
        if (record[i].rn==0){
            
        }
    }
}*/
//function for displaying all values from student data
void display(){
    int student;
    printf("\nenter the no. of student to be displayed :\n");
    scanf("%d",&student);
    if (n==0){
        printf("\ndatabase is empty");
    }
    else
    {
        printf("\nstudent_roll_no\tstudent_name\tstudent_marks");
        for (int i=0;i<student;i++){
            
            printf("\n%d\t\t%s\t\t%f",record[i].rn,record[i].name,record[i].marks);
            
        }
    }
}

//searching by roll_no 
void search(){
    int student;
    int flag;
    
    if (n==0){
        printf("No data available in database");
        
    }
    else{
        printf("\nEnter the roll_no of student");
        scanf("\n%d",&flag);
        for (int i=0;i<n;i++){
            if (record[i].rn==flag){
                printf("\nstudent_roll_no\tstudent_name\tstudent_marks");
                printf("\n%d\t%s\t%f",record[i].rn,record[i].name,record[i].marks);
            }
        }
    }
}

//modifying the data of students by roll no.



void modify(){

    int id ;
    char ext ;
    ext = "q";
    
    if (n==0){
        printf("\nno data in the database");
    }
    else {
        while(1){
        char check;
        printf("\nEnter the id to be modify \n");
        scanf("%d",&id);
        for (int i=0;i<n;i++){
            if (record[i].rn==id){
                int modifier;
                printf("\nwhat to modify ? 1.name , 2.marks or any no. for both \n");
                scanf("%d",&modifier);
                switch(modifier){
                    case 1:
                    printf("Enter the name\n");
                    scanf("%s",&record[i].name);
                    break;
                    case 2:
                    printf("enter the marks \n");
                    scanf("%f",record[i].marks);
                    break;
                    default :
                    printf("Enter the name\n");
                    scanf("%s",&record[i].name);
                    printf("enter the marks \n");
                    scanf("%f",record[i].marks);
                    
                    
                    
                    
                }
            
                // printing modified value to the console
                printf("student roll no : %d , student name : %s ,student marks : %.2f",record[i].rn,record[i].name,record[i].marks);
                break;
            
            }
        }
        printf("\nif you want to quit the program enter q else r :\n");
        
        scanf("%c",&check);
        
        if (check == ext ){
            break;
        }
        }
    }
}