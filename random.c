#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar()
{
	char randLetter = 'A' + (random()%26);
    return randLetter;
}
