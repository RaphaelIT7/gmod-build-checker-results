// Generated header

class CBaseSpriteProjectile : public CSprite
{
public:
	virtual ~CBaseSpriteProjectile() override; // vtable[0]
	virtual ~CBaseSpriteProjectile() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]
	virtual void Think() override; // vtable[48]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void HandleTouch(CBaseEntity *param_1); // vtable[246]
	virtual void HandleThink(); // vtable[247]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void Spawn(char *param_1, Vector *param_2, Vector *param_3, edict_t *param_4, MoveType_t param_5, MoveCollide_t param_6, int param_7, int param_8, CBaseEntity *param_9); // size[90]
};
