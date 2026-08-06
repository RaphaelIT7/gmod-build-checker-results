// Generated header

class CFlexManipulate : public CBaseEntity
{
public:
	virtual ~CFlexManipulate() override; // vtable[0]
	virtual ~CFlexManipulate() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldTransmit(CCheckTransmitInfo *param_1) override; // vtable[19]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void GetBaseMap(); // size[10]
	CFlexManipulate(); // size[28]
	void SetFlex(ucharparam_1, floatparam_2); // size[61]
	void GetFlex(ucharparam_1); // size[41]
	void SetFlexScale(floatparam_1); // size[51]
	void GetFlexScale(); // size[27]
	void SetupWeights(CBaseEntity *param_1, intparam_2, float *param_3, float *param_4); // size[5]
};
