// Generated header

class CPhysicsInterface : public CTier1AppSystem
{
public:
	virtual void Connect(); // vtable[0]
	virtual void Disconnect(); // vtable[1]
	virtual void QueryInterface(); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Shutdown(); // vtable[4]
	virtual void CreateEnvironment(); // vtable[5]
	virtual void DestroyEnvironment(); // vtable[6]
	virtual void GetActiveEnvironmentByIndex(); // vtable[7]
	virtual void CreateObjectPairHash(); // vtable[8]
	virtual void DestroyObjectPairHash(); // vtable[9]
	virtual void FindOrCreateCollisionSet(); // vtable[10]
	virtual void FindCollisionSet(); // vtable[11]
	virtual void DestroyAllCollisionSets(); // vtable[12]

	void FindOrCreateCollisionSet(); // size[0]
	~CPhysicsInterface(); // size[0]
};
