#include <stdio.h>
#include <stdint.h>

//int a = 10;
//int *ptr;
//int main( int argc, char const *argv[]){
   //ptr = &a;

   //printf("dia chi %p gia tri dia chi  % d, &a,a");
   //printf("dia chi %p gia tri dia chi  % d, ptr,*ptr");

//}

uint8_t mang[]= {1, 2, 3, 4};

int main(int argc, char const *argv[]){
   printf("mang [0] = %p \n", &(mang[0]));
   printf("mang [1] = %p  \n" , &(mang[1]));
   printf("mang [2] = %p \n", &(mang[2]));
printf("mang = %d \n", *mang);
printf("mang[1] = %d \n", *mang+1);
   return 0;
}
