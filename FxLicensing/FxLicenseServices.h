#pragma once
#include "FxLicenseAPI.h"

#include <QObject>

class FX_LICENSING_API FxLicenseServices : QObject
{
	Q_OBJECT
public:
	explicit FxLicenseServices( QObject* parent = nullptr );
	~FxLicenseServices();

private:
	void init();
};

FxLicenseServices FX_LICENSING_API *GetLicenseServices();