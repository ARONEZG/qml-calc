/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#include <modelclass.h>


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Calculator()
{
    qmlRegisterTypesAndRevisions<ModelClass>("Calculator", 1);
    qmlRegisterAnonymousType<QAbstractItemModel, 254>("Calculator", 1);
    QMetaType::fromType<QStandardItemModel *>().id();
    qmlRegisterModule("Calculator", 1, 0);
}

static const QQmlModuleRegistration calculatorRegistration("Calculator", qml_register_types_Calculator);
