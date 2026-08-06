// Generated header

class CBoneManipulate : public CBaseEntity
{
public:
	virtual ~CBoneManipulate() override; // vtable[0]
	virtual ~CBoneManipulate() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldTransmit(CCheckTransmitInfo *param_1) override; // vtable[19]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void ShouldPredict(); // vtable[246]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void GetBaseMap(); // size[10]
	CBoneManipulate(); // size[28]
	void ManipulateBone(intparam_1, Vector *param_2, Quaternion *param_3); // size[134]
	void ScaleBone(intparam_1, matrix3x4_t *param_2); // size[104]
	void SetBonePosition(ucharparam_1, Vector *param_2, boolparam_3); // size[237]
	void GetBonePosition(ucharparam_1); // size[53]
	void SetBoneScale(ucharparam_1, Vector *param_2, boolparam_3); // size[164]
	void GetBoneScale(ucharparam_1); // size[53]
	void SetBoneAngle(ucharparam_1, QAngle *param_2, boolparam_3); // size[106]
	void GetBoneAngle(ucharparam_1); // size[53]
	void GetJiggleInfo(ucharparam_1); // size[46]
	void SetJiggle(ucharparam_1, ucharparam_2); // size[112]
	void GetJiggle(ucharparam_1); // size[20]
};
