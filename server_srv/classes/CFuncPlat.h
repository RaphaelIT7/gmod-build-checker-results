// Generated header

class CFuncPlat : public CBasePlatTrain
{
public:
	virtual void ~CFuncPlat() override; // vtable[0]
	virtual void ~CFuncPlat() override; // vtable[1]
	virtual void GoUp(); // vtable[248]
	virtual void GoDown(); // vtable[249]
	virtual void HitTop(); // vtable[250]
	virtual void HitBottom(); // vtable[251]

	void InputToggle();
	void InputGoUp();
	void InputGoDown();
	void PlatUse();
	void GetBaseMap();
	void Setup();
	void CallGoDown();
	void CallHitTop();
	void CallHitBottom();
};
