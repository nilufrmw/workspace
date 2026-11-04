#include <stdint.h>

/* define the structural mold (No typedef!) */
struct port {
  volatile uint32_t DIR;     /* Offset 0x00: Data Direction */
  volatile uint32_t DIRTGL;  /* Offset 0x04: Data Direction Toggle */
  volatile uint32_t DIRCLR;  /* Offset 0x08: Data Direction Clear */
  volatile uint32_t DIRSET;  /* Offset 0x0C: Data Direction Set */
  volatile uint32_t OUT;     /* Offset 0x10: Data Output Value */
  volatile uint32_t OUTTGL;  /* Offset 0x14: Data Output Value Toggle */
  volatile uint32_t OUTCLR;  /* Offset 0x18: Data Output Value Clear */
  volatile uint32_t OUTSET;  /* Offset 0x1C: Data Output Value Set */
  volatile uint32_t IN;      /* Offset 0x20: Data Input Value */
};

/* directly cast the raw SAMD21 hardware address to the struct pointer */
#define PORT_A ((struct port *) 0x41004400)


void setup() {
  /* set Pin 17 as an output using the DIRSET register */
  PORT_A->DIRSET = (1 << 17);
}

void loop() {
  /* toggle Pin 17 using the hardware toggle register */
  PORT_A->OUTTGL = (1 << 17);
    
  /* Simple delay loop */
  for (volatile int i = 0; i < 100000; i++);
}
