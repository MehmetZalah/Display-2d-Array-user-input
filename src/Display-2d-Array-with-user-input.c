/*
 ============================================================================
 Name        : main.c
 Author      : Mohamed Salah Abdelfatah
 Version     : 1.0
 Description : Display 2d Array with user input
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

#define size_of_array_rows(arr) sizeof(arr)/sizeof(arr[0])
#define size_of_array_cols(arr) sizeof(arr[0])/sizeof(arr[0][0])
#define ROWS 2
#define COLS 2

int data[ROWS][COLS];

void checkans();
void display();
void insert();

int main(){

	checkans();

}

void display(){
	for(int i=0; i<size_of_array_rows(data); i++){

		printf("Row %d \t |", i);

		for(int j=0; j<size_of_array_cols(data);j++){
			int disp = data[i][j];
			printf(" %d |", disp);
		}

		printf("\n");

		for(int d=0; d<10+COLS*4; d++){
			printf("-");
		}

		printf("\n");
	}

}

void insert(){
	int inrow=0;
	int incol=0;
	int ansdata=0;
	printf("Enter Row Number: ");
	scanf("%d", &inrow);

	printf("Enter Column: ");
	scanf("%d", &incol);

	printf("Enter the data to be stored 'Digits': ");
	scanf("%d", &ansdata);

	data[inrow][incol]=ansdata;

	checkans();
}

void checkans(){

	int ans =0;

	printf("Enter '1' for Display data | '2' for Insert Data:  ");
	scanf("%d",&ans);

	if(ans==1){
		display();
	}
	if(ans==2){
		insert();
	}else{
		checkans();
	}

}
