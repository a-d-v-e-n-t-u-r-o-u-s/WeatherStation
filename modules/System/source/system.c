#include "system.h"
#include "stm8l15x_clk.h"
#include "system_timer.h"
#include "system_common.h"

#define SYSTEM_MAX_TASKS    5

typedef struct
{
    SYSTEM_task_t task;
} task_data_t;

static task_data_t tasks[SYSTEM_MAX_TASKS];
static uint8_t task_counter;

int8_t SYSTEM_register_task(SYSTEM_task_t task)
{
    uint8_t i=0;

    if(task == NULL || task_counter == SYSTEM_MAX_TASKS)
    {
        return -1;
    }

    tasks[task_counter+1].task = task;
    return 0;
}

void SYSTEM_main(void)
{
    uint8_t i = 0;

    for(i=0;i<task_counter;i++)
    {
        if(tasks[i].task != NULL)
        {
            tasks[i].task();
        }
    }
}

void SYSTEM_init(void)
{
    CLK_SYSCLKSourceConfig(CLK_SYSCLKSource_HSE);
    CLK_SYSCLKDivConfig(CLK_SYSCLKDiv_1);
    CLK_PeripheralClockConfig(CLK_Peripheral_BOOTROM,DISABLE);

    SYSTEM_timer_init();
}
