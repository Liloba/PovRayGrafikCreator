// PovRayGraficCreator.cpp: Hauptprojektdatei.

//#include "stdafx.h"
#include "fMain.h"

using namespace PovRayGraficCreator;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Aktivieren visueller Effekte von Windows XP, bevor Steuerelemente erstellt werden
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Hauptfenster erstellen und ausführen
	Application::Run(gcnew MainForm());
	return 0;
}
