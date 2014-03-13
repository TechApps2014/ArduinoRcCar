task main()
{
	boolean Safty = true;    // we added a manual safty swich on the vex remote
	
	if (Btn6U == true){
	}

	if (Safty == false){	// if safty is on then run 
		motor[port4] = vexRT(3); 
		motor[port5] = vexRT(2);
		
		if (Btn6U == true){ // turn safty back on
			Safty = true;
		}
	}

}
