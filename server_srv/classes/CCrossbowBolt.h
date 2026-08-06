// Generated header

class CCrossbowBolt : public CBaseCombatCharacter
{
public:
	virtual ~CCrossbowBolt() override; // vtable[0]
	virtual ~CCrossbowBolt() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputSetDamage(inputdata_t *param_1); // size[29]
	void BubbleThink(); // size[340]
	void BoltTouch(CBaseEntity *param_1); // size[787]
	void GetBaseMap(); // size[10]
	void CreateSprites(); // size[42]
};
