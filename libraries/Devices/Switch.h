#ifndef Switch_h
#define Switch_h

#include "Arduino.h"


/*-----------------------------------------------------------------------

Purpose: [A description of why this class exists.  For what reason was it written?  Which jobs does it perform?]

Constructors: [names & arguments]

Methods: [return type, names, & arguments of all public methods]

-----------------------------------------------------------------------*/
class Switch
{
	private:
		bool m_state;
		unsigned char m_pin; //Range: 0-255
		
	public:
		//Switch(unsigned char pin, PinMode pinMode);
		bool getState() const;
		
};

#endif