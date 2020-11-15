#include <stdio.h>

int main(int ac, char **av)
{
    int nb_tickets = 0;
    int price_100 = 0;
    int price_200 = 0;
    int other_price = 0;
    int price_final = 0;

    if (scanf("%d", &nb_tickets) && scanf("%d", &price_100) && scanf("%d", &price_200) && scanf("%d", &other_price)) {
        if (nb_tickets <= 100) {
            price_final = sum(nb_tickets, price_100);
            printf("%d\n", price_final);
        } else if (nb_tickets <= 200) {
            price_final = sum(100, price_100);
            nb_tickets = nb_tickets - 100;
            price_final = price_final + sum(nb_tickets, price_200);
            printf("%d\n", price_final);
        } else {
            price_final = sum(100, price_100);
            price_final = price_final + sum(100, price_200);
            nb_tickets = nb_tickets - 200;
            price_final = price_final + sum(nb_tickets, other_price);
            printf("%d\n", price_final);
        }
    }
    return (0);
}

int sum (int nb_tickets, int price)
{
    int final_price = 0;

    final_price = (nb_tickets * price);
    return (final_price);
}
