#include<stdio.h>
#include<stdlib.h>
#include<string.h>

seqfilter(char *input_sequence, char *allowed_chars)
{
}

int main()
{
    char test_seq[] = "actttacccgattacatgacwgtacgatotacgact";
    char allowed_chars[] = "tgac";

    seqfilter(test_seq, allowed_chars);

    return 0;
}

