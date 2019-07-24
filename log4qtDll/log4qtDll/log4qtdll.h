#ifndef LOG4QTDLL_H
#define LOG4QTDLL_H

#include "log4qtdll_global.h"
#include "log4qt/logger.h"

class LOG4QTDLLSHARED_EXPORT Log4qtDll : public QObject
{
    Q_OBJECT
    LOG4QT_DECLARE_QCLASS_LOGGER
public:
    explicit Log4qtDll(QObject *parent = 0);
    ~Log4qtDll();

    static Log4qtDll *instance();
    virtual void debug(const QString& log) {logger()->debug(log);}
    virtual void info (const QString& log) {logger()->info(log);}
    virtual void warn (const QString& log) {logger()->warn(log);}
    virtual void error(const QString& log) {logger()->error(log);}
    virtual void fatal(const QString& log) {logger()->fatal(log);}
};

#endif // LOG4QTDLL_H
