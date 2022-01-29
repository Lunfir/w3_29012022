#include <stdio.h>

typedef enum
{
    PASSPORT    = 42, 
    SALARY      = 12,
    POSITION    = 23,

    ERROR       = -1 
} Request;

typedef enum
{
    CTRL    = 1 << 0,
    ALT     = 1 << 1,
    SHIFT   = 1 << 2
} KeyMods;


int main()
{
    KeyMods key;

    scanf("%d", &key);

    if (key & ALT)
    {
        printf("ALT is Pressed\n");
    }

    if (key == (ALT | CTRL))
    {
        printf("ALT+CTRL is Pressed\n");
    }

    if (key & (ALT | CTRL))
    {
        printf("ALT+CTRL+smth else is Pressed\n");
    }

    // Request req;

    // scanf("%d", &req);

    // if (req == PASSPORT)
    // {
    //     printf("Alpha\n");
    // }

    // if (req == SALARY)
    // {
    //     printf("Bravo\n");
    // }

    // if (req == POSITION)
    // {
    //     printf("Charlie\n");
    // }

    // if (req == ERROR)
    // {
    //     printf("Error!\n");
    // }

    // printf("size of enum: %llu\n", sizeof(Request));

    return 0;
}
