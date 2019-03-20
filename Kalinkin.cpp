#include "DataBaseProvider.h"

DataBaseSettings DataBaseProvider::settings;

bool DataBaseProvider::execQuery(QSqlQuery query) {
	bool result = false;
	try {
		if(!settings.db.isOpen())
			settings.db.open();
		result = query.exec();
	}

	//TODO 
	//��������� ������
	//��������� ������ ������� ������� ��� ���������� �����������
	catch(...){}

	return result;
}

QSqlQuery DataBaseProvider::getQuery() {
	return QSqlQuery(settings.db);
}

//new message TODO
//other new message TODO