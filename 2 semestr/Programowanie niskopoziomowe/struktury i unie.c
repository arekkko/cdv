#include <stdio.h>

/*
** Struktury
*/

struct ST{
    char c[3];
    short s[3];
    long i;
};

typedef struct ST ST;

union ID {
    char nazwa[10];
    unsigned int numer;
};

struct NODE{

};

int main()
{
    struct ST s1, s2, s3;
    ST *s4;

    s1.i = 7;

    s4 -> i = 9;
    (*s4).s[1] = 8;

    printf("%d\n", sizeof(s1));



    /*
    ----------
    */
    union ID agent007 = {7}, agent_Bolek = {"Bolek"}, agent_Tomek = {"Tomek"};
    union ID agentX;

    agent007.nazwa[0] = "J";
    agent007.nazwa[1] = "a";
    agent007.nazwa[2] = "m";
    agent007.nazwa[3] = "e";
    agent007.nazwa[4] = "s";
    agent007.nazwa[5] = '\0';

    printf("%s\n", agentX.nazwa);

    return 0;
}
