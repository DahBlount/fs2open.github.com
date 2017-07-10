#include "DebriefingEditorDialog.h"
#include "ui_DebriefingEditorDialog.h"

#include <QMenuBar>

namespace fso {
namespace fred {
namespace dialogs {

DebriefingEditorDialog::DebriefingEditorDialog(FredView* parent, EditorViewport* viewport) :
	QDialog(parent), ui(new Ui::DebriefingEditorDialog()), _model(new DebriefingEditorDialogModel(this, viewport)),
	_viewport(viewport) {
    ui->setupUi(this);
}

DebriefingEditorDialog::~DebriefingEditorDialog() { }

void DebriefingEditorDialog::closeEvent(QCloseEvent * event) {
	auto button = _viewport->dialogProvider->showButtonDialog(DialogType::Question, "Changes detected", "Do you want to keep your changes?",
	{ DialogButton::Yes, DialogButton::No, DialogButton::Cancel });

	if (button == DialogButton::Cancel) {
		event->ignore();
		return;
	}

	if (button == DialogButton::No) {
		reject();
		return;
	}

	if (button == DialogButton::Yes) {
		accept();
		return;
	}

	QDialog::closeEvent(event);
}

void DebriefingEditorDialog::on_actionTeam_1_triggered() {

}

void DebriefingEditorDialog::on_actionTeam_2_triggered() {

}

void DebriefingEditorDialog::on_actionBalance_Teams_triggered() {

}

}
}
}
