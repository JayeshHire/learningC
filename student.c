#include <stdio.h>
#include <string.h>
#include <conio.h>

struct student {
    int rn ;
    char name[20];
    float marks;
    
};

int main() {
    // Write C code here
    //no. of students = i
    
    struct student st[1000] ;
    int ch ;
    
    while(1){
    printf("\nEnter the choice\n");
    printf("\n1:create\n2:Display\n3:Search\n4:Modify\n5:Append\n6:Sort\n7:Exit\n");
    scanf("%d",&ch);
    switch (ch){
        case 1: create();
        break;
        case 2: display();
        break;
        case 3: search();
        break;
        case 4: modify();
        break;
        case 5 : append();
        break;
        case 6: sort();
        break;
        default:exit(0);
        
    }
    }
    st.rn = 20;
    st.alpha ='a';
    printf("%d and %c",st.rn,st.alpha);

    return 0;
}

//function for creating students records
void create (){
    int total_student;
    printf("enter the no. of students in the class\n");
    scanf("%d",&total_student);
    
    for (int i =0;i<total_student;i++){
        printf("Enter the roll no of student\n");
        scanf("%d\n",&st[i].rn);
        printf("Enter the name of student\n");
        gets(st[i].name);
        printf("Enter the marks obtained by student\n");
        scanf("%f",&st[i].marks);
    }
    
    
}


//function for counting total no of values in database
int count(){
    int count;
    for (int i=0;i<1000;i++){
        if (st[i].rn==0){
            
        }
    }
}
//function for displaying all values from student data
void display(int total_student){
    if (total_student==0){
        printf("database is empty");
    }
    else
    {
        printf("\nstudent_roll_no\tstudent_name\tstudent_marks");
        for (int i=0;i<total_student;i++){
            
            printf("\n%d\t%s\t%f",st[i].rn,st[i].name,st[i].marks);
            
        }
    }
}

//searching by roll_no 
void search(int total_student){
    int flag;
    
    if (total_student==0){
        printf("No data available in database");
        
    }
    else{
        printf("Enter the roll_no of student\n");
        scanf("%d",&flag);
        for (int i=0;i<total_student;i++){
            if (st[i].rn==flag){
                printf("\nstudent_roll_no\tstudent_name\tstudent_marks");
                printf("\n%d\t%s\t%f",st[i].rn,st[i].name,st[i].marks);
            }
        }
    }
}

//modifying the data of students by roll no.
void modify(int total_student){
    int id ;
    if (tota==0){
        printf("\nno data in the database");
    }
    else {
        for (int i=0;i<total_student;i++){
            if (st[i].rn==id){
                int modifier;
                printf("\nwhat to modify ? 1.name , 2.marks\n");
                scanf("%d",&modifier);
                switch(modifier){
                    case 1:
                    printf("Enter the name\n");
                    gets(st[i].name);
                    break;
                    case 2:
                    printf("enter the marks \n");
                    scanf("%f",st[i].marks);
                    break;
                    default :
                    printf("Enter the name\n");
                    gets(st[i].name);
                    printf("enter the marks \n");
                    scanf("%f",st[i].marks);
                    
                    
                    
                }
                // printing modified value to the console
                printf("student roll no : %d , student name : %s ,student marks : %f",st[i].rn,st[i].name,st[i].marks);
                break;
            
            }
        }
    }
}