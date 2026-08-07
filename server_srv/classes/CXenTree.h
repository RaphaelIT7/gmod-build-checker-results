// Generated header

class CXenTree : public CActAnimating
{
public:
	virtual ~CXenTree() override; // vtable[0]
	virtual ~CXenTree() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Think() override; // vtable[48]
	virtual void Classify() override; // vtable[55]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]

	void GetBaseMap(); // size[10]
	void Attack(); // size[58]
};
