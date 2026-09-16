// Generated header
// Estimated minimum size: 0x25AC (9644) bytes

class CLogicAutosave : public CLogicalEntity
{
public:
	virtual ~CLogicAutosave() override; // vtable[0]
	virtual ~CLogicAutosave() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]

	void InputSave(inputdata_t *param_1); // size[60]
	void InputSetMinHitpointsThreshold(inputdata_t *param_1); // size[29]
	void InputSaveDangerous(inputdata_t *param_1); // size[271]
	void GetBaseMap(); // size[10]
};
