#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int limit;
    printf("Determine a limit : "); 
    scanf("%d",&limit); //Get the limit from user !
    clock_t time;
    time = clock(); // start timer 
    int k=0;
    printf("2 \n3 \n5 \n"); // add missing numbers
    for(int i=2 ;i<limit ; i++){ // Start to search
        k=i/2; // For optimization divide i in half !
        for(int j=2; j<k ; j++){ // Check all i if it is prime number !
            if(i%j == 0){ 
                break; // if i is not prime number break this loop !
            }
            else{
                if(j == k-1){
                    printf("%d \n",i); // SHow if i is prime number
                    break; //if it is prime number break this loop !
                }
            }
        }

    }
    time = clock() - time; // find the elapsed time !
    double time_taken = ((double)time) / CLOCKS_PER_SEC;
    printf("\n Geçen Süre %f",time_taken); 
    return 0;
}
