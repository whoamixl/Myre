#ifndef COMMON_H
#define COMMON_H
#include<QtDebug>

#include<QMessageBox>
#include<QTreeView>
#include<QTextEdit>
#include<QStringList>
#include"EasyQJson.h"
#include<QStandardItemModel>
#ifdef QT_NO_DEBUG
const QString myfilename = "./RegExp.json";
#else
//const QString myfilename = "/Users/hideyoshi/Desktop/codes/Myre/RegExp.json";
const QString myfilename = "E:\\Myre\\RegExp.json";

#endif
#endif // COMMON_H
