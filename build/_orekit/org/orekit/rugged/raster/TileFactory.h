#ifndef org_orekit_rugged_raster_TileFactory_H
#define org_orekit_rugged_raster_TileFactory_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        class Tile;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        class TileFactory : public ::java::lang::Object {
         public:
          enum {
            mid_createTile_c36eccfe3059a213,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TileFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TileFactory(const TileFactory& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::rugged::raster::Tile createTile() const;
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
        extern PyType_Def PY_TYPE_DEF(TileFactory);
        extern PyTypeObject *PY_TYPE(TileFactory);

        class t_TileFactory {
        public:
          PyObject_HEAD
          TileFactory object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TileFactory *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TileFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TileFactory&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
