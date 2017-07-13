#ifndef COMMANDBRIEFINGDIALOG_H
#define COMMANDBRIEFINGDIALOG_H

#include <QDialog>
#include <QCloseEvent>

#include <ui/FredView.h>

#include <mission/dialogs/CommandBriefingDialogModel.h>

namespace fso {
namespace fred {
namespace dialogs {

namespace Ui {
class CommandBriefingDialog;
}

class CommandBriefingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CommandBriefingDialog(QWidget* parent, EditorViewport* viewport);
    ~CommandBriefingDialog();

private slots:
    void on_actionTeam_1_triggered();

    void on_actionTeam_2_triggered();

    void on_actionBalance_Teams_triggered();

protected:
	void closeEvent(QCloseEvent*) override;

private:
	std::unique_ptr<Ui::CommandBriefingDialog> ui;
	std::unique_ptr<CommandBriefingDialogModel> _model;
	EditorViewport* _viewport;

	void updateUI();
};

}
}
}

#endif // COMMANDBRIEFINGDIALOG_H
