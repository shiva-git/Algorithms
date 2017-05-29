#ifndef SORT_H
#define SORT_H

void print_star(int); //for printing star 
void print_array(int array[], int);//for printing array
void print_array_star(int array[],int);//for priting array and calls primt_star for printing star

void insertion_sort(int array[],int,int);

void counting_sort(int array[],int,int);

void merge_sort(int array[],int,int);
void merge (int left[],int,int right[],int,int array[],int);

int partition_index(int array[],int,int,int);
void quick_sort(int array[],int,int,int);
int random_partition_index(int array[],int,int,int);
#endif