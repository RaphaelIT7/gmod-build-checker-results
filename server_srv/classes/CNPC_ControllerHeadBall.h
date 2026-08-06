// Generated header

class CNPC_ControllerHeadBall : public CAI_BaseNPC
{
public:
	virtual ~CNPC_ControllerHeadBall() override; // vtable[0]
	virtual ~CNPC_ControllerHeadBall() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void KillThink(); // size[67]
	void BounceTouch(CBaseEntity *param_1); // size[347]
	void GetBaseMap(); // size[10]
	void MovetoTarget(Vector param_1); // size[482]
	void HuntThink(); // size[55]
};
