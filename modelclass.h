#ifndef MODELCLASS_H
#define MODELCLASS_H

#include <QObject>
#include <QQmlEngine>
#include <QStandardItemModel>



class ModelClass : public QStandardItemModel
{
    Q_OBJECT
    QML_ELEMENT
public:
    ModelClass();

    int rowCount(const QModelIndex & = QModelIndex()) const override
    {
        return 200;
    }

    int columnCount(const QModelIndex & = QModelIndex()) const override
    {
        return 200;
    }

    QVariant data(const QModelIndex &index, int role) const override
    {
        switch (role) {
        case Qt::DisplayRole:
            return QString("%1, %2").arg(index.column()).arg(index.row());
        default:
            break;
        }

        return QVariant();
    }

    QHash<int, QByteArray> roleNames() const override
    {
        return { {Qt::DisplayRole, "display"} };
    }
};

#endif // MODELCLASS_H
