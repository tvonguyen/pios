// # include <stdio.h>
# include "list.h"
# include "gpio.h"
// # include "rprintf.h"
# include "serial.h"
# include "page.h"
# include "fat.h"
# include "sd.h"
# define NULL (void*)0

void bss_to_zero();

extern int __bss_start;
extern int __bss end;
extern struct ppage* free_list;

int global;

// hw 1
/*struct list_element b = {NULL, NULL, 1);
struct list_element a = {NULL, NULL, 5);
struct list_element c = {NULL, NULL, 2};
struct list_element *head = &a;

struct list_element* list = &a;
*/

void kernel_main() {
	
	// bss_to_zero();
	
	struct file fat_test;
	esp_printf(putc, "hello");
	sd_int();
	fatInit();
	fatOpen(&fat_test, "T E S T");

	// hw 7 - class
	/*init_pfa_list(); 
	struct ppage* test = free_list->next;
	esp_printf(putc, "Physical address: %x \n}, test->physical_addr); 
	 
	test = allocate_physical_pages(2);	}
	esp_printf(putc, "physical pages --> %x \n", test);
	esp_printf(putc, "physical pages --> %x \n", test->physical_addr);
	free_physical_pages(test);
	test = free_list->next;
	esp_print(putc, "Freed: %x \n", test-> physical_addr);*/
	
	// mmu
	// mmu_on();

	// hw 5
	// esp_printf(putc, "memory location for kernal main: %x \n", kernal_main);

	// hw 4
	/*led_on();
	delay();
	led_off();
	delay();
	led_init();*/

	// hw 1
	/* list_add(list, &b);
	list_add(list, &c);
	list_remove(head, 1);*/

	while (1) {
	}
}

// hw1

void bss_to_zero() {

	(&__bss_start)[0] = 0x0c;
	int x = 0;
	while ((&__bss_start) + x != &__bss_end) {
		(&__bss_start)[x] = 0;
		x++;
	}
}



