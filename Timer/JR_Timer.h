#ifndef JR_TIMER_H
#define JR_TIMER_H
#include <avr/io.h>
	
namespace JR
{
	class _Timer
	{
	public:
		void turnLEDOn(void);
		void initTimer(void);
		void startTimer(void);
		void stopTimer(void);
		void setFrequency(uint8_t freq);
	};
}
#endif