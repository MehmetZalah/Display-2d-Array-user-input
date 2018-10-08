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
#define ROWS 5
#define COLS 5

int data[ROWS][COLS];

void checkans();
void display();
void insert();
void modify();

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

	if(inrow>=ROWS && incol>=COLS){
		printf("\nData can't be stored outside the array!, last row is %d, last column is %d\n\n",ROWS-1,COLS-1);
	}else{
		printf("Enter the data to be stored 'Digits': ");
		scanf("%d", &ansdata);

		data[inrow][incol]=ansdata;
		printf("\nData stored successfully!\n\n");
	}

	checkans();
}

void modify(){

	int mrows=0;
	int mcols=0;

	printf("\nArray Elements can't be modified on runtime at this moment, malloc is not used right now!\n\n");

	printf("Enter Number of ROWS to see instructions: ");
	scanf("%d",&mrows);
	printf("\nChange the value of '#define ROWS' to %d before compilation!.\n\n",mrows);

	printf("Enter Number of Columns to see instructions: ");
	scanf("%d",&mcols);
	printf("\nChange the value of '#define COLS' to %d before compilation!.\n\n",mcols);

	checkans();

}

void checkans(){

	int ans =0;

	printf("Enter '1' for Display data | '2' for Insert Data | '3' for Modify 2D Array:  ");
	scanf("%d",&ans);

	if(ans==1){
		display();
	}
	if(ans==2){
		insert();
	}
	if(ans==3){
		modify();
	}else{
		checkans();
	}

}
