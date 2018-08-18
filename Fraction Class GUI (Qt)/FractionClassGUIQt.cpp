#include "stdafx.h"
#include "FractionClassGUIQt.h"
#include "FractionMechanics.h"

void FractionClassGUIQt::ChangeMode(bool realtime)
{
	if (realtime)
	{
		ui.calculate->setEnabled(false);
		connect(ui.frac1nume, SIGNAL(valueChanged(int)), this, SLOT(Calculate()));
		connect(ui.frac1denom, SIGNAL(valueChanged(int)), this, SLOT(Calculate()));
		connect(ui.frac2nume, SIGNAL(valueChanged(int)), this, SLOT(Calculate()));
		connect(ui.frac2denom, SIGNAL(valueChanged(int)), this, SLOT(Calculate()));
		connect(ui.op, SIGNAL(currentTextChanged(QString)), this, SLOT(Calculate()));
	}
	else
	{
		ui.calculate->setEnabled(true);
		disconnect(ui.frac1nume, SIGNAL(valueChanged(int)), this, SLOT(Calculate()));
		disconnect(ui.frac1denom, SIGNAL(valueChanged(int)), this, SLOT(Calculate()));
		disconnect(ui.frac2nume, SIGNAL(valueChanged(int)), this, SLOT(Calculate()));
		disconnect(ui.frac2denom, SIGNAL(valueChanged(int)), this, SLOT(Calculate()));
		disconnect(ui.op, SIGNAL(currentTextChanged(QString)), this, SLOT(Calculate()));
	}
}

void FractionClassGUIQt::Calculate()
{
	if (ui.frac1denom->value() == 0 || ui.frac2denom->value() == 0) ui.result->setPlainText("Denom can't be 0");
	else
	{
		Fraction frac1(ui.frac1nume->value(), ui.frac1denom->value());
		Fraction frac2(ui.frac2nume->value(), ui.frac2denom->value());
		Fraction res;
		switch (ui.op->currentText().at(0).toLatin1())
		{
		case '+':
		{
			res = frac1 + frac2;
			break;
		}
		case '-':
		{
			res = frac1 - frac2;
			break;
		}
		case '*':
		{
			res = frac1 * frac2;
			break;
		}
		case '/':
		{
			res = frac1 / frac2;
			break;
		}
		}
		ui.result->setPlainText(QString::fromStdString(res.to_string()));
	}
}

FractionClassGUIQt::FractionClassGUIQt(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.calculate, SIGNAL(clicked()), this, SLOT(Calculate()));
	connect(ui.realtime, SIGNAL(toggled(bool)), this, SLOT(ChangeMode(bool)));
}
