// Generated header

class CAPCController : public CPointEntity
{
public:
	virtual ~CAPCController() override; // vtable[0]
	virtual ~CAPCController() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue() override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void ShouldSavePhysics() override; // vtable[43]
	virtual void Think() override; // vtable[48]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	void ActivateRocketGuidance(); // size[0]
	void InputActivate(); // size[0]
	void FindTarget(); // size[0]
	void InRange(); // size[0]
	void AimBarrelAt(); // size[0]
	void TrackTarget(); // size[0]
	void StopRotSound(); // size[0]
	void DeactivateRocketGuidance(); // size[0]
	void InputDeactivate(); // size[0]
	void StartRotSound(); // size[0]
};
