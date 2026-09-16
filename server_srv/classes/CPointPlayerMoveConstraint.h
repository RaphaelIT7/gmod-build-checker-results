// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CPointPlayerMoveConstraint : public CBaseEntity
{
public:
	virtual ~CPointPlayerMoveConstraint() override; // vtable[0]
	virtual ~CPointPlayerMoveConstraint() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Activate() override; // vtable[34]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void ConstraintThink(); // size[407]
	void GetBaseMap(); // size[10]
	void InputTurnOff(inputdata_t *param_1); // size[160]
	void InputTurnOn(inputdata_t *param_1); // size[781]
};
