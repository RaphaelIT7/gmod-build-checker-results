// Generated header
// Estimated minimum size: 0x4 (4) bytes, no debug info available

class IVModelInfo
{
public:
	virtual ~IVModelInfo(); // vtable[0]
	virtual ~IVModelInfo(); // vtable[1]

	void FindOrLoadModel(char *param_1); // size[22]
	void InitDynamicModels(); // size[16]
	void ShutdownDynamicModels(); // size[16]
	void AddDynamicModel(char *param_1, int param_2); // size[16]
	void ReferenceModel(int param_1); // size[16]
	void UnreferenceModel(int param_1); // size[16]
	void CleanupDynamicModels(bool param_1); // size[16]
};
