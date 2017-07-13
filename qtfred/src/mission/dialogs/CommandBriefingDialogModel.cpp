#include "CommandBriefingDialogModel.h"

#include "CommandBriefingDialogModel.h"

namespace fso {
namespace fred {
namespace dialogs {

CommandBriefingDialogModel::CommandBriefingDialogModel(QObject * parent, EditorViewport * viewport) :
	AbstractDialogModel(parent, viewport) {
	initializeData();
}

bool CommandBriefingDialogModel::apply() {
	return false;
}

void CommandBriefingDialogModel::reject() {

}

bool CommandBriefingDialogModel::query_modified() {
	return false;
}

void CommandBriefingDialogModel::initializeData() {

}

}
}
}