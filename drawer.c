#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float szerokosc = get_float("Szerokosc polki: \n");
    float glebokosc = get_float("Glebokosc polki: \n");
    float wysokosc = get_float("Wysokosc polki: \n");
    printf("Szerokosc frontu: %.0f\n", szerokosc - 6);
    printf("Wysokosc frontu: %.0f\n", wysokosc - 4);
    printf("Wysokosc boku i tyl z przodem: %.0f\n", wysokosc - 30);
    printf("Glebokosc boku: %.0f\n", glebokosc - 68.5);
    printf("Szerokosc tylu i przodu: %.0f\n", szerokosc - 26 - 36);

}