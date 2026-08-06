// Generated header

class CRagdollManager : public CBaseEntity
{
public:
	virtual ~CRagdollManager() override; // vtable[0]
	virtual ~CRagdollManager() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugTextOverlays() override; // vtable[40]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void GetBaseMap(); // size[10]
	CRagdollManager(); // size[28]
	void UpdateCurrentMaxRagDollCount(); // size[12]
	void InputSetMaxRagdollCount(inputdata_t *param_1); // size[35]
	void InputSetMaxRagdollCountDX8(inputdata_t *param_1); // size[35]
};
