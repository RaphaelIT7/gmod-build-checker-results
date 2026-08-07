// Generated header

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
	void InputTurnOff(inputdata_t *param_1); // size[140]
	void InputTurnOn(inputdata_t *param_1); // size[781]
};
