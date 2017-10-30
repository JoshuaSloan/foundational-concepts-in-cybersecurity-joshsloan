

#include <cstdio> //needed for perror, and printf
#include <pthread.h>
#include <cstdlib> //needed for rand(), srand(), and exit() 
#include <unistd.h> //needed for sleep()
#include "semp.h"


//#define MAX_RESOURCES 5
int available_resources = 10;


Semaphore bs;
Semaphore mutex;

int decrease_count(int count)
{
     available_resources = available_resources - count;
     return 0;       
}

int increase_count(int count)
{
    available_resources = available_resources + count;
    return 0;
}


void* application(void * id)
{
    int myID = *((int*) id);
    
    //Start a random number of application instances (between 1 and 3)
    int c = ((int) rand() % 3)+1;
    //wait til resource is available
    while(available_resources <=0)
    decrease_count(c);
    
    printf("Application %d is starting %d instances.\n", myID, c);
    //Use the application for a while
    sleep( rand() % 2);
    //Release the resource
    increase_count( c );    
}


int main(int argc, char** argv)
{
    //Declare the worker threads
    pthread_t applications[10];
    int app_ids[10];    
    //seed the random number generator
    srand((unsigned)time(0));
    semaphore_init(&bs, 1);    
    semaphore_init(&mutex, 1);
    //create the "applications"
    for(int i = 0; i < 10; i++)
    {
        //assing the application id
        app_ids[i] = i;
        //Create an application worker thread
        if (pthread_create(&applications[i], NULL, application, &app_ids[i])) 
        {
            perror("error creating the first thread");
            exit(1);
        }
    }
    for(int i = 0; i < 10; i++)
    {
        pthread_join(applications[i], 0);
    }
    printf("Final Available Resources: %d\n", available_resources);
}
