// Generated header

class CFuncAreaPortalWindow : public CFuncAreaPortalBase
{
public:
	virtual ~CFuncAreaPortalWindow() override; // vtable[0]
	virtual ~CFuncAreaPortalWindow() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateVisibility(Vector *param_1, floatparam_2, bool *param_3) override; // vtable[246]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void InputSetFadeStartDistance(inputdata_t *param_1); // size[15]
	void InputSetFadeEndDistance(inputdata_t *param_1); // size[68]
	void GetBaseMap(); // size[10]
	CFuncAreaPortalWindow(); // size[112]
	void IsWindowOpen(Vector *param_1, floatparam_2); // size[72]
};
