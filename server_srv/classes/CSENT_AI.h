// Generated header

class CSENT_AI : public CAI_BaseActor, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CSENT_AI() override; // vtable[0]
	virtual void ~CSENT_AI() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void ScriptThink(); // vtable[709]
	virtual void ScriptUse(); // vtable[710]
	virtual void PreferredCarryAngles(); // vtable[711]
	virtual void HasPreferredCarryAnglesForPlayer(); // vtable[712]
	virtual void UseBehaviour_NONE(); // vtable[713]
	virtual void UseBehaviour_ActBusy(); // vtable[714]
	virtual void UseBehaviour_FuncTank(); // vtable[715]
	virtual void UseBehaviour_Follow(); // vtable[716]
	virtual void UseBehaviour_Assault(); // vtable[717]
	virtual void UseBehaviour_Lead(); // vtable[718]
	virtual void SetStepHeight(); // vtable[719]

	void _GLOBAL__sub_I_GetServerClass();
	void HasPreferredCarryAnglesForPlayer();
	void ScriptThink();
	void GetBaseMap();
	void CSENT_AI();
	void PreferredCarryAngles();
	void NetworkStateChanged();
	void NetworkStateChanged();
};
