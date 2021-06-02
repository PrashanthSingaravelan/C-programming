#include <stdio.h>
union unionJob
        {
               char name[32];       // char[32] --> 32 bytes  [Dominant]
               float salary;             // float --> 4 bytes
               int workerNo;         //  int --> 4 bytes
        } uJob; // --> 32 bytes (more dominant)

struct structJob
        {
               char name[32];   // char[32] --> 32 bytes
               float salary;         // float --> 4 bytes
               int workerNo;    //  int --> 4 bytes
        } sJob; // --> 40 byets

int main()
        {
               printf("size of union = %d", sizeof(uJob));
               printf("\nsize of structure = %d", sizeof(sJob));
               return 0;
        }
