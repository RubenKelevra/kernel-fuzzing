#include "fs-fuzzer.hh"

const fs_extents::extent _btrfs_extents[] = {
	{ 65536, 320 },
	{ 66048, 64 },
	{ 66304, 192 },
	{ 68352, 512 },
	{ 131072, 192 },
	{ 134912, 448 },
	{ 139136, 320 },
	{ 143104, 256 },
	{ 1118208, 256 },
	{ 1120512, 128 },
	{ 1120704, 64 },
	{ 1120960, 256 },
	{ 1121408, 256 },
	{ 1121856, 64 },
	{ 1121984, 128 },
	{ 1122304, 448 },
	{ 1126144, 448 },
	{ 1130304, 320 },
	{ 1134528, 192 },
	{ 1138688, 128 },
	{ 4194304, 384 },
	{ 4195520, 320 },
	{ 4196096, 192 },
	{ 4196416, 64 },
	{ 4196544, 128 },
	{ 4196800, 640 },
	{ 4197504, 320 },
	{ 4197952, 64 },
	{ 4198080, 128 },
	{ 4198400, 128 },
	{ 4202496, 448 },
	{ 4206016, 1024 },
	{ 4210112, 768 },
	{ 4214592, 1152 },
	{ 4216704, 2624 },
	{ 4222400, 1728 },
	{ 4224640, 2560 },
	{ 4231168, 192 },
	{ 4235072, 576 },
	{ 4236480, 320 },
	{ 4237056, 192 },
	{ 4237376, 64 },
	{ 4237504, 128 },
	{ 4237760, 640 },
	{ 4238464, 320 },
	{ 4238912, 64 },
	{ 4239040, 128 },
	{ 67108864, 320 },
	{ 67109376, 64 },
	{ 67109632, 192 },
	{ 67111680, 512 },
	};

const fs_extents btrfs_extents = {
	21376,
	268435456,
	51,
	_btrfs_extents,
};