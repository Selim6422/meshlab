TEMPLATE      = subdirs
SUBDIRS       = meshfilter \
		meshrender \
		meshio

# install
target.path = $$[QT_INSTALL_EXAMPLES]/tools/plugandpaintplugins
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS plugandpaintplugins.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/tools/plugandpaintplugins
INSTALLS += target sources
