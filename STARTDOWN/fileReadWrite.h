#ifndef FILEREADWRITE_H
#define FILEREADWRITE_H

#include <QFile>
#include <QLabel>
#include <QTextStream>

namespace READWRITE{
    QStringList readFile(QString path){
        QFile file(path);
        if(!file.open(QIODevice::ReadWrite | QIODevice::Text)){
            QStringList lines;
            return lines;
        }
        QTextStream in(&file);
        QStringList lines;
        while (!in.atEnd()) {
            QString line = in.readLine();
            lines << line;
        }
        return lines;
    }

    void writeFile(QString path, int row, QString info){
        QFile file(path);
        if(!file.open(QIODevice::ReadWrite | QIODevice::Text))
            return;
        QTextStream in(&file);
        QStringList lines;
        while (!in.atEnd()) {
            QString line = in.readLine();
            lines << line;
        }
        lines.removeAt(row);
        lines.insert(row, info);
        file.close();
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return;
        QTextStream out(&file);
        foreach(QString line, lines) {
            out << line << "\n";
        }
    }
}

#endif // FILEREADWRITE_H
