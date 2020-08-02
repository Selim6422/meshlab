/****************************************************************************
* VCGLib                                                            o o     *
* Visual and Computer Graphics Library                            o     o   *
*                                                                _   O  _   *
* Copyright(C) 2004-2020                                           \/)\/    *
* Visual Computing Lab                                            /\/|      *
* ISTI - Italian National Research Council                           |      *
*                                                                    \      *
* All rights reserved.                                                      *
*                                                                           *
* This program is free software; you can redistribute it and/or modify      *
* it under the terms of the GNU General Public License as published by      *
* the Free Software Foundation; either version 2 of the License, or         *
* (at your option) any later version.                                       *
*                                                                           *
* This program is distributed in the hope that it will be useful,           *
* but WITHOUT ANY WARRANTY; without even the implied warranty of            *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
* GNU General Public License (http://www.gnu.org/licenses/gpl.txt)          *
* for more details.                                                         *
*                                                                           *
****************************************************************************/

#ifndef MESHLABSETTINGSDIALOG_H
#define MESHLABSETTINGSDIALOG_H

#include <QDialog>
#include <QTableWidget>
#include <common/filter_parameter/rich_parameter_list.h>


class MeshLabSettingsDialog : public QDialog
{
Q_OBJECT
public:
	MeshLabSettingsDialog(
			RichParameterList& parset,
			const RichParameterList& defparset,
			QWidget *parent = 0);
	~MeshLabSettingsDialog();
	//void loadCurrentSetting(RichParameterSet& parset);

signals:
	void applyCustomSetting();

private slots:
	void openSubDialog(QTableWidgetItem* itm);

	void updateSingleSetting(const RichParameter& rp);

private:
	void updateSettings();

	RichParameterList& curParSet;
	const RichParameterList& defParSet;
	QTableWidget* tw;
	void dispatch(const RichParameter& par);
	QPushButton* closebut;

	static QTableWidgetItem* createQTableWidgetItemFromRichParameter(const RichParameter& pd);
};

#endif // MESHLABSETTINGSDIALOG_H
