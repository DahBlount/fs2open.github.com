

#include "DebriefingEditorDialogModel.h"
#include "ui/dialogs/DebriefingEditorDialog.h"

#include <QtWidgets>

namespace fso {
namespace fred {
namespace dialogs {
DebriefingEditorDialogModel::DebriefingEditorDialogModel(QObject * parent, EditorViewport * viewport) :
	AbstractDialogModel(parent, viewport) {

}

bool DebriefingEditorDialogModel::apply() {
	return false;
}

void DebriefingEditorDialogModel::reject() {
}

void DebriefingEditorDialogModel::initializeData() {
}

}
}
}