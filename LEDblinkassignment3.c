#define F_CPU 16000000L
#define DDRB *((volatile unsigned char *)0x24)
#define PORTB *((volatile unsigned char *)0x25)

int main()
{
	volatile unsigned long i,f;
	DDRB |= 1 << 5;
	while(1)
	{
		PORTB |= 1 << 5;
		for(i = 0; i < 440000; i++)
		{

		}
		PORTB &= ~(1 << 5);
		for(i = 0; i < 440000; i++)
		{

		}
		
	}	
	return 0;
}