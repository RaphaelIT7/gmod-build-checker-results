// Generated header
// Estimated minimum size: 0x9C (156) bytes, no debug info available

class CJob : public CRefCounted1
{
public:
	virtual void AddRef() override; // vtable[0]
	virtual void Release() override; // vtable[1]
	virtual ~CJob() override; // vtable[2]
	virtual ~CJob() override; // vtable[3]
	virtual void Describe(); // vtable[4]
	virtual void SetDescription(char *param_1); // vtable[5]

	void DoAbort(bool param_1); // size[10]
	void DoCleanup(); // size[5]
	~CJob(); // size[10]
	~CJob(); // size[7]
};
