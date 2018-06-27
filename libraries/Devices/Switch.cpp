#include "Arduino.h"
#include "Switch.h"

//Switch(unsigned char pin, PinMode pinMode)
//{
	
//}

bool Switch::getState() const
{
	return m_state;
}