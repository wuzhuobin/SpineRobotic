/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/


#include "org_mycompany_myplugin_Activator.h"
#include "MyView.h"

namespace mitk
{
  void org_mycompany_myplugin_Activator::start(ctkPluginContext *context)
  {
    BERRY_REGISTER_EXTENSION_CLASS(MyView, context)
  }

  void org_mycompany_myplugin_Activator::stop(ctkPluginContext *context) { Q_UNUSED(context) }
}
