/* SPDX-License-Identifier: GPL-2.0-only */

#include <device/mmio.h>
#include <types.h>
#include <gpio.h>

void gpio_configure(gpio_t gpio, uint32_t func, uint32_t pull,
				uint32_t drive_str, uint32_t enable)
{
	uint32_t reg_val;
	struct tlmm_gpio *regs = (void *)(uintptr_t)gpio.addr;

	reg_val = ((enable & GPIO_CFG_OE_BMSK) << GPIO_CFG_OE_SHFT) |
		  ((drive_str & GPIO_CFG_DRV_BMSK) << GPIO_CFG_DRV_SHFT) |
		  ((func & GPIO_CFG_FUNC_BMSK) << GPIO_CFG_FUNC_SHFT) |
		  ((pull & GPIO_CFG_PULL_BMSK) << GPIO_CFG_PULL_SHFT);

	write32(&regs->cfg, reg_val);
}

void gpio_set(gpio_t gpio, int value)
{
	struct tlmm_gpio *regs = (void *)(uintptr_t)gpio.addr;
	write32(&regs->in_out, (!!value) << GPIO_IO_OUT_SHFT);
}

int gpio_get(gpio_t gpio)
{
	struct tlmm_gpio *regs = (void *)(uintptr_t)gpio.addr;

	return ((read32(&regs->in_out) >> GPIO_IO_IN_SHFT) &
		GPIO_IO_IN_BMSK);
}

void gpio_input_pulldown(gpio_t gpio)
{
	gpio_configure(gpio, GPIO_FUNC_DISABLE,
				GPIO_PULL_DOWN, GPIO_2MA, GPIO_DISABLE);
}

void gpio_input_pullup(gpio_t gpio)
{
	gpio_configure(gpio, GPIO_FUNC_DISABLE,
				GPIO_PULL_UP, GPIO_2MA, GPIO_DISABLE);
}

void gpio_input(gpio_t gpio)
{
	gpio_configure(gpio, GPIO_FUNC_DISABLE,
				GPIO_NO_PULL, GPIO_2MA, GPIO_DISABLE);
}

void gpio_output(gpio_t gpio, int value)
{
	gpio_set(gpio, value);
	gpio_configure(gpio, GPIO_FUNC_DISABLE,
				GPIO_NO_PULL, GPIO_2MA, GPIO_ENABLE);
}
