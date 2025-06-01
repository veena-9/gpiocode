
#define GPIOA_BASE 0x40020000
#define RCC_BASE   0x40023800

#define RCC_AHB1ENR (RCC_BASE + 0x30)

#define GPIOA_MODE (GPIO_BASE + 0x00)
#define GPIOA_ODR  (GPIO_BASE + 0x14)


void set_mode(int,int *,int);
void led_on(int,int *,int);
void led_off(int,int *,int);
void delay(int);


