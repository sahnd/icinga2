/******************************************************************************
 * Icinga 2                                                                   *
 * Copyright (C) 2012 Icinga Development Team (http://www.icinga.org/)        *
 *                                                                            *
 * This program is free software; you can redistribute it and/or              *
 * modify it under the terms of the GNU General Public License                *
 * as published by the Free Software Foundation; either version 2             *
 * of the License, or (at your option) any later version.                     *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU General Public License for more details.                               *
 *                                                                            *
 * You should have received a copy of the GNU General Public License          *
 * along with this program; if not, write to the Free Software Foundation     *
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.             *
 ******************************************************************************/

#include <i2-icinga.h>

#ifndef _WIN32
#	include <ltdl.h>
#endif /* _WIN32 */

using namespace icinga;

/**
 * Entry point for the Icinga application.
 *
 * @params argc Number of command line arguments.
 * @params argv Command line arguments.
 * @returns The application's exit status.
 */
int main(int argc, char **argv)
{
	LTDL_SET_PRELOADED_SYMBOLS();

	IcingaApplication::Ptr instance = make_shared<IcingaApplication>();
	return instance->Run(argc, argv);
}
