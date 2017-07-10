#ifndef DEBRIEFINGEDITORDIALOG_H
#define DEBRIEFINGEDITORDIALOG_H

#include <QDialog>

namespace fso {
namespace fred {
namespace dialogs {

namespace Ui {
class DebriefingEditorDialog;
}

class DebriefingEditorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DebriefingEditorDialog(QWidget *parent = 0);
    ~DebriefingEditorDialog();

private slots:
    void on_actionTeam_1_triggered();

    void on_actionTeam_2_triggered();

    void on_actionBalance_Teams_triggered();

private:
    Ui::DebriefingEditorDialog *ui;
};

}
}
}

#endif // DEBRIEFINGEDITORDIALOG_H
