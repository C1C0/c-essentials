#include <stdio.h>
#include <string.h>

int main()
{
	char buffer[100];
	FILE *fileSource = fopen("main.c", "r");
	if (fileSource == NULL)
	{
		puts("Error opening a file.");
		return 1;
	}
	FILE *fileDestination = fopen("maincopy.c", "w");
	if (fileDestination == NULL)
	{
		puts("Error opening a file.");
		return 1;
	}
	int i = 0;
	int isLastWholeLine = 1;
	while (fgets(buffer, sizeof(buffer), fileSource))
	{
		int len = strlen(buffer);
		if (isLastWholeLine)
		{
			fprintf(fileDestination, "%d: %s", i, buffer);
			i++;
		}
		else
			fprintf(fileDestination, "%s", buffer);
		if (buffer[len - 1] == '\n')
			isLastWholeLine = 1;
		else
			isLastWholeLine = 0;
	}
	fclose(fileSource);
	fclose(fileDestination);
	return 0;
}