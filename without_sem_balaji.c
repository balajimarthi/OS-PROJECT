//For compilation:   gcc without_sem_balaji.c -lpthread

//For exexution:     ./a.out



#include<stdio.h>

#include<stdlib.h>

#include<unistd.h>

#include<pthread.h>



int i; //shared variable

void *Thread1(){

printf(" Balaji ");

}

void *Thread2(){

printf("\nHello I am");

}

void *Thread3(){

printf("Mathi. I am pursuing B.Tech in LPU.\n");

}

int main()

{

pthread_t tid,tid2,tid3;



pthread_create(&tid,NULL,Thread1,(void *)&tid);

pthread_create(&tid2,NULL,Thread2,(void *)&tid2);

pthread_create(&tid3,NULL,Thread3,(void *)&tid3);



pthread_exit(NULL);

return 0;

}