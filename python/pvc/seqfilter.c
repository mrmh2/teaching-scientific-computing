#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char **seqfilter(char *input_sequence, char *allowed_chars)
{
    int n = strlen(input_sequence);
    int ok = 0;
    int gcp = 0;
    int bcp = 0;

    char *good_chars = (char *) malloc(sizeof(char) * (n + 1));
    char *bad_chars = (char *) malloc(sizeof(char) * (n + 1));

    for (int i=0; i<n; i++) {
        ok = 0;
        char c = input_sequence[i];
        for (int j=0; j<strlen(allowed_chars); j++) {
            if (c == allowed_chars[j]) ok = 1;
        }
        if (ok) {
            good_chars[gcp++] = c;
        } else {
            bad_chars[bcp++] = c;
        }
    }
    good_chars[gcp] = '\0';
    bad_chars[bcp] = '\0';
    good_chars = (char *) realloc(good_chars, gcp+1);
    bad_chars = (char *) realloc(bad_chars, bcp+1);

    char **ret = (char **) malloc(sizeof(char *) * 2);
    ret[0] = good_chars;
    ret[1] = bad_chars;

    return ret;
}

int main()
{
    char test_seq[] = "actttacccgattacatgacwgtacgatotacgact";
    char allowed_chars[] = "tgac";

    char **ret = seqfilter(test_seq, allowed_chars);

    printf("%s, %s\n", ret[0], ret[1]);

    return 0;
}

