#pragma once
#include "FxLicenseAPI.h"

#include <QObject>

class FX_LICENSING_API FxLicenseServices : QObject
{
	Q_OBJECT
public:
	explicit FxLicenseServices( QObject* parent = nullptr );
	~FxLicenseServices();
	const QString GetLicenseID( const QString appName );
	bool CheckLicenseKey( const QString key );

private:
	void init();
};

FxLicenseServices FX_LICENSING_API *GetLicenseServices();