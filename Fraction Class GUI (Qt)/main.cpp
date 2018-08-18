#include "stdafx.h"
#include "FractionClassGUIQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FractionClassGUIQt w;
	w.show();
	return a.exec();
}
