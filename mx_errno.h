/*
 * SPDX-License-Identifier: Apache-2.0
 *
 * Name:
 *	MOXA Library Error numbers
 *
 * Description:
 *	Error numbers for MOXA Libraries.
 *
 * Authors:
 *	2018	Ken CJ Chou	<KenCJ.Chou@moxa.com>
 */

#ifndef _MOXA_ERRNO_H
#define _MOXA_ERRNO_H

/*
 * Common
 */
#define E_SUCCESS 0  /* Exit successfully */
#define E_SYSFUNCERR -1  /* Error occurs in system functions (e.g. open) */
#define E_INVAL -2  /* Invalid input */
#define E_LIBNOTINIT -3  /* Library is not initiallized */
#define E_UNSUPCONFVER -4  /* Config version is not supported */
#define E_CONFERR -5  /* There is an error in config file */

/*
 * Platform info (-10 ~ -19)
 */
#define E_PINFO_NOSUCHIF -10  /* No such interface */

/*
 * GPIO (-20 ~ -29)
 */
#define E_GPIO_NOTEXP -20  /* GPIO pin is not exported */
#define E_GPIO_UNKDIR -21  /* Unknown GPIO direction get */
#define E_GPIO_UNKVAL -22  /* Unknown GPIO value get */

/*
 * Buzzer (-30 ~ -39)
 */
#define E_BUZZER_PLAYING -30  /* Buzzer is already playing */

/*
 * DIO (-40 ~ -49)
 */

/*
 * UART (-50 ~ -59)
 */
#define E_UART_NOTOPEN -50  /* UART port is not opened */
#define E_UART_GPIOIOCTLINCOMP -51  /* GPIO and IOCTL are imcompatible */
#define E_UART_UNKMODE -52  /* Unknown UART mode get */
#define E_UART_EXTBAUDUNSUP -53  /* Extended baudrate is not supported */

/*
 * LED (-60 ~ -69)
 */

/*
 * Pushbtn (-70 ~ -79)
 */
#define E_PBTN_NOTOPEN -70  /* Push button is not opened */

char mx_errmsg[256];

#endif /* _MOXA_ERRNO_H */
