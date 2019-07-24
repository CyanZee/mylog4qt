#include "log4qtdll.h"
#include "log4qt/propertyconfigurator.h"

Log4qtDll::Log4qtDll(QObject *parent) : QObject(parent)
{
    Log4Qt::PropertyConfigurator::configure("QtLog4Qt.conf");
}

Log4qtDll::~Log4qtDll()
{

}

Log4qtDll *Log4qtDll::instance()
{
    static Log4qtDll obj;
    return &obj;
}
