#pragma config(Sensor, dgtl1,  SONAR_VAL,      sensorSONAR_inch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true){

	
		if (SensorValue[SONAR_VAL] <= 5){
			motor[port2] = -100;
			motor[port3] = 100;
		}
		else if (SensorValue[SONAR_VAL] == 6){
			motor[port2] = 0;
			motor[port3] = 0;
		}
	
		else{
			motor[port2] = 0;
			motor[port3] = 0;
		
		
		}
	}
}
