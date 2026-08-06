// Generated header

class CAsyncRead
{
public:
	virtual ~CAsyncRead(); // vtable[0]
	virtual ~CAsyncRead(); // vtable[1]

	_GLOBAL__sub_I_CAsyncRead(); // size[48]
	CAsyncRead(); // size[47]
	void LoadFile(char *param_1, char *param_2); // size[109]
	void Finish(); // size[125]
	void ASyncLoad(FileAsyncRequest_t *param_1, int param_2, FSAsyncStatus_t param_3); // size[191]
	void IsLoading(); // size[12]
	void IsLoaded(); // size[32]
	void IsErrored(); // size[20]
	void GetDataPointer(); // size[11]
	void GetBytes(); // size[11]
};
