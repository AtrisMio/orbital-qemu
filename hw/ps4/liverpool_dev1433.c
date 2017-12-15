/*
 * QEMU model of Liverpool Processor Function 5 device.
 *
 * Copyright (c) 2017 Alexandro Sanchez Bach
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#include "liverpool.h"
#include "qemu/osdep.h"
#include "hw/pci/pci.h"

typedef struct LiverpoolDev1433State {
    PCIDevice parent_obj;
} LiverpoolDev1433State;

static int liverpool_dev1433_init(PCIDevice *dev)
{
    return 0;
}

static void liverpool_dev1433_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    PCIDeviceClass *pc = PCI_DEVICE_CLASS(klass);

    pc->vendor_id = 0x1022;
    pc->device_id = 0x1433;
    pc->revision = 1;
    pc->is_express = true;
    pc->class_id = PCI_CLASS_NOT_DEFINED;
    pc->init = liverpool_dev1433_init;
    dc->desc = "Liverpool Processor Function 5";
}

static const TypeInfo liverpool_dev1433_info = {
    .name          = TYPE_LIVERPOOL_DEV1433,
    .parent        = TYPE_PCI_DEVICE,
    .instance_size = sizeof(LiverpoolDev1433State),
    .class_init    = liverpool_dev1433_class_init,
};

static void liverpool_register_types(void)
{
    type_register_static(&liverpool_dev1433_info);
}

type_init(liverpool_register_types)
