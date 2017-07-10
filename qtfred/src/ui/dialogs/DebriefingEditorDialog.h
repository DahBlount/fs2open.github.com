#ifndef DEBRIEFINGEDITORDIALOG_H
#define DEBRIEFINGEDITORDIALOG_H

#include <QDialog>
#include <QCloseEvent>

#include <ui/FredView.h>

#include <mission\dialogs\DebriefingEditorDialogModel.h>

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
    explicit DebriefingEditorDialog(FredView* parent, EditorViewport* viewport);
    ~DebriefingEditorDialog();

protected:
	void closeEvent(QCloseEvent*) override;

private slots:
    void on_actionTeam_1_triggered();

    void on_actionTeam_2_triggered();

    void on_actionBalance_Teams_triggered();

private:
	std::unique_ptr<Ui::DebriefingEditorDialog> ui;
	std::unique_ptr<DebriefingEditorDialogModel> _model;
	EditorViewport* _viewport;
};

}
}
}

#endif // DEBRIEFINGEDITORDIALOG_H
