#include <stdio.h>
#include <windows.h>


/*typedef struct time{
    int h;
    int m;
    int s;
} tme;*/

void main(){
    int h,m,s;
    int d =1000;
    scanf("%d%d%d",&h,&m,&s);
    while (1)
    {
        /* code */
        s+=1;
        if (s==60){
            m+=1;
            s=0;
        }
        if(m==60){
            if (h==24){
                h=0;
                m=0;
            }
            else{
            h+=1;
            m=0;
            }
        }
        
        printf("Clock :");
        printf("\n%d:%d:%d",h,m,s);
        Sleep(d); //this adds a actual time delay of 1000 milli seconds
        system("cls");//this clears the screen 

    }
    

}