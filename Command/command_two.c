#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Light_TurnOn();
int Light_TurnOff();
int Fan_TurnOn();
int Fan_TurnOff();
int Door_TurnOn();
int Door_TurnOff();

typedef int (*opt_fun)(void);

typedef enum ElecOper
{
    Light_On,
    Light_Off,
    Fan_On,
    Fan_Off,
    Door_On,
    Door_Off,
}ElecOper_T;

typedef struct opt_ops
{
    ElecOper_T e_opt;
    opt_fun func;
}opt_ops_t;

static opt_ops_t opts[] =
{
    {Light_On, Light_TurnOn},
    {Light_Off, Light_TurnOff},
    {Fan_On, Fan_TurnOn},
    {Fan_Off, Fan_TurnOff},
    {Door_On, Door_TurnOn},
    {Door_Off, Door_TurnOff},
};

int optnum = sizeof(opts)/sizeof(opt_ops_t);

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


int ControlPaneProcess(ElecOper_T opt)
{
    int error = 0;
    error = opts[opt].func();
    return error;
}


int main()
{
    int error = 0;
    ElecOper_T opt = Light_On;
    error = ControlPaneProcess(Light_On);
    if(error)
    {
        printf("ControlPaneProcess faild\n");
    }
    return error;
}



