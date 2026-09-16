// Generated header
// Estimated minimum size: 0x25AC (9644) bytes

class CLogicCase : public CLogicalEntity
{
public:
	virtual ~CLogicCase() override; // vtable[0]
	virtual ~CLogicCase() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]

	void InputValue(inputdata_t *param_1); // size[201]
	void GetBaseMap(); // size[10]
	void BuildCaseMap(uchar *param_1); // size[98]
	void InputPickRandom(inputdata_t *param_1); // size[151]
	void InputPickRandomShuffle(inputdata_t *param_1); // size[281]
};
