#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10000
#define MIN 0
#include "sort.c"

int main(){
	int choice;int size;int i;int limit;
	printf("Enter the size of the array in the range of 2 to 1000\n");
	scanf("%d",&size);
	limit = *(&size);
	while(size<2 || size>1000){
		printf("Invalid size , please enter a number in the range of 2 to 1000 only.\nTo end the program press 0\n" );
		scanf("%d",&size);
		if(size==0)return 0;
	}

	printf("Choose which sorting method you want to implement \n1.Insertion Sort\n2.Counting Sort\n3.Merge Sort\n4.Randomized Quick Sort\n");
	scanf("%d",&choice);
	int array[size];
	srand(time(NULL));
	for(i=0;i<size;i++){

		if(size<=20){
 				array[i] = (rand()%(15 - MIN) +MIN);
 		}else{
 			if(choice == 2){
				array[i] = (rand()%(99 - MIN) +MIN);
			}else{
 				array[i] = (rand()%(RAND_MAX - MIN) +MIN);
 			}
		}
	}	
	printf("Array before sorting\n");
	if(size<=20){
		print_array_star(array,size);
	}else{
		print_array(array,size);
	}	

	switch(choice){
		case 1 : 
			insertion_sort(array,size,limit);
		break;
		case 2 :
			counting_sort(array,size,limit);
		break;
		case 3:		
			merge_sort(array,size,limit);
		break;
		case 4:
			quick_sort(array,0,(size-1),limit);	
			printf("Sorted array using randomized quick sort \n");
			if(limit<=20){
				print_array_star(array,size);
			}else{
				print_array(array,size);
			}	
		break;
		default:
			printf("Oops you entered an invalid input\nPlease re-reun the program with correct input\n");
	}
	printf("\n");
	return 0;
}


