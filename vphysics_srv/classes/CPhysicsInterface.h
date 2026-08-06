// Generated header

class CPhysicsInterface : public CTier1AppSystem
{
public:
	virtual void Connect(_func_void_ptr_char_ptr_int_ptr *param_1); // vtable[0]
	virtual void Disconnect(); // vtable[1]
	virtual void QueryInterface(char *param_1); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Shutdown(); // vtable[4]
	virtual void CreateEnvironment(); // vtable[5]
	virtual void DestroyEnvironment(IPhysicsEnvironment *param_1); // vtable[6]
	virtual void GetActiveEnvironmentByIndex(int param_1); // vtable[7]
	virtual void CreateObjectPairHash(); // vtable[8]
	virtual void DestroyObjectPairHash(IPhysicsObjectPairHash *param_1); // vtable[9]
	virtual void FindOrCreateCollisionSet(uint param_1, int param_2); // vtable[10]
	virtual void FindCollisionSet(uint param_1); // vtable[11]
	virtual void DestroyAllCollisionSets(); // vtable[12]

	void FindOrCreateCollisionSet(uint param_1, int param_2); // size[17]
	~CPhysicsInterface(); // size[101]
};
