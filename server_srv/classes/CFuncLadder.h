// Generated header

class CFuncLadder : public CBaseEntity
{
public:
	virtual ~CFuncLadder() override; // vtable[0]
	virtual ~CFuncLadder() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]

	void InputEnable(inputdata_t *param_1); // size[15]
	void InputDisable(inputdata_t *param_1); // size[15]
	void GetLadderCount(); // size[10]
	void GetLadder(intparam_1); // size[32]
	void SetEndPoints(Vector *param_1, Vector *param_2); // size[53]
	void GetTopPosition(Vector *param_1); // size[96]
	void GetBottomPosition(Vector *param_1); // size[96]
	void ComputeLadderDir(Vector *param_1); // size[128]
	void GetDismountCount(); // size[14]
	void GetDismount(intparam_1); // size[74]
	void PlayerGotOff(CBasePlayer *param_1); // size[41]
	void DontGetOnLadder(); // size[15]
	void GetSurfacePropName(); // size[14]
	void GetBaseMap(); // size[10]
	void PlayerGotOn(CBasePlayer *param_1); // size[45]
	CFuncLadder(); // size[27]
	void FindNearbyDismountPoints(Vector *param_1, floatparam_2, CUtlVector *param_3); // size[572]
	void SearchForDismountPoints(); // size[468]
};
