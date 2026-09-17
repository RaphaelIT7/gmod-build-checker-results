// Generated header
// Estimated minimum size: 0x30 (48) bytes

class CCountedStringPool
{
public:
	virtual ~CCountedStringPool(); // vtable[0]
	virtual ~CCountedStringPool(); // vtable[1]

	void FindStringHandle(char *param_1); // size[121]
	void FindString(char *param_1); // size[48]
	void DereferenceString(char *param_1); // size[252]
	void HandleToString(ushort param_1); // size[18]
	void SpewStrings(); // size[107]
	void ReferenceStringHandle(char *param_1); // size[345]
	void ReferenceString(char *param_1); // size[48]
	void FreeAll(); // size[245]
	CCountedStringPool(); // size[261]
};
