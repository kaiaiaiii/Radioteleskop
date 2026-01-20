#makefile, ich hab keine Ahnung wie das geht

Signaltransformation: SignalTransformation/SignalTransformation.cpp
	g++ SignalTransformation/SignalTransformation.cpp -o "Signaltransformation"

PiAuslesen: SignalTransformation/ReadDataFromPi.cpp
	g++ SignalTransformation/ReadDataFromPi.cpp -o "PiAuslesen"

