#include <stdio.h>

int main(void) {
    int temp, moi;

    /* Read temperature and soil moisture */
    scanf("%d %d", &temp, &moi);

    /*
       Write conditional statements here to print exactly one of:

       Good conditions
       Too cold
       Too hot
       Too dry
       Too cold and too dry
       Too hot and too dry
         */
         
       if(temp>=18 && temp<=30 && moi>=40) {
           printf("Good conditions");
       } else if(temp>=0 && temp<18 && moi<40) {
           printf("Too cold and too dry");
       } else if(temp>=30 && moi<40) {
           printf("Too hot and too dry");
       } else if(temp>=0 && temp<=18 && moi>=40) {
           printf("Too cold");
       } else if(temp>30 && moi>=40) {
           printf("Too hot");
       } else if(temp>=18 && temp<=30 && moi<40) {
           printf("Too dry");
       }
       
       
       
       
  

    return 0;
}
