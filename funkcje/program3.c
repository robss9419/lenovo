#include <stdio.h>

int main() {
	int i,j;
	int sumaDzielnikow = 0;
	for(i = 2; i<10001; i++) 
	{
		for(j = 1; j<i; j++) 
		{ 
			if(i%j==0) { sumaDzielnikow+=j;} 
		}

		if (sumaDzielnikow==i) { printf("%d\n", i); }
		sumaDzielnikow = 0;
	}

	//return 0;
}