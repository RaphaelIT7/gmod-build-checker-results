// Generated header

class CHLTVDemoRecorder : public IDemoRecorder
{
public:
	virtual void GetDemoFile(); // vtable[0]
	virtual void GetRecordingTick(); // vtable[1]
	virtual void StartRecording(char *param_1, boolparam_2); // vtable[2]
	virtual void SetSignonState(intparam_1); // vtable[3]
	virtual void IsRecording(); // vtable[4]
	virtual void PauseRecording(); // vtable[5]
	virtual void ResumeRecording(); // vtable[6]
	virtual void StopRecording(); // vtable[7]
	virtual void RecordCommand(char *param_1); // vtable[8]
	virtual void RecordUserInput(intparam_1); // vtable[9]
	virtual void RecordMessages(bf_read *param_1, intparam_2); // vtable[10]
	virtual void RecordPacket(); // vtable[11]
	virtual void RecordServerClasses(ServerClass *param_1); // vtable[12]
	virtual void RecordStringTables(); // vtable[13]
	virtual void ResetDemoInterpolation() override; // vtable[14]
	virtual ~CHLTVDemoRecorder(); // vtable[15]
	virtual ~CHLTVDemoRecorder(); // vtable[16]

	_GLOBAL__sub_I_CHLTVDemoRecorder(); // size[72]
	void StopRecording(); // size[240]
	CHLTVDemoRecorder(); // size[58]
	void StartAutoRecording(); // size[195]
	void WriteMessages(ucharparam_1, bf_write *param_2); // size[389]
	void WriteServerInfo(); // size[729]
	void WriteSignonData(); // size[211]
	void WriteFrame(CHLTVFrame *param_1); // size[587]
};
