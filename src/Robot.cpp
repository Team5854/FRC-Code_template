#include "WPILib.h"
#include <iostream>




class Robot: public IterativeRobot
{


	/*
	 *  Declare all Objects (Robot Drive, Motors, Joysticks, Inputs)
	 *
	 *  Also Declare Different Variables (Ask John)
	 *
	 */


public:
	Robot() :
		/*
		 * Set All Objects to have a port on the roboRio.
		 */

		launchAngle(8)
	{


		 // Declare certian things when robot starts.


		SmartDashboard::init();
	}
	~Robot()
	{

		// releasing memory that was allocated on the heap

	}


	void PublishDash()	//publishes all values to the smartdashboard.
	{
		//SmartDashboard::Put<Type (ie. number or boolean)>("Name Of Place On Dashboard" , Number);
		// Example : SmartDashboard::PutNumber("Pot Voltage", pot.GetAverageVoltage());

	}

private:

	void RobotInit()	//Code that executes on startup.
	{

	}

	void AutonomousInit()	//Code that executes at the beginning of auto.
	{

	}

	void AutonomousPeriodic()	//Autonomous code.
	{

	}

	void TeleopInit()	//executes at the beginning of teleop.
	{

	}

	void TeleopPeriodic()		//Code that runs during teleop.
	{

	}

	void TestPeriodic()	//this executes if you switch to the test section of the dashboard.
	{

	}
};

START_ROBOT_CLASS(Robot)
