// Generated header

class IDirect3DIndexBuffer9 : public IDirect3DResource9
{
public:
	virtual ~IDirect3DIndexBuffer9() override; // vtable[0]
	virtual ~IDirect3DIndexBuffer9() override; // vtable[1]

	void Lock(uintparam_1, uintparam_2, void * *param_3, uintparam_4); // size[73]
	void Unlock(); // size[40]
	void UnlockActualSize(uintparam_1, void *param_2); // size[18]
	void GetDesc(_D3DINDEXBUFFER_DESC *param_1); // size[42]
};
