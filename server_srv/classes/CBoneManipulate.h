// Generated header

class CBoneManipulate : public CBaseEntity
{
public:
	virtual ~CBoneManipulate() override; // vtable[0]
	virtual ~CBoneManipulate() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldTransmit() override; // vtable[19]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void ShouldPredict(); // vtable[246]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	CBoneManipulate(); // size[0]
	void ManipulateBone(); // size[0]
	void ScaleBone(); // size[0]
	void SetBonePosition(); // size[0]
	void GetBonePosition(); // size[0]
	void SetBoneScale(); // size[0]
	void GetBoneScale(); // size[0]
	void SetBoneAngle(); // size[0]
	void GetBoneAngle(); // size[0]
	void GetJiggleInfo(); // size[0]
	void SetJiggle(); // size[0]
	void GetJiggle(); // size[0]
};
