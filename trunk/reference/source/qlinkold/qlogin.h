void qlogin_userlogin(char* pszUserID, char* pszPin);
void qlogin_blankscreen(char* pszQuestionName);
void qlogin_blankscreenok(void);
void qlogin_answerok(void);
void qlogin_updatedisk(char* pszPinCode);
void qlogin_setprimaryuser(char* pszScreenName, char* pszUserID);
void qlogin_disknotupdated(void);
void qlogin_diskupdated(void);
void qlogin_baduserorpass(void);
void qlogin_acctinvalidated(void);
void qlogin_acctinuse(void);
void qlogin_questionready(char* pszQuestionName);
void qlogin_bulletin(char* pszFilename);
int  qlogin_askforacknowledge(char* pszQuestionName, char *pszFilename);
int  qlogin_askforyesnomaybe(char* pszQuestionName, char *pszFilename);
int  qlogin_askforanswer(char* pszQuestionName, char *pszFilename);
int  qlogin_sendfreeze(char *pszQuestionName, char *pszFilename);
int  qlogin_sendinvalid(char *pszQuestionName, char *pszFilename);
void qlogin_answermaybe(char* pszQuestionName);
void qlogin_answerno(char* pszQuestionName);
void qlogin_answeryes(char* pszQuestionName);
void qlogin_answertext(char* pszQuestionName, char* pszText);
