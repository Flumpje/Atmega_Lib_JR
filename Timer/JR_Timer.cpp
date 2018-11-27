#include "C:\Users\jurgen\Documents\GitHub\Atmega_Lib_JR\Timer\JR_Timer.h"
#include "C:\Users\jurgen\Documents\Atmel Studio\7.0\JR_Macros.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 16000000

using namespace std;
using namespace JR;

void _Timer::turnLEDOn(void)
{
	//LED_ON;
}

void _Timer::initTimer(void)
{
	BIT_ON_IN_REG(TCCR1B, WGM12);
	BIT_ON_IN_REG(TIMSK1, OCIE1A);
}

void _Timer::startTimer(void)
{
	BIT_ON_IN_REG(TCCR1B, CS12);
}

void _Timer::stopTimer(void)
{
	BITS_3_OFF_IN_REG(TCCR1B, CS10, CS11, CS12);
}

void _Timer::setFrequency(uint8_t freq)
{
	OCR1A = (F_CPU /(freq*2*256)-1);
}

