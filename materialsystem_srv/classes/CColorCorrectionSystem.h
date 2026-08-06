// Generated header

class CColorCorrectionSystem : public IColorCorrectionSystem
{
public:
	virtual void Init(); // vtable[0]
	virtual void Shutdown(); // vtable[1]
	virtual void AddLookup(); // vtable[2]
	virtual void RemoveLookup(); // vtable[3]
	virtual void SetLookupWeight(); // vtable[4]
	virtual void GetLookupWeight(); // vtable[5]
	virtual void GetLookupWeight(); // vtable[6]
	virtual void LockLookup(); // vtable[7]
	virtual void LockLookup(); // vtable[8]
	virtual void UnlockLookup(); // vtable[9]
	virtual void UnlockLookup(); // vtable[10]
	virtual void SetLookup(); // vtable[11]
	virtual void SetLookup(); // vtable[12]
	virtual void GetLookup(); // vtable[13]
	virtual void GetLookup(); // vtable[14]
	virtual void LoadLookup(); // vtable[15]
	virtual void LoadLookup(); // vtable[16]
	virtual void CopyLookup(); // vtable[17]
	virtual void CopyLookup(); // vtable[18]
	virtual void ResetLookup(); // vtable[19]
	virtual void ResetLookup(); // vtable[20]
	virtual void ReleaseTextures(); // vtable[21]
	virtual void RestoreTextures(); // vtable[22]
	virtual void ResetLookupWeights(); // vtable[23]
	virtual void GetNumLookups(); // vtable[24]
	virtual void ConvertToColor24(); // vtable[25]
	virtual void SetResetable(); // vtable[26]
	virtual void EnableColorCorrection(); // vtable[27]
	virtual void GetCurrentColorCorrection(); // vtable[28]

	void SortLookups();
	void FindLookup();
	void GetLookupHandle();
	void SetLookupPtr();
	void GetNormalizedWeights();
	void ~CColorCorrectionSystem();
};
