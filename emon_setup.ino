/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\
            setup Current
\*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void emonSetup() {
	
    pinMode( A1, INPUT );
    pinMode( A2, INPUT );
    
    emon1.voltage(2, 234.26, 1.7);  // Voltage: input pin, calibration, phase_shift
    emon1.current(1, 111.1);       // Current: input pin, calibration. 
 
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
