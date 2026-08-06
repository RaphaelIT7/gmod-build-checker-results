// Generated header

class CFuncPlatRot : public CFuncPlat
{
public:
	virtual ~CFuncPlatRot() override; // vtable[0]
	virtual ~CFuncPlatRot() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void GoUp() override; // vtable[248]
	virtual void _ZN12CFuncPlatRot6GoDownEv() override; // vtable[249]
	virtual void HitTop() override; // vtable[250]
	virtual void HitBottom() override; // vtable[251]

	void GetBaseMap(); // size[10]
	void SetupRotation(); // size[267]
	void RotMove(QAngle *param_1, float param_2); // size[138]
};
