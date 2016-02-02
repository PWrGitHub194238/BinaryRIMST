/*
 * StringUtils.cpp
 *
 *  Created on: 3 wrz 2015
 *      Author: tomasz
 */

#include "../../../include/log/utils/LogUtils.hpp"

#include <log4cxx/xml/domconfigurator.h>

#include "../../../include/log/bundle/Bundle.hpp"
#include "../../../include/utils/StringUtils.hpp"

namespace LogUtils {

void configureLog(const char* xmlFileConfig) {
	log4cxx::xml::DOMConfigurator::configure(xmlFileConfig);
}

namespace impl {

const char* getBundle(BundleKey bundleKey) {
	return StringUtils::parseStringFormatSpecifiers(dictionary[bundleKey]);
}

}

}
