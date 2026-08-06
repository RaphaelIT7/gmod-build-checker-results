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

	void InputEnable(); // size[0]
	void InputDisable(); // size[0]
	void GetLadderCount(); // size[0]
	void GetLadder(); // size[0]
	void SetEndPoints(); // size[0]
	void GetTopPosition(); // size[0]
	void GetBottomPosition(); // size[0]
	void ComputeLadderDir(); // size[0]
	void GetDismountCount(); // size[0]
	void GetDismount(); // size[0]
	void PlayerGotOff(); // size[0]
	void DontGetOnLadder(); // size[0]
	void GetSurfacePropName(); // size[0]
	void GetBaseMap(); // size[0]
	void PlayerGotOn(); // size[0]
	CFuncLadder(); // size[0]
	void FindNearbyDismountPoints(); // size[0]
	void SearchForDismountPoints(); // size[0]
};
