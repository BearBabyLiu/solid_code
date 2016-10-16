#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class AbstractSwitch
{
    public:
        virtual int turn_on() = 0;
        virtual int turn_off() = 0;
};

class LightSwitch: public AbstractSwitch
{
    public:
        virtual int turn_on()
        {
            printf("light turn on success!\n");
        }

        virtual int turn_off()
        {
            printf("light turn off success!\n");
        }
};

class FanSwitch: public AbstractSwitch
{
    public:
        virtual int turn_on()
        {
            printf("fan turn on success!\n");
        }

        virtual int turn_off()
        {
            printf("fan turn off success!\n");
        }
};


class DoorSwitch: public AbstractSwitch
{
    public:
        virtual int turn_on()
        {
            printf("door turn on success!\n");
        }

        virtual int turn_off()
        {
            printf("door turn off success!\n");
        }
};

class ControlPane
{
    public:
        void process(AbstractSwitch *p)
        {
            p->turn_on();
            p->turn_off();
        }
};

int main()
{
    ControlPane tPane;
    LightSwitch tLight;
    tPane.process((AbstractSwitch*)&tLight);
}
