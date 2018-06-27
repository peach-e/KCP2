#include "Arduino.h"
#include "Switch.h"

Switch::Switch(unsigned char pin, uint8_t pinMode)
{
	
}

bool Switch::getState() const
{
	return m_state;
}