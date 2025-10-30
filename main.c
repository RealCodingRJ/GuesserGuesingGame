#include <stdio.h>
#include <string.h>

#define NAME_PROGRAM "Welcome Basic Application to Learn C"
#define MESSAGE "ENTER A NUMBER: "
#define endMessage "End of Program"

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

    if (sizeof(pointer.pointer) > 1)
    {
        printf("Size Is Larger than 1\n");
    }

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
    return 0;
}
