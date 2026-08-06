// Generated header

class CFuncNavPrerequisite : public CBaseTrigger, public IFuncNavPrerequisiteAutoList
{
public:
	virtual ~CFuncNavPrerequisite() override; // vtable[0]
	virtual ~CFuncNavPrerequisite() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void InputEnable(inputdata_t *param_1) override; // vtable[247]
	virtual void InputDisable(inputdata_t *param_1) override; // vtable[248]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void IsTask(TaskType param_1); // size[20]
	void GetTaskEntity(); // size[115]
	CFuncNavPrerequisite(); // size[57]
	~CFuncNavPrerequisite(); // size[13]
	~CFuncNavPrerequisite(); // size[13]
};
