#include <stdio.h>
#include <string.h>

#include "car.h"

void carInit(Car *c)
{
    c->timeSize = 0;
    c->arrivalTime = 0;
    c->finish = 0;
    c->services = 0;
    c->switchTime = 0;
}

void carInput(Car *c)
{
    carInit(c);

    scanf("%s", (*c).name);
    scanf("%s", (*c).kodeJenis);
    scanf("%d", &((*c).arrivalTime));
    (*c).timeSize = getTimeSize(*c);
    (*c).switchTime = getSwitchTime(*c);
}

void carPrint(Car c)
{
    printf("%s %s %d %d %d %d %d\n", c.name, c.kodeJenis, c.timeSize, c.arrivalTime, c.services, c.finish, c.switchTime);
}

void carWash(Car *c, int *time)
{
    if ((*c).arrivalTime > *time)
        c->services = *time + (*c).arrivalTime;
    else
        c->services = *time;

    *time += (*c).timeSize;
    c->finish = *time;

    *time += (*c).switchTime;
}

int getTimeSize(Car c)
{
    if (strcmp(c.kodeJenis, "#01") == 0)
    {
        return 20;
    }
    else if (strcmp(c.kodeJenis, "#02") == 0)
    {
        return 30;
    }
    else if (strcmp(c.kodeJenis, "#03") == 0)
    {
        return 45;
    }
    else if (strcmp(c.kodeJenis, "#04") == 0)
    {
        return 60;
    }
    else if (strcmp(c.kodeJenis, "#05") == 0)
    {
        return 80;
    }
    else if (strcmp(c.kodeJenis, "#06") == 0)
    {
        return 100;
    }
    else if (strcmp(c.kodeJenis, "#07") == 0)
    {
        return 120;
    }
    else if (strcmp(c.kodeJenis, "#08") == 0)
    {
        return 125;
    }

    return 0;
}

int getSwitchTime(Car c)
{
    if (strcmp(c.kodeJenis, "#01") == 0)
    {
        return 1;
    }
    else if (strcmp(c.kodeJenis, "#02") == 0)
    {
        return 2;
    }
    else if (strcmp(c.kodeJenis, "#03") == 0)
    {
        return 4;
    }
    else if (strcmp(c.kodeJenis, "#04") == 0)
    {
        return 5;
    }
    else if (strcmp(c.kodeJenis, "#05") == 0)
    {
        return 6;
    }
    else if (strcmp(c.kodeJenis, "#06") == 0)
    {
        return 8;
    }
    else if (strcmp(c.kodeJenis, "#07") == 0)
    {
        return 9;
    }
    else if (strcmp(c.kodeJenis, "#08") == 0)
    {
        return 10;
    }

    return 0;
}