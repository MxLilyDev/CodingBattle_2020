#include <string.h>
#include <stdio.h>

int main(int ac, char **av)
{
    char world[100000];
    int value = 0;

    if (scanf("%s", &world)) {
        value = (cont_v(world) * 2) - (strlen(world) - cont_v(world));
        if (cont_ker(world) == 0)
            value = value + 5;
        if (palindrom(world) == 0 && value > 0)
            value = value * 2;
    }
    printf("%d", value);
    return (0);
}

int palindrom(char *str)
{
    int len = 0;
    int j = 0;

    len = strlen(str) - 1;
    while (j < len) {
        if (str[len] != str[j]) {
            return (1);
        }
        len--;
        j++;
    }
    return (0);
}

int cont_ker(char *str)
{
    int i = 0;
    int len = 0;

    len = strlen(str);

    while(i < len) {
        if (str[i] == 'k' && str[i + 1] == 'e' && str[i + 2] == 'r') {
            return (0);
        }
        i++;
    }
    return (1);
}


int cont_v(char *str)
{
    int i = 0;
    int values = 0;

    while (str[i] != '\0') {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y') {
            values = values + 1;
        }
        i++;
    }
    return (values);
}
