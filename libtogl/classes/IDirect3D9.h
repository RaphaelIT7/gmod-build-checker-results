// Generated header

class IDirect3D9 : public IUnknown
{
public:
	virtual ~IDirect3D9() override; // vtable[0]
	virtual ~IDirect3D9() override; // vtable[1]

	void GetAdapterCount(); // size[35]
	void GetDeviceCaps(uintparam_1, _D3DDEVTYPEparam_2, _D3DCAPS9 *param_3); // size[151]
	void GetAdapterIdentifier(uintparam_1, uintparam_2, _D3DADAPTER_IDENTIFIER9 *param_3); // size[627]
	void CheckDeviceFormat(uintparam_1, _D3DDEVTYPEparam_2, _D3DFORMATparam_3, uintparam_4, _D3DRESOURCETYPEparam_5, _D3DFORMATparam_6); // size[305]
	void GetAdapterModeCount(uintparam_1, _D3DFORMATparam_2); // size[165]
	void EnumAdapterModes(uintparam_1, _D3DFORMATparam_2, uintparam_3, _D3DDISPLAYMODE *param_4); // size[236]
	void CheckDeviceType(uintparam_1, _D3DDEVTYPEparam_2, _D3DFORMATparam_3, _D3DFORMATparam_4, intparam_5); // size[7]
	void GetAdapterDisplayMode(uintparam_1, _D3DDISPLAYMODE *param_2); // size[238]
	void CheckDepthStencilMatch(uintparam_1, _D3DDEVTYPEparam_2, _D3DFORMATparam_3, _D3DFORMATparam_4, _D3DFORMATparam_5); // size[32]
	void CheckDeviceMultiSampleType(uintparam_1, _D3DDEVTYPEparam_2, _D3DFORMATparam_3, intparam_4, _D3DMULTISAMPLE_TYPEparam_5, uint *param_6); // size[277]
	void CreateDevice(uintparam_1, _D3DDEVTYPEparam_2, void *param_3, uintparam_4, _D3DPRESENT_PARAMETERS_ *param_5, IDirect3DDevice9 * *param_6); // size[314]
};
