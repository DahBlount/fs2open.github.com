#include "DebriefingEditorDialog.h"
#include "ui_DebriefingEditorDialog.h"

#include <QMenuBar>

namespace fso {
namespace fred {
namespace dialogs {

DebriefingEditorDialog::DebriefingEditorDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DebriefingEditorDialog)
{
    ui->setupUi(this);
}

DebriefingEditorDialog::~DebriefingEditorDialog()
{
    delete ui;
}

void DebriefingEditorDialog::on_actionTeam_1_triggered()
{

}

void DebriefingEditorDialog::on_actionTeam_2_triggered()
{

}

void DebriefingEditorDialog::on_actionBalance_Teams_triggered()
{

}

}
}
}
