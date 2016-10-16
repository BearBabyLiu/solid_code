#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Light_TurnOn()
{
    printf("light turn on success!\n");
    return 0;
}

int Light_TurnOff()
{
    printf("light turn off success!\n");
    return 0;
}


int Fan_TurnOn()
{
    printf("Fan turn on success!\n");
    return 0;
}

int Fan_TurnOff()
{
    printf("Fan turn off success!\n");
    return 0;
}

int Door_TurnOn()
{
    printf("Door turn on success!\n");
    return 0;
}

int Door_TurnOff()
{
    printf("Door turn off success!\n");
    return 0;
}

typedef struct Base
{
    int (*turn_on)(void);
    int (*turn_off)(void);
}Base;

typedef struct light
{
    Base vtable;
}light_t;

typedef struct fan
{
    Base vtable;
}fan_t;

typedef struct door
{
    Base vtable;
}doort;

static Base light_interface =
{
    .turn_on = Light_TurnOn,
    .turn_off = Light_TurnOff,
};

static Base fan_interface =
{
    .turn_on = Fan_TurnOn,
    .turn_off = Fan_TurnOff,
};

static Base door_interface =
{
    .turn_on = Door_TurnOn,
    .turn_off = Door_TurnOff,
};

void ControlPaneProcess(Base* opt)
{
    opt->turn_on();
    opt->turn_off();
}

typedef struct ControlPane
{
    Base *pOpt;
}ControlPane_t;


int main()
{
    light_t *plight = (light_t*)malloc(sizeof(light_t));
    plight->vtable = light_interface;

    ControlPaneProcess((Base*)plight);
    free(plight);
    return 0;
}

