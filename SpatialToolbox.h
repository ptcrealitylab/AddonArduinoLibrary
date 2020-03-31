/**
 * @preserve
 *
 *                                     .,,,;;,'''..
 *                                 .'','...     ..',,,.
 *                               .,,,,,,',,',;;:;,.  .,l,
 *                              .,',.     ...     ,;,   :l.
 *                             ':;.    .'.:do;;.    .c   ol;'.
 *      ';;'                   ;.;    ', .dkl';,    .c   :; .'.',::,,'''.
 *     ',,;;;,.                ; .,'     .'''.    .'.   .d;''.''''.
 *    .oxddl;::,,.             ',  .'''.   .... .'.   ,:;..
 *     .'cOX0OOkdoc.            .,'.   .. .....     'lc.
 *    .:;,,::co0XOko'              ....''..'.'''''''.
 *    .dxk0KKdc:cdOXKl............. .. ..,c....
 *     .',lxOOxl:'':xkl,',......'....    ,'.
 *          .';:oo:...                        .
 *               .cd,    ╔═╗┌─┐┬─┐┬  ┬┌─┐┬─┐   .
 *                 .l;   ╚═╗├┤ ├┬┘└┐┌┘├┤ ├┬┘   '
 *                   'l. ╚═╝└─┘┴└─ └┘ └─┘┴└─  '.
 *                    .o.                   ...
 *                     .''''','.;:''.........
 *                          .'  .l
 *                         .:.   l'
 *                        .:.    .l.
 *                       .x:      :k;,.
 *                       cxlc;    cdc,,;;.
 *                      'l :..   .c  ,
 *                      o.
 *                     .,
 *
 *             ╦ ╦┬ ┬┌┐ ┬─┐┬┌┬┐  ╔═╗┌┐  ┬┌─┐┌─┐┌┬┐┌─┐
 *             ╠═╣└┬┘├┴┐├┬┘│ ││  ║ ║├┴┐ │├┤ │   │ └─┐
 *             ╩ ╩ ┴ └─┘┴└─┴─┴┘  ╚═╝└─┘└┘└─┘└─┘ ┴ └─┘
 *
 * Created by Valentin on 10/22/14.
 *
 * Copyright (c) 2015 Valentin Heun
 *
 * All ascii characters above must be included in any redistribution.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef SpatialToolbox_h
#define SpatialToolbox_h

#include "Arduino.h"

class SpatialToolbox {
 
    public:
        SpatialToolbox() {};
        static void update();
        static void developer();
        static void add(String obj2, String pos2, String plugin = "default");
        static void write(String  object2, String pos2, float data);
        static void writeStepUp(String obj2, String pos2);
        static void writeStepDown(String obj2, String pos2);
        static void writeStepUp(String obj2, String pos2, int steps);
        static void writeStepDown(String obj2, String pos2, int steps);
        static void writeStepSerial(String obj2, String pos2, int steps, bool direction);
        static void writeDigital(String obj2, String pos2, bool data);
        static void writeFaster(int pos, float data);

        static float read(String obj2, String pos2);
        static int   stepAvailable(String obj2, String pos2);
        static int   stepAvailable(String  obj2, String  pos2, int steps);
        static bool  readDigital(String obj2, String pos2);
        static bool  readDigital(String  obj2, String  pos2, float threshold);

    static float readFaster(int pos);
        static int printObjects();
    
    static float map(float x, float in_min, float in_max);
        static float *floatObjectArray;
        static float *floatObjectArrayOld;
    
        static bool *plusObjectArray;
        static bool *minusObjectArray;

    private:
        static void init();
        static void sendDeveloper();

        static bool clearState;
        static bool starter;
        static bool developerStatus;
        static bool runInit;
        static int caseSteper;
        static int arraySize;
        static char * object;
        static unsigned int objectInt;
        static char str[];
        static char floatStr[];
        static char **stringArray;
        static float tempFloatBuffer;
};

#endif

