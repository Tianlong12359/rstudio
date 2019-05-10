/* UserPrefValues.hpp
 *
 * Copyright (C) 2009-19 by RStudio, Inc.
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */
 
/* DO NOT HAND-EDIT! This file is automatically generated from the formal user preference schema
 * JSON. To add a preference, add it to "user-prefs-schema.json", then run "generate-prefs.R" to
 * rebuild this file.
 */

#ifndef SESSION_USER_STATE_VALUES_HPP
#define SESSION_USER_STATE_VALUES_HPP

#include "Preferences.hpp"

namespace rstudio {
namespace session {
namespace modules {
namespace prefs {

class UserStateValues: public Preferences
{
public:
   std::string contextId();
   std::string agreementHash();
   bool autoCreatedProfile();
   bool theme();
   std::string defaultProjectLocation();
   bool clearHidden();
   bool exportPlotOptions();
   bool exportViewerOptions();
   bool savePlotAsPdfOptions();
   bool compileRNotebookPrefs();
   bool compileRMarkdownNotebookPrefs();
   bool showPublishUi();
   bool enableRsconnectPublishUi();
   bool publishAccount();
   int documentOutlineWidth();
   std::string connectVia();
     
};

}
}
}
}

#endif