#include <LibraryTest.h>
#include <Switch.h>
#include <Button.h>

void setup()
{
	Serial.begin(9600);
	Serial.println("Hello world");
	MessageFromLibrary();
	MessageFromButton();
}

void loop()
{
	
}