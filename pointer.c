# include <stdio.h>
# include <stdlib.h>

unsigned int i = 2500000000;
//Creates an incompatible pointer types warning! Will still compile.
char * ip = &i; 

int eachByte(){
	int x;
	//Goes through each byte of an int (there are four), can also use sizeof(i)
	for (x= 0; x < 4; x++){
		//Prints out byte value using the pointer
		printf("Byte %d is %hhx \n", x, *ip);
		//Update byte #
		ip++;
	}
	return 0;
}

int increment1(){
	ip = &i;
	int x;
	//Goes through each byte of an int (there are four), can also use sizeof(i)
  	for (x = 0; x < 4; x++){
  		//Increase value of byte by one 
  	 	*ip+=1;
  	 	//Print out new value with one byte changed
    	printf("After increment of 1 on byte %d, hex value is %x , decimal is %d, unsigned is %u \n", x, i, i, i);
    	//Update byte #
    	ip++; 
  	}
  	//Print out total new value with four bytes changed
  	printf("Final result: hex is %x, decimal is %d, unsigned is %u \n", i, i, i);
  	return 0;
}

int increment16(){
	ip = &i;
	int x;
	//Goes through each byte of an int (there are four), can also use sizeof(i)
  	for (x = 0; x < 4; x++){
  		//Increase value of byte by 16 
  	 	*ip+=16;
  	 	//Print out new value with one byte changed
    	printf("After increment of 16 on byte %d, hex value is %x , decimal is %d, unsigned is %u \n", x, i, i, i);
    	//Update byte #
    	ip++; 
  	}
  	//Print out total new value with four bytes changed
  	printf("Final result: hex is %x, decimal is %d, unsigned is %u \n", i, i, i);
  	return 0;
}

int main(){
	printf("Original unsigned int value is: %u\n", i);
	printf("Original hex value is: %x\n", i);
	printf("---Q4---\n");
	printf("Use pointer to print out each individual byte: \n");
	eachByte();
	printf("---Q5A---\n");
	increment1();
	printf("---Q5B---\n");
	increment16();
	return 0;

}

