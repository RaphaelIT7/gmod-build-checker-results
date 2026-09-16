// Generated header

class CFogVolume : public CBaseTrigger
{
public:
	virtual ~CFogVolume() override; // vtable[0]
	virtual ~CFogVolume() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void InputEnable(inputdata_t *param_1) override; // vtable[247]
	virtual void InputDisable(inputdata_t *param_1) override; // vtable[248]
	virtual void _ZN10CFogVolume11InputToggleER11inputdata_t() override; // vtable[250]

	void RemoveFromGlobalList(); // size[131]
	void GetBaseMap(); // size[10]
	void FindFogVolumeForPosition(Vector *param_1); // size[762]
	CFogVolume(); // size[84]
	void RemoveFromGlobalList(); // size[23]
	void AddToGlobalList(); // size[130]
	void AddToGlobalList(); // size[23]
};
