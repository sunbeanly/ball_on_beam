/**
  ******************************************************************************
  * @file   : *.cpp
  * @author : shentq
  * @version: V1.2
  * @date   : 2016/08/14

  * @brief   ebox application example .
  *
  * Copyright 2016 shentq. All Rights Reserved.         
  ******************************************************************************
 */

#include "ebox.h"
#include "ball_balance.h"

BallBalance ballBalance(&uart2, &PB8);

void setup()
{
    ebox_init();
    uart1.begin(115200);
	ballBalance.begin();
}
int main(void)
{
    setup();
    while(1)
    {

    }

}


