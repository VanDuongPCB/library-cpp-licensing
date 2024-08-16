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