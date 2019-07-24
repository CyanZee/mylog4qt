#ifndef LOG4QTDLL_GLOBAL_H
#define LOG4QTDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LOG4QTDLL_LIBRARY)
#  define LOG4QTDLLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LOG4QTDLLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LOG4QTDLL_GLOBAL_H
