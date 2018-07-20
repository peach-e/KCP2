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
		
	executeTest();
	
	//initializePinModes();
	//LEDsOFF(); ???
	//InitTxPackets;
}

void loop()
{
	
}

