// Generated header

class CPathTrack : public CPointEntity
{
public:
	virtual void ~CPathTrack() override; // vtable[0]
	virtual void ~CPathTrack() override; // vtable[1]

	void _GLOBAL__sub_I_m_DataMap();
	void InputPass();
	void InputTeleport();
	void InputEnablePath();
	void InputDisablePath();
	void GetBaseMap();
	void CPathTrack();
	void BeginIteration();
	void EndIteration();
	void Visit();
	void HasBeenVisited();
	void HasAlternathPath();
	void EnableAlternatePath();
	void InputEnableAlternatePath();
	void DisableAlternatePath();
	void ToggleAlternatePath();
	void InputToggleAlternatePath();
	void InputDisableAlternatePath();
	void TogglePath();
	void InputTogglePath();
	void EnablePath();
	void DisablePath();
	void ValidPath();
	void Project();
	void GetNext();
	void GetPrevious();
	void SetPrevious();
	void Link();
	void GetNextInDir();
	void LookAhead();
	void Nearest();
	void GetOrientationType();
	void GetOrientation();
	void Instance();
};
