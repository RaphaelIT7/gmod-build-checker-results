// Generated header

class CShaderDeviceMgrEmpty : public IShaderDeviceMgr
{
public:
	virtual void Connect(_func_void_ptr_char_ptr_int_ptr *param_1); // vtable[0]
	virtual void Disconnect(); // vtable[1]
	virtual void QueryInterface(char *param_1); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Shutdown(); // vtable[4]
	virtual void GetAdapterCount(); // vtable[5]
	virtual void GetAdapterInfo(intparam_1, MaterialAdapterInfo_t *param_2); // vtable[6]
	virtual void GetRecommendedConfigurationInfo(intparam_1, intparam_2, KeyValues *param_3); // vtable[7]
	virtual void GetModeCount(intparam_1); // vtable[8]
	virtual void GetModeInfo(ShaderDisplayMode_t *param_1, intparam_2, intparam_3); // vtable[9]
	virtual void GetCurrentModeInfo(ShaderDisplayMode_t *param_1, intparam_2); // vtable[10]
	virtual void SetAdapter(intparam_1, intparam_2); // vtable[11]
	virtual void SetMode(void *param_1, intparam_2, ShaderDeviceInfo_t *param_3); // vtable[12]
	virtual void AddModeChangeCallback(_func_void *param_1); // vtable[13]
	virtual void RemoveModeChangeCallback(_func_void *param_1); // vtable[14]
};
