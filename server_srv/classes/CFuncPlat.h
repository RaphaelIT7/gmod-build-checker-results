// Generated header

class CFuncPlat : public CBasePlatTrain
{
public:
	virtual ~CFuncPlat() override; // vtable[0]
	virtual ~CFuncPlat() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Blocked() override; // vtable[105]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void GoUp(); // vtable[248]
	virtual void GoDown(); // vtable[249]
	virtual void HitTop(); // vtable[250]
	virtual void HitBottom(); // vtable[251]

	void InputToggle(); // size[0]
	void InputGoUp(); // size[0]
	void InputGoDown(); // size[0]
	void PlatUse(); // size[0]
	void GetBaseMap(); // size[0]
	void Setup(); // size[0]
	void CallGoDown(); // size[0]
	void CallHitTop(); // size[0]
	void CallHitBottom(); // size[0]
};
