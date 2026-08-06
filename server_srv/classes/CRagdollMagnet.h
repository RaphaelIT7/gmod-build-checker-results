// Generated header

class CRagdollMagnet : public CPointEntity
{
public:
	virtual ~CRagdollMagnet() override; // vtable[0]
	virtual ~CRagdollMagnet() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]

	void InputEnable(inputdata_t *param_1); // size[15]
	void InputDisable(inputdata_t *param_1); // size[15]
	void GetBaseMap(); // size[10]
	void GetForceVector(CBaseEntity *param_1); // size[548]
	void DistToPoint(Vector *param_1); // size[799]
	void FindBestMagnet(CBaseEntity *param_1); // size[191]
};
