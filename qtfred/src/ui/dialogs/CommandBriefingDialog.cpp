#include "CommandBriefingDialog.h"
#include "ui_CommandBriefingDialog.h"

namespace fso {
namespace fred {
namespace dialogs {

CommandBriefingDialog::CommandBriefingDialog(QWidget* parent, EditorViewport* viewport) :
	QDialog(parent), ui(new Ui::CommandBriefingDialog()), _model(new CommandBriefingDialogModel(this, viewport)),
	_viewport(viewport) {
    ui->setupUi(this);

	connect(this, &QDialog::accepted, _model.get(), &CommandBriefingDialogModel::apply);
	connect(this, &QDialog::rejected, _model.get(), &CommandBriefingDialogModel::reject);

	connect(_model.get(), &AbstractDialogModel::modelChanged, this, &CommandBriefingDialog::updateUI);

	updateUI();

	// Resize the dialog to the minimum size
	resize(QDialog::sizeHint());
}

CommandBriefingDialog::~CommandBriefingDialog() {
}

void CommandBriefingDialog::closeEvent(QCloseEvent * event) {
	auto button = _viewport->dialogProvider->showButtonDialog(DialogType::Question, "Changes detected", "Do you want to keep your changes?",
	{ DialogButton::Yes, DialogButton::No, DialogButton::Cancel });

	if (button == DialogButton::Cancel) {
		event->ignore();
		return;
	}

	if (button == DialogButton::Yes) {
		accept();
		return;
	}

	QDialog::closeEvent(event);
}

void CommandBriefingDialog::updateUI() {

}

void CommandBriefingDialog::on_actionTeam_1_triggered() {

}

void CommandBriefingDialog::on_actionTeam_2_triggered() {

}

void CommandBriefingDialog::on_actionBalance_Teams_triggered() {

}

}
}
}
