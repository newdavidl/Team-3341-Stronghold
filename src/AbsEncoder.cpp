#include "AbsEncoder.h"

AbsEncoder::AbsEncoder()
{
	input = 0;
	myAbsEncoder = new SPI(SPI::kOnboardCS0);
	myAbsEncoder->Read(true, (uint8_t *)input, sizeof(input));
}

void AbsEncoder::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
short AbsEncoder::getInput()
{
	return input;
}
