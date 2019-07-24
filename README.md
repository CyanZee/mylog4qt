# mylog4qt
Qt日志系统log4qt的使用例程

20190717 Qt日志系统log4qt使用

==============  log4qt日志系统使用方法  ====================

方法一:直接使用log4qt的源码

	1、下载源码https://sourceforge.net/projects/log4qt/（当前目录的文件夹log4qt为已经下载好的源码）
	
	2、将log4qt源码添加到工程中步骤：在工程的.pro文件上添加 include(log4qt/log4qt.pri)
	
	3、首先重要的一步：加载log4qt日志系统的配置文件QtLog4Qt.conf：
	
		在主程序中编写：
		
		#include "log4qt/propertyconfigurator.h"
		
		int main(...)
		{
			Log4Qt::PropertyConfigurator::configure("QtLog4Qt.conf");
			...
		}
	4、在一个继承QObject的单例中添加宏LOG4QT_DECLARE_QCLASS_LOGGER,
	此处需对应添加其头文件#include "log4qt/logger.h"
	例如：
	#include "log4qt/logger.h"
	class Config:public QObject
	{
		Q_OBJECT
		LOG4QT_DECLARE_QCLASS_LOGGER
		public:
			...
	}
	5、在对应使用的文件中添加宏定义#define USE_LOG4CPP
	使用例子：
	logger()->info("+++ ./config.json writejsonfile() success.");
	logger()->error("--- Read json file error.");
	logger()->info(QObject::tr("config: %1").arg(m_path.c_str()));
	logger()->info(QObject::tr("stp2_mfThresh: %1").arg(stp2_mfThresh));

方法二：将log4qt源码另外编译成dll文件，工程中加载dll和相应的头文件进行使用
	编译log4qt动态库文件请自行参考例子工程log4qtDll和百度。
