#include <QDebug>

#include "png.h"
#include "zlib.h"

int main() {
	qDebug() <<
		QString("Compiled with libpng %0; using libpng %1.")
		.arg(PNG_LIBPNG_VER_STRING, png_libpng_ver);
	qDebug() << QString("Compiled with zlib %0; using zlib %1")
		.arg(ZLIB_VERSION, zlib_version);
	return 0;
}
