#include <stdio.h>
int main(){
   char name[20];
   int i,c=0,c1=0;
   printf("enter the name\n");
   fgets(name,20,stdin);
   for(i=0;name[i]!='\0';i++)
   {
    
       if(name[i]>=65 && name[i]<90)
         {
              printf("\n upeercase %c",name[i]);
                c++;
         }
         else if(name[i]>=97&& name[i]<=120)
         {
            
              c1++; 
             printf("\n lowercase %c",name[i]); s
         }
         else 

         {
        printf("space or other symbol");
     
         }
   
   }
   printf("the name is %s",name);
   printf("uppercase letters are %d\n",c);
   printf("lowercase letters are %d",c1);
return 0;
}