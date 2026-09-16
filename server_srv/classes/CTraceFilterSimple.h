// Generated header
// Estimated minimum size: 0x10 (16) bytes, no debug info available

class CTraceFilterSimple : public CTraceFilter
{
public:
	virtual void ShouldHitEntity(IHandleEntity *param_1, int param_2); // vtable[0]
	virtual void GetTraceType(); // vtable[1]
	virtual void ShouldHitClientEntities(); // vtable[2]
	virtual void SetPassEntity(IHandleEntity *param_1); // vtable[3]
	virtual void SetCollisionGroup(int param_1); // vtable[4]

	CTraceFilterSimple(IHandleEntity *param_1, int param_2, _func_bool_IHandleEntity_ptr_int *param_3); // size[32]
};
