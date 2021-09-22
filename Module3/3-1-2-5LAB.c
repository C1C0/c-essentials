#include <stdio.h>
#include <math.h> 

int main()
{
	/* your code */
    int part1, part2, part3, part4;

    scanf("%d", &part1);
    scanf("%d", &part2);
    scanf("%d", &part3);
    scanf("%d", &part4);

    // Check range
    if(part1 < 0 || part1 > 255){
        printf("Inccorect IP address on part1");
        return 1;
    }

    if(part2 < 0 || part2 > 255){
        printf("Inccorect IP address on part2");
        return 1;
    }

    if(part3 < 0 || part3 > 255){
        printf("Inccorect IP address on part3");
        return 1;
    }

    if(part4 < 0 || part4 > 255){
        printf("Inccorect IP address on part4");
        return 1;
    }

    printf("\nHuman-Readable IP address is: %d.%d.%d.%d", part1, part2, part3, part4);

    // Why when in printf function as argument, does not count properly ?
    unsigned int bitRepre = (part1 * 256 * 256 * 256 + part2 * pow(256, 2) + part3 * 256 + part4 * 1);

    printf("\nIP address as a 32-bit number: %lu", bitRepre);

	return 0;
}