#include <stdio.h>

int main(){
    
    int phy,math,che,bio,cs,percentage;
    printf("Input marks of five subjects: \n");
    scanf("%d\n%d\n%d\n%d\n%d",&phy,&math,&che,&cs,&bio);
    percentage = (phy + math + cs + che + bio) * 100 / 500;
    
    // percentage value 
    printf("percentage = %d.00 \n",percentage);
    
    // find a Grade
    if (percentage >= 90)
        printf("Grade: A");
    else if (percentage >= 80)
        printf("Grade: B");
    else if (percentage >= 70)
        printf("Grade: C");
    else if (percentage >= 60)
        printf("Grade: D");
    else if (percentage >= 50)
        printf("Grade: E");
    else if (percentage >= 40)
        printf("Grade: F");
    else
        printf("Invalid marks, try again ");
    

}