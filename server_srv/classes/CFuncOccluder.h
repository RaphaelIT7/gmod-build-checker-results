// Generated header

class CFuncOccluder : public CBaseEntity
{
public:
	virtual ~CFuncOccluder() override; // vtable[0]
	virtual ~CFuncOccluder() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void InputActivate(inputdata_t *param_1); // size[86]
	void InputDeactivate(inputdata_t *param_1); // size[99]
	void InputToggle(inputdata_t *param_1); // size[96]
	void GetBaseMap(); // size[10]
	CFuncOccluder(); // size[28]
};
