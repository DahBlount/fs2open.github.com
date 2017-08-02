#pragma once

#include "AbstractDialogModel.h"

namespace fso {
namespace fred {
namespace dialogs {

class CommandBriefingDialogModel : public AbstractDialogModel {
public:
	CommandBriefingDialogModel(QObject* parent, EditorViewport* viewport);

	bool apply() override;
	void reject() override;

	bool query_modified();
private:
	void initializeData();

	SCP_string m_ani_filename;
	SCP_string m_text;
	SCP_string m_stage_title;
	SCP_string m_wave_filename;

	template<typename T>
	void modify(T &a, T &b);
};

template<typename T>
inline void CommandBriefingDialogModel::modify(T & a, T & b) {
	if (a != b) {
		a = b;
		modelChanged();
	}
}

}
}
}
