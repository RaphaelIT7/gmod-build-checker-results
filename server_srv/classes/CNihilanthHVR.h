// Generated header

class CNihilanthHVR : public CAI_BaseNPC
{
public:
	virtual ~CNihilanthHVR() override; // vtable[0]
	virtual ~CNihilanthHVR() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void RemoveTouch(CBaseEntity *param_1); // size[122]
	void BounceTouch(CBaseEntity *param_1); // size[48]
	void ZapTouch(CBaseEntity *param_1); // size[431]
	void GetBaseMap(); // size[10]
	void TeleportTouch(CBaseEntity *param_1); // size[421]
	void SpriteInit(char *param_1, CNihilanthHVR *param_2); // size[257]
	void CircleInit(CBaseEntity *param_1); // size[36]
	void CircleTarget(Vector param_1); // size[805]
	void HoverThink(); // size[281]
	void DissipateThink(); // size[97]
	void ZapInit(CBaseEntity *param_1); // size[39]
	void AbsorbInit(); // size[23]
	void TeleportInit(CNPC_Nihilanth *param_1, CBaseEntity *param_2, CBaseEntity *param_3, CBaseEntity *param_4); // size[36]
	void MovetoTarget(Vector param_1); // size[627]
	void TeleportThink(); // size[978]
	void GreenBallInit(); // size[36]
	void ZapThink(); // size[1087]
};
