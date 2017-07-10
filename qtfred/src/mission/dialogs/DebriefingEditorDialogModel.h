#pragma once

#include "AbstractDialogModel.h"

#include "mission/missionbriefcommon.h"

namespace fso {
namespace fred {
namespace dialogs {

class DebriefingEditorDialogModel : public AbstractDialogModel {
public:
	DebriefingEditorDialogModel(QObject* parent, EditorViewport* viewport);

	bool apply() override;
	void reject() override;

	bool query_modified();
	private:
	void initializeData();

	template<typename T>
	void modify(T &a, const T &b);

	//sexp_tree	_m_tree;
	SCP_string	_m_text;
	SCP_string	_m_voice;
	SCP_string	_m_stage_title;
	SCP_string	_m_rec_text;
	int		_m_debriefPass_music;
	int		_m_debriefAvg_music;
	int		_m_debriefFail_music;
	int		_m_current_debriefing;
};

template<typename T>
inline void DebriefingEditorDialogModel::modify(T & a, const T & b) {
	if (a != b) {
		a = b;
		modelChanged();
	}
}

}
}
}