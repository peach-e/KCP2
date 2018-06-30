#include <LibraryTest.h> //TBD DELETE

#include <Configs.h>
#include <PinAssignment.h>

//Devices
#include <Switch.h>
#include <Button.h>

#include <ElectricalModuleTests.h>

void setup()
{
	Serial.begin(BAUDRATE);
	
	//setPinAssignment(); TBD - remove
		
	executeTest();
	
	//initializePinModes();
	//LEDsOFF(); ???
	//InitTxPackets;
}

void loop()
{
	
}

