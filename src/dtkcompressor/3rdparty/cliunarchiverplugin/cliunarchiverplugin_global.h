#ifndef CLIUNARCHIVERPLUGIN_GLOBAL_H
#define CLIUNARCHIVERPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CLIUNARCHIVERPLUGIN_LIBRARY)
#  define CLIUNARCHIVERPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CLIUNARCHIVERPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CLIUNARCHIVERPLUGIN_GLOBAL_H