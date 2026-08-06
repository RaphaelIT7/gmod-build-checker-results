// Generated header

class CNPC_ControllerZapBall : public CAI_BaseNPC
{
public:
	virtual ~CNPC_ControllerZapBall() override; // vtable[0]
	virtual ~CNPC_ControllerZapBall() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void GetBaseMap(); // size[10]
	void Kill(); // size[90]
	void ExplodeTouch(CBaseEntity *param_1); // size[488]
	void AnimateThink(); // size[162]
};
