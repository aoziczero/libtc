#include "stdafx.h"

#include "tc.log/logger.hpp"
#include <thread>

TEST(logger, trace) {
	tc::log::logger logger;
	std::string msg = logger.trace( "Tag" , "Msg %d", 42 );
	gout << msg << gendl;
}
