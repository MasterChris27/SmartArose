#include <mraa/aio.h>
#include <mraa/gpio.h>


int main(){

mraa_gpio_context m_gpio; 
// initialisation
mraa_init();
m_gpio = mraa_gpio_init(2);
mraa_gpio_dir(m_gpio, MRAA_GPIO_OUT);
// alummage et extinction

mraa_gpio_write(m_gpio, 1);
// if (mraa_gpio_read(m_gpio_button)==1) do something     for buttons !
sleep(2); 
mraa_gpio_write(m_gpio, 0);
sleep(2);
mraa_gpio_write(m_gpio, 1);
// fin
mraa_gpio_close(m_gpio);
return(0);
}
