#include <stdio.h>
void display(int array[], int size) 
{  
   for (int i = 0; i < size; i++)   
   {    
       printf("%d ", array[i]);  
   }  
   printf("\n");
}
int main() 
{  
   int array[] = {9, 5, 1, 4, 3};  
  int size = sizeof(array) / sizeof(array[0]);  
for (int step = 1; step < size; step++)   
  {    
      int key = array[step];    
       int j = step - 1;    
       while (key < array[j] && j >= 0)         
        {      
                 array[j + 1] = array[j];      
                  --j;    
         }    
              array[j + 1] = key;  
     }  

  printf("Sorted array in ascending order:\n");  
         display(array, size);
}