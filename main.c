#include <kipr/botball.h>

int main()
{
    cmpc(2);                // moves forward at beginning
    while(gmpc(2)<1950)
    {
        motor(2,96);
        motor(3,100);
    }
    ao();
    msleep(1500); 
    
    motor(2,-96);    //robot turns left
    motor(3,100);
    msleep(745);
    
    motor(2,96);    //robot moves cargo to medical
    motor(3,100);
    msleep(4500);
    
    motor(2,-96); //robot moves back to starting zone
    motor(3,-100);
    msleep(6600);
    
    motor(2,-96);   //robot turns left to face other side
    motor(3,100);
    msleep(320);
    
    motor(2,96);  //robot moves towards left zone
    motor(3,100);
    msleep(5300);
    
    motor(2,96);   //robot turns to pick up the rectangular yellow block
    motor(3,-100);
    msleep(1000);
    
    motor(2,0);   //waits 1 second
    motor(3,0);
    msleep(1000);
    
    motor(2,96);   //robot moves rectangle yellow block into medical zone
    motor(3,100);
    msleep(3150);
    
    motor(2,0);   //waits 1 second
    motor(3,0);
    msleep(1000);
    
    motor(2,-96);    //robot returns back into left zone
    motor(3,-100);
    msleep(3000);
    
    motor(2,0);     //robot waits a second
    motor(3,0);
    msleep(1000);
    
    motor(2,-96);    //robot turns to face cube contraption
    motor(3,100);
    msleep(850);
    
    motor(2,50);    //robot moves towards cubes
    motor(3,54);
    msleep(1000);
    
    return 0;
}
