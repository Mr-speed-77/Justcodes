#include <stdio.h>
#define SIZE 10

void printarray(void *vptr,int size,int type);

int main()
{
    int num[SIZE]={10,20,30,40,50,60,70,80,90,100};
    float fract[SIZE]={1.1f, 1.2f, 1.3f, 1.4f, 1.5f, 1.6f, 1.7f, 1.8f, 1.9f, 1.10f};
    char name[SIZE]={'a','b','c','d','e','f','g','h','i','j'};
    
    printf("\nNumber array: ");
    printarray(&num,SIZE,1);
    printf("\nFraction array: ");
    printarray(&fract,SIZE,2);
    printf("\nCharacter array: ");
    printarray(&name,SIZE,3);

    return 0;
}


void printarray(void *vptr,int size,int type){
    
    int i;
    for(i=0;i<size;i++){
        
        switch(type)
        {
            case 1:
                printf("%d, ",*((int*)vptr+i));
            break;
            
            case 2:
                printf("%f, ",*(float*)vptr+i);
            break;
            
            case 3:
                printf("%c, ",*(char*)vptr+i);
            break;
            
            
            
                
            
        }
        
        
        
        
    }
}





