#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkIP(char *);
void printIPValid(char *);

int main(void)
{
	printIPValid("127.0.0.1");
	printIPValid("127.0.01");
	printIPValid("127.0..1");
	printIPValid("127.zero.0.1");
	printIPValid("127.297.0.1");
	printIPValid("127.2555.0.1");
	return 0;
}

int checkIP(char *address)
{
	int result = 1;
	int i;
	int actualCount=0;
	int partsCount=1;
	char actualPart[5];

	for (i = 0; i < strlen(address); i++)
	{
		char c = address[i];
		if (c >= '0' && c <= '9' || c == '.')
		{
			if (c == '.')
			{
				if (actualCount<1) /* for cases like: "127.0..*/
				{
					result = 0;
					break;
				}
				partsCount++;
				if (partsCount>4)
				{
					result = 0;
					break;
				}
				actualPart[actualCount] = '\0';
				int partValue = atoi(actualPart);
				if (partValue>255 || partValue<0)/*second condition is not needed*/
				{
					result = 0;
					break;
				}
				actualCount = 0;
			}
			else
			{
				if (actualCount < 3)
				{
					actualPart[actualCount] = c;
					actualCount++;
				}
				else
				{
					result = 0;
					break;
				}
			}
		}
		else
		{
			result = 0;
			break;
		}
	}
	if (partsCount != 4)
		result = 0;
	return result;
}

void printIPValid(char * address)
{
	if (checkIP(address))
		printf("%s is a valid IP address\n", address);
	else
		printf("%s is not a valid IP address\n", address);
}