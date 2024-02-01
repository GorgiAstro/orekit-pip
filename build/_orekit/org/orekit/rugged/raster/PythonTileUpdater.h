#ifndef org_orekit_rugged_raster_PythonTileUpdater_H
#define org_orekit_rugged_raster_PythonTileUpdater_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        class TileUpdater;
        class UpdatableTile;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        class PythonTileUpdater : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_updateTile_9be60dc0a7c39204,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonTileUpdater(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonTileUpdater(const PythonTileUpdater& obj) : ::java::lang::Object(obj) {}

          PythonTileUpdater();

          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void updateTile(jdouble, jdouble, const ::org::orekit::rugged::raster::UpdatableTile &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        extern PyType_Def PY_TYPE_DEF(PythonTileUpdater);
        extern PyTypeObject *PY_TYPE(PythonTileUpdater);

        class t_PythonTileUpdater {
        public:
          PyObject_HEAD
          PythonTileUpdater object;
          static PyObject *wrap_Object(const PythonTileUpdater&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
