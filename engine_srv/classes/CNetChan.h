// Generated header

class CNetChan : public INetChannel
{
public:
	virtual void GetName(); // vtable[0]
	virtual void GetAddress(); // vtable[1]
	virtual void GetTime(); // vtable[2]
	virtual void GetTimeConnected(); // vtable[3]
	virtual void GetBufferSize(); // vtable[4]
	virtual void GetDataRate(); // vtable[5]
	virtual void IsLoopback(); // vtable[6]
	virtual void IsTimingOut(); // vtable[7]
	virtual void IsPlayback(); // vtable[8]
	virtual void GetLatency(); // vtable[9]
	virtual void GetAvgLatency(); // vtable[10]
	virtual void GetAvgLoss(); // vtable[11]
	virtual void GetAvgChoke(); // vtable[12]
	virtual void GetAvgData(); // vtable[13]
	virtual void GetAvgPackets(); // vtable[14]
	virtual void GetTotalData(); // vtable[15]
	virtual void GetSequenceNr(); // vtable[16]
	virtual void IsValidPacket(); // vtable[17]
	virtual void GetPacketTime(); // vtable[18]
	virtual void GetPacketBytes(); // vtable[19]
	virtual void GetStreamProgress(); // vtable[20]
	virtual void GetTimeSinceLastReceived(); // vtable[21]
	virtual void GetCommandInterpolationAmount(); // vtable[22]
	virtual void GetPacketResponseLatency(); // vtable[23]
	virtual void GetRemoteFramerate(); // vtable[24]
	virtual void GetTimeoutSeconds() override; // vtable[25]
	virtual void ~CNetChan() override; // vtable[26]
	virtual void ~CNetChan() override; // vtable[27]
	virtual void SetDataRate(); // vtable[28]
	virtual void RegisterMessage(); // vtable[29]
	virtual void StartStreaming(); // vtable[30]
	virtual void ResetStreaming(); // vtable[31]
	virtual void SetTimeout(); // vtable[32]
	virtual void SetDemoRecorder(); // vtable[33]
	virtual void SetChallengeNr(); // vtable[34]
	virtual void Reset(); // vtable[35]
	virtual void _ZN8CNetChan5ClearEv(); // vtable[36]
	virtual void Shutdown(); // vtable[37]
	virtual void ProcessPlayback(); // vtable[38]
	virtual void ProcessStream(); // vtable[39]
	virtual void ProcessPacket(); // vtable[40]
	virtual void SendNetMsg(); // vtable[41]
	virtual void SendData(); // vtable[42]
	virtual void SendFile(); // vtable[43]
	virtual void DenyFile(); // vtable[44]
	virtual void RequestFile_OLD(); // vtable[45]
	virtual void SetChoked(); // vtable[46]
	virtual void SendDatagram(); // vtable[47]
	virtual void Transmit(); // vtable[48]
	virtual void GetRemoteAddress(); // vtable[49]
	virtual void GetMsgHandler(); // vtable[50]
	virtual void GetDropNumber(); // vtable[51]
	virtual void GetSocket(); // vtable[52]
	virtual void GetChallengeNr(); // vtable[53]
	virtual void GetSequenceData(); // vtable[54]
	virtual void SetSequenceData(); // vtable[55]
	virtual void UpdateMessageStats(); // vtable[56]
	virtual void CanPacket(); // vtable[57]
	virtual void IsOverflowed(); // vtable[58]
	virtual void IsTimedOut(); // vtable[59]
	virtual void HasPendingReliableData(); // vtable[60]
	virtual void SetFileTransmissionMode(); // vtable[61]
	virtual void SetCompressionMode(); // vtable[62]
	virtual void RequestFile(); // vtable[63]
	virtual void SetMaxBufferSize(); // vtable[64]
	virtual void IsNull(); // vtable[65]
	virtual void GetNumBitsWritten(); // vtable[66]
	virtual void SetInterpolationAmount(); // vtable[67]
	virtual void SetRemoteFramerate(); // vtable[68]
	virtual void SetMaxRoutablePayloadSize(); // vtable[69]
	virtual void GetMaxRoutablePayloadSize(); // vtable[70]
	virtual void GetProtocolVersion() override; // vtable[71]

	void IsValidFileForTransfer();
	void CompressFragments();
	void UncompressFragments();
	void FlowReset();
	void Setup();
	void FlowNewPacket();
	void FlowUpdate();
	void IsFileInWaitingList();
	void RemoveHeadInWaitingList();
	void ReadSubChannelData();
	void UpdateSubChannels();
	void ProcessControlMessage();
	void GetFreeSubChannel();
	void CheckWaitingList();
	void HandleUpload();
	void ProcessPacketHeader();
	void FindMessage();
	void ProcessMessages();
	void CheckReceivingList();
	void SendReliableViaStream();
	void SendTCPData();
	void SendSubChannelData();
	void SendReliableAcknowledge();
	void ProcessStream();
	void IncrementQueuedPackets();
	void DecrementQueuedPackets();
	void HasQueuedPackets();
	void IncrementSplitPacketSequence();
	void IsValidFileForTransfer();
	void Shutdown();
	void CNetChan();
	void CreateFragmentsFromBuffer();
	void CreateFragmentsFromFile();
};
