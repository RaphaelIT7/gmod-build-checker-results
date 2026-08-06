// Generated header

class CAPCController : public CPointEntity
{
public:
	virtual ~CAPCController() override; // vtable[0]
	virtual ~CAPCController() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void ShouldSavePhysics() override; // vtable[43]
	virtual void Think() override; // vtable[48]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void ActivateRocketGuidance(); // size[53]
	void InputActivate(inputdata_t *param_1); // size[9]
	void FindTarget(string_t param_1, CBaseEntity *param_2); // size[101]
	void InRange(float param_1); // size[56]
	void AimBarrelAt(Vector *param_1); // size[417]
	void TrackTarget(); // size[743]
	void StopRotSound(); // size[124]
	void DeactivateRocketGuidance(); // size[53]
	void InputDeactivate(inputdata_t *param_1); // size[9]
	void StartRotSound(); // size[121]
};
