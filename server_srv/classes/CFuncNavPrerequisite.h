// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CFuncNavPrerequisite : public CBaseTrigger, public IFuncNavPrerequisiteAutoList
{
public:
	virtual ~CFuncNavPrerequisite() override; // vtable[0]
	virtual ~CFuncNavPrerequisite() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void InputEnable(inputdata_t *param_1) override; // vtable[247]
	virtual void InputDisable(inputdata_t *param_1) override; // vtable[248]
	virtual ~CFuncNavPrerequisite() override; // vtable[0]
	virtual ~CFuncNavPrerequisite() override; // vtable[1]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void IsTask(TaskType param_1); // size[20]
	void GetTaskEntity(); // size[230]
	CFuncNavPrerequisite(); // size[94]
};
