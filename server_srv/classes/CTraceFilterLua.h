// Generated header

class CTraceFilterLua : public CTraceFilterSimpleList
{
public:
	virtual void ShouldHitEntity() override; // vtable[0]
	virtual void GetTraceType() override; // vtable[1]
	virtual void SetIgnoreWorld(); // vtable[5]
	virtual void SetIsWhitelist(); // vtable[6]
	virtual void AddEntityClassToIgnore(); // vtable[7]
	virtual void SetFunction(); // vtable[8]

	~CTraceFilterLua(); // size[0]
};
