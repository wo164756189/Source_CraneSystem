#pragma once

#include <QString>

enum Manipulator
{
	open = 1,
	closed
};
enum ActionState
{
	running=1,
	stopping
};
enum CraneState
{
	working=1,
	shutdown,
	error
};

class SieCrane
{
public:
	SieCrane();
	~SieCrane();
private:
	int craneID;
	QString driverName;
	float speed;
	float position_x;
	float position_y;
	float position_z;
	enum Manipulator state_manipulator;     // state of the manipulator end
	enum ActionState state_action;          // action state of the crane
    enum CraneState state_crane;            // state of the crane
	bool loadingLadle;                      // if the crane is loaded
	bool carrierTruck;                      // if the truck comes
	bool ladleOnTruck;                      // if the ladle is on the truck
	bool steelLevel;                        // the level of steel in the ladle
};

