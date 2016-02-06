#ifndef AbsEncoder_H
#define AbsEncoder_H

#include "WPILib.h"

class AbsEncoder
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	SPI *myAbsEncoder;
	short input;
public:
	AbsEncoder();
	void InitDefaultCommand();
	short getInput();
};

#endif
