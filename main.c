#include <stdio.h>
#include <string.h>

#define NAME_PROGRAM "Welcome Basic Application to Learn C"
#define MESSAGE "ENTER A NUMBER: "
#define endMessage "End of Program"

union Data
{
    int i;
    float f;
};

typedef struct
{

    long pointer;
    char name[1024];
    long size;

} Pointers;

int main()
{

    printf("%s\n", NAME_PROGRAM);

    Pointers pointer;

    strcpy(pointer.name, "newInt");

    printf("%s", MESSAGE);
    scanf("%d", &pointer.pointer);

    long *ptr = &pointer.pointer;

    float a = 34 / 4;
    float xPos = 3;
    float yPos = 26;

    if (yPos / xPos > 8.6)
    {
        printf("%s\n", "Correct");
    }

    xPos = 3;
    yPos = 29;

    if (yPos / xPos > 9.6)
    {
        printf("%s %0.1f\n", "Number is More than 9.6 Answer: ", yPos / xPos);
    }

    if (sizeof(pointer.pointer) > 1)
    {
        printf("Size Is Larger than 1\n");
    }

    printf("%f\n", &a);

    if (&ptr == NULL)
    {
        printf("Null is Supported");
    }

    else
    {
        printf("The Pointer of %s is: %d\n", pointer.name, *ptr);
        printf("Size: %d\n", sizeof(pointer.pointer));
    }

    printf("%s\n", endMessage);
    ptr = NULL;
    return (int)0;
}
