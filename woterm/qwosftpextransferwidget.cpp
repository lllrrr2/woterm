/*******************************************************************************************
*
* Copyright (C) 2022 Guangzhou AoYiDuo Network Technology Co.,Ltd. All Rights Reserved.
*
* Contact: http://www.aoyiduo.com
*
*   this file is used under the terms of the GPLv3[GNU GENERAL PUBLIC LICENSE v3]
* more information follow the website: https://www.gnu.org/licenses/gpl-3.0.en.html
*
*******************************************************************************************/

#include "qwosftpextransferwidget.h"
#include "ui_qwosftpextransferwidget.h"

QWoSftpExTransferWidget::QWoSftpExTransferWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QWoSftpExTransferWidget)
{
    ui->setupUi(this);
}

QWoSftpExTransferWidget::~QWoSftpExTransferWidget()
{
    delete ui;
}