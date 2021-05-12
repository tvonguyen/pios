unsigned int *gpsel4 = 0xFE200010;
unsigned int *gpclr1 = 0xFE20002C;

void led_init() {
	unsigned int mask_number = 0xFFFFFE3F;
	*gpse14 = *gpse14 & mask_number;
	*gpse14 = *gpse14 | (1 << 6);
	return;
}

// pin -> 1

void led_on() {
	*gpset1 = (1 << 10);
}

//pin -> 0

void led-off() {
	*gpclr1 = (1 << 10);
}

// 1 second delay

void delay() {
	unsigned int i = 0;
	for(i, i < 100000; i++) {
		asm("NOP");
	}
}
