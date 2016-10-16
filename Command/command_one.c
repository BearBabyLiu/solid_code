#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum ElecOper
{
    Light_On,
    Light_Off,
    Fan_On,
    Fan_Off,
    Door_On,
    Door_Off,
}ElecOper_T;


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
    if(opt == Light_On)
    {
        error = Light_TurnOn();
    }
    else if(opt == Light_Off)
    {
        error = Light_TurnOff();
    }
    else if (opt == Fan_On)
    {
        error = Fan_TurnOn();
    }
    else if(opt == Fan_Off)
    {
        error = Fan_TurnOff();
    }
    else if(opt == Door_On)
    {
        error = Door_TurnOn();
    }
    else if(opt == Door_Off)
    {
        error = Door_TurnOff();
    }
    else
    {
        printf("invaild opt\n");
    }

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



