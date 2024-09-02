#include "FxLicenseServices.h"
#include <QCoreApplication>
#include <QDir>
#include <QFile>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

FxLicenseServices::FxLicenseServices( QObject* parent ) : QObject( parent )
{
    init();
}

FxLicenseServices::~FxLicenseServices()
{
}

const QString FxLicenseServices::GetLicenseID( const QString appName )
{
    QString machineId = QSysInfo::machineUniqueId().toUpper();
    return machineId;
}

bool FxLicenseServices::CheckLicenseKey( const QString key )
{
    return true;
}

void FxLicenseServices::init()
{
    QString appPath = QCoreApplication::applicationDirPath();
    QString themeDir = appPath + "/license";
    QDir().mkdir( themeDir );
}

FxLicenseServices* GetLicenseServices()
{
    static FxLicenseServices instance;
    return &instance;
}