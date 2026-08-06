// Generated header

class CPropEnergyBall : public CPropCombineBall
{
public:
	virtual ~CPropEnergyBall() override; // vtable[0]
	virtual ~CPropEnergyBall() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void Think() override; // vtable[48]
	virtual void StartTouch() override; // vtable[101]
	virtual void EndTouch() override; // vtable[103]
	virtual void StopLoopingSounds() override; // vtable[109]
	virtual void NotifySystemEvent() override; // vtable[112]
	virtual void VPhysicsCollision() override; // vtable[165]
	virtual void ExplodeThink() override; // vtable[285]
	virtual void CreateSounds(); // vtable[287]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void InputBallCaught(); // size[0]
	void GetBaseMap(); // size[0]
};
