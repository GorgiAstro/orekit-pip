#ifndef org_orekit_rugged_raster_PythonTileFactory_H
#define org_orekit_rugged_raster_PythonTileFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        class TileFactory;
        class Tile;
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

        class PythonTileFactory : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_createTile_d40b50c92d1487cb,
            mid_finalize_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonTileFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonTileFactory(const PythonTileFactory& obj) : ::java::lang::Object(obj) {}

          PythonTileFactory();

          ::org::orekit::rugged::raster::Tile createTile() const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonTileFactory);
        extern PyTypeObject *PY_TYPE(PythonTileFactory);

        class t_PythonTileFactory {
        public:
          PyObject_HEAD
          PythonTileFactory object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonTileFactory *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonTileFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonTileFactory&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
